#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_840BA4C83CD2D827_OFFSET UNITYSDK_OFFSET(0x1D4E9650)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_BDDE36458822AD9A_OFFSET UNITYSDK_OFFSET(0x1D4E9610)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E9640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetControlSkillMapping_TypeDefinitionIndex = 22456;

	class SetControlSkillMapping : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::String* SkillTriggerKey; // 0x28
		::System::String* AIUltraSkillPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDDE36458822AD9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetControlSkillMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetControlSkillMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_BDDE36458822AD9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_840BA4C83CD2D827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_840BA4C83CD2D827_OFFSET))(a1, a2);
		}
	};
}
