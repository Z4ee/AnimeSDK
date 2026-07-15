#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HimekoNovaAssistSkillUIConfig; }

#define RPG_GAMECORE_ASSISTSKILLUICONFIG_METHOD_2_C9CEC86FEE6565B8_OFFSET UNITYSDK_OFFSET(0x1A05BE60)
#define RPG_GAMECORE_ASSISTSKILLUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05BEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistSkillUIConfig_TypeDefinitionIndex = 17463;

	class AssistSkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HimekoNovaAssistSkillUIConfig* HimekoNovaAssistSkillUIConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTSKILLUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C9CEC86FEE6565B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistSkillUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistSkillUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTSKILLUICONFIG_METHOD_2_C9CEC86FEE6565B8_OFFSET))(a1, a2);
		}
	};
}
