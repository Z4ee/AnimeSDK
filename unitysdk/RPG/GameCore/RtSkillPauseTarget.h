#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLPAUSETARGET_METHOD_3_42D364AE485E99BB_OFFSET UNITYSDK_OFFSET(0x1CCEE080)
#define RPG_GAMECORE_RTSKILLPAUSETARGET_METHOD_3_96053E6B7BCC5DDC_OFFSET UNITYSDK_OFFSET(0x1CCEE0D0)
#define RPG_GAMECORE_RTSKILLPAUSETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEE0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillPauseTarget_TypeDefinitionIndex = 23945;

	class RtSkillPauseTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Pause; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42D364AE485E99BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillPauseTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillPauseTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET_METHOD_3_42D364AE485E99BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96053E6B7BCC5DDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillPauseTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillPauseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET_METHOD_3_96053E6B7BCC5DDC_OFFSET))(a1, a2);
		}
	};
}
