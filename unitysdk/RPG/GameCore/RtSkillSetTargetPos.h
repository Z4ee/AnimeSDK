#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPosOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/RtSkillSetTargetPosSortRule.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicVector3; }
namespace RPG::GameCore { class RtTargetFormationPosConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLSETTARGETPOS_METHOD_3_59E16479D672DA65_OFFSET UNITYSDK_OFFSET(0x18DD76E0)
#define RPG_GAMECORE_RTSKILLSETTARGETPOS_METHOD_3_B331144CB74ADD53_OFFSET UNITYSDK_OFFSET(0x18DD7650)
#define RPG_GAMECORE_RTSKILLSETTARGETPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD76B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillSetTargetPos_TypeDefinitionIndex = 23235;

	class RtSkillSetTargetPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x28
		::RPG::GameCore::DynamicVector3* Offset; // 0x30
		::RPG::GameCore::RtPosOffsetCoordType OffsetCoord; // 0x38
		::RPG::GameCore::TargetEvaluator* SpecifyCenterTarget; // 0x40
		::RPG::GameCore::RtSkillSetTargetPosSortRule TargetSortRule; // 0x48
		::RPG::GameCore::RtTargetFormationPosConfig* TargetFormation; // 0x50
		::Il2CppArray<::RPG::GameCore::RtTargetFormationPosConfig*>* LeftSideFormations; // 0x58
		::Il2CppArray<::RPG::GameCore::RtTargetFormationPosConfig*>* RightSideFormations; // 0x60
		::System::Single ShoveRatio; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B331144CB74ADD53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillSetTargetPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillSetTargetPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS_METHOD_3_B331144CB74ADD53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59E16479D672DA65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillSetTargetPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillSetTargetPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLSETTARGETPOS_METHOD_3_59E16479D672DA65_OFFSET))(a1, a2);
		}
	};
}
