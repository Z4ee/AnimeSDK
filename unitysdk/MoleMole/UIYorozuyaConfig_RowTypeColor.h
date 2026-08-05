#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UIYOROZUYACONFIG_ROWTYPECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19188170)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaConfig_RowTypeColor_TypeDefinitionIndex = 69076;

	class UIYorozuyaConfig_RowTypeColor : public ::System::Object
	{
	public:
		::UnityEngine::Color StartColor; // 0x10
		::UnityEngine::Color EndColor; // 0x20
		::System::Single AlphaTiling; // 0x30
		::System::Single AlphaOffset; // 0x34
		::System::Single ChangeTime; // 0x38
		::UnityEngine::Color nameColor; // 0x3C
		::System::String* nameText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACONFIG_ROWTYPECOLOR__CTOR_OFFSET))(this);
		}
	};
}
