#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_2A01848665E3CBF1_OFFSET UNITYSDK_OFFSET(0x19BF8260)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_4DACBECCAF552C01_OFFSET UNITYSDK_OFFSET(0x19BF8200)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_8F6E66689235D067_OFFSET UNITYSDK_OFFSET(0x19BF81A0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_D86298FC3F931F09_OFFSET UNITYSDK_OFFSET(0x19BF80C0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF8180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillCastPos_TypeDefinitionIndex = 22927;

	class RtTargetMapSkillCastPos : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D86298FC3F931F09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_D86298FC3F931F09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F6E66689235D067(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_8F6E66689235D067_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DACBECCAF552C01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_4DACBECCAF552C01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A01848665E3CBF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_2A01848665E3CBF1_OFFSET))(a1, a2);
		}
	};
}
