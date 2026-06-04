#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_73A4C0EDB78FB43D_OFFSET UNITYSDK_OFFSET(0x19BF80B0)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_8C2CB18A93EC2A7D_OFFSET UNITYSDK_OFFSET(0x19BF7F10)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_B478714DE88136CB_OFFSET UNITYSDK_OFFSET(0x19BF7FF0)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_D52D4F15E4284E4D_OFFSET UNITYSDK_OFFSET(0x19BF8050)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF7FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillAbortSource_TypeDefinitionIndex = 22928;

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

		static ::System::Void Method_3_D52D4F15E4284E4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_D52D4F15E4284E4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73A4C0EDB78FB43D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_METHOD_3_73A4C0EDB78FB43D_OFFSET))(a1, a2);
		}
	};
}
