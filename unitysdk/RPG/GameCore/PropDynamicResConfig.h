#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDYNAMICRESCONFIG_METHOD_2_C2B0709CF16CCBDC_OFFSET UNITYSDK_OFFSET(0x18C6A150)
#define RPG_GAMECORE_PROPDYNAMICRESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6A340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDynamicResConfig_TypeDefinitionIndex = 16686;

	class PropDynamicResConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DefaultDynamicAnimController; // 0x10
		::Il2CppArray<::System::String*>* LayerDefaultClipNames; // 0x18
		::Il2CppArray<::System::String*>* LayerSpeedParamNames; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDynamicResConfigItem*>* ConfigItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C2B0709CF16CCBDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDynamicResConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDynamicResConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIG_METHOD_2_C2B0709CF16CCBDC_OFFSET))(a1, a2);
		}
	};
}
