#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_2A01848665E3CBF1_OFFSET UNITYSDK_OFFSET(0x1B771520)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_8F6E66689235D067_OFFSET UNITYSDK_OFFSET(0x1B771480)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_CB9ECD291A08BF0D_OFFSET UNITYSDK_OFFSET(0x1B7714E0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_F9CC8743A04445F6_OFFSET UNITYSDK_OFFSET(0x1B7713E0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B771470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillCastPos_TypeDefinitionIndex = 23394;

	class RtTargetMapSkillCastPos : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9CC8743A04445F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_F9CC8743A04445F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F6E66689235D067(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_8F6E66689235D067_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB9ECD291A08BF0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_CB9ECD291A08BF0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A01848665E3CBF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_2A01848665E3CBF1_OFFSET))(a1, a2);
		}
	};
}
