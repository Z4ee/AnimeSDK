#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_8C2CB18A93EC2A7D_OFFSET UNITYSDK_OFFSET(0x18DDB520)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_B478714DE88136CB_OFFSET UNITYSDK_OFFSET(0x18DDB600)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillAbortSource_TypeDefinitionIndex = 23260;

	class RtTargetMapSkillAbortSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C2CB18A93EC2A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_8C2CB18A93EC2A7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B478714DE88136CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_B478714DE88136CB_OFFSET))(a1, a2);
		}
	};
}
