#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_857536DE69938EFB_OFFSET UNITYSDK_OFFSET(0x18DDB7A0)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_METHOD_3_B19FAAE7BA59BF2D_OFFSET UNITYSDK_OFFSET(0x18DDB880)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillTarget_TypeDefinitionIndex = 23258;

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
	};
}
