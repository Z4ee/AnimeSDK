#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_Layout.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_StartCorner.h"
#include "unitysdk/System/Object.h"

#define RPG_UINAVIGATION_UINAVIGATIONAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAB095F0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationAreaConfig_TypeDefinitionIndex = 41828;

	class UINavigationAreaConfig : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigationArea_Layout Layout; // 0x10
		::RPG::UINavigation::UINavigationArea_StartCorner StartCorner; // 0x14
		::System::Boolean SaveNavigation; // 0x18
		::System::Single Directivity; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREACONFIG__CTOR_OFFSET))(this);
		}
	};
}
