#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_EntryOrigin.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_Layout.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_StartCorner.h"
#include "unitysdk/System/Object.h"

#define RPG_UINAVIGATION_UINAVIGATIONAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B513D20)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationAreaConfig_TypeDefinitionIndex = 52030;

	class UINavigationAreaConfig : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigationArea_Layout Layout; // 0x10
		::RPG::UINavigation::UINavigationArea_StartCorner StartCorner; // 0x14
		::RPG::UINavigation::UINavigationArea_EntryOrigin EntryOrigin; // 0x18
		::System::Boolean SaveNavigation; // 0x1C
		::System::Single Directivity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREACONFIG__CTOR_OFFSET))(this);
		}
	};
}
