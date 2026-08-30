#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_COLORITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD87AB40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_ColorItem_TypeDefinitionIndex = 68940;

	class MonoUIColorSwitcher_ColorItem : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::UnityEngine::Color Color; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_COLORITEM__CTOR_OFFSET))(this);
		}
	};
}
