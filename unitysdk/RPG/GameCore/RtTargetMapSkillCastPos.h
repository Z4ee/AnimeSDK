#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_8F6E66689235D067_OFFSET UNITYSDK_OFFSET(0x18DDB740)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_METHOD_3_D86298FC3F931F09_OFFSET UNITYSDK_OFFSET(0x18DDB660)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillCastPos_TypeDefinitionIndex = 23259;

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
	};
}
