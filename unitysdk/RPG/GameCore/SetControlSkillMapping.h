#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_CC21A2FBFDB581C4_OFFSET UNITYSDK_OFFSET(0x18E13530)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_D6DE1575E4F357D3_OFFSET UNITYSDK_OFFSET(0x18E134B0)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x18E13500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetControlSkillMapping_TypeDefinitionIndex = 21610;

	class SetControlSkillMapping : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::String* SkillTriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6DE1575E4F357D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetControlSkillMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetControlSkillMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_D6DE1575E4F357D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC21A2FBFDB581C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_METHOD_3_CC21A2FBFDB581C4_OFFSET))(a1, a2);
		}
	};
}
