#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_234F2B7F1D6579F9_OFFSET UNITYSDK_OFFSET(0x1B771390)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_4A23325FFE6775EA_OFFSET UNITYSDK_OFFSET(0x1B771290)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_73A4C0EDB78FB43D_OFFSET UNITYSDK_OFFSET(0x1B7713D0)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_B478714DE88136CB_OFFSET UNITYSDK_OFFSET(0x1B771330)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B771320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillAbortSource_TypeDefinitionIndex = 23395;

	class RtTargetMapSkillAbortSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A23325FFE6775EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_4A23325FFE6775EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B478714DE88136CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_B478714DE88136CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_234F2B7F1D6579F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_234F2B7F1D6579F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73A4C0EDB78FB43D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_73A4C0EDB78FB43D_OFFSET))(a1, a2);
		}
	};
}
