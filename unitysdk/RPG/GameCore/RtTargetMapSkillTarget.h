#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_515C826E974EBEBF_OFFSET UNITYSDK_OFFSET(0x19BF83B0)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_57E463234AA0370F_OFFSET UNITYSDK_OFFSET(0x19BF8410)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_857536DE69938EFB_OFFSET UNITYSDK_OFFSET(0x19BF8270)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_B19FAAE7BA59BF2D_OFFSET UNITYSDK_OFFSET(0x19BF8350)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF8330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillTarget_TypeDefinitionIndex = 22926;

	class RtTargetMapSkillTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_857536DE69938EFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_857536DE69938EFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B19FAAE7BA59BF2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_B19FAAE7BA59BF2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_515C826E974EBEBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_515C826E974EBEBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57E463234AA0370F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_57E463234AA0370F_OFFSET))(a1, a2);
		}
	};
}
