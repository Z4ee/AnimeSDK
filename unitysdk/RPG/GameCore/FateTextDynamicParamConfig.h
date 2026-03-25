#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace RPG::GameCore { class TextDynamicParamBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_METHOD_2_0A185335023494E7_OFFSET UNITYSDK_OFFSET(0x171CDE10)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CDF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamConfig_TypeDefinitionIndex = 15250;

	class FateTextDynamicParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::TextDynamicParamBase*>* Params; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0A185335023494E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateTextDynamicParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateTextDynamicParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMCONFIG_METHOD_2_0A185335023494E7_OFFSET))(a1, a2);
		}
	};
}
