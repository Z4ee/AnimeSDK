#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindPauseReason.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSETIMEREWINDTARGET_METHOD_3_230287D4DEE482CA_OFFSET UNITYSDK_OFFSET(0x18BD94E0)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGET_METHOD_3_A9BB3D1375506E0D_OFFSET UNITYSDK_OFFSET(0x18BD9580)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD9540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseTimeRewindTarget_TypeDefinitionIndex = 19630;

	class PauseTimeRewindTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::System::Boolean IsSkill; // 0x30
		::RPG::GameCore::TimeRewindPauseReason PauseReason; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_230287D4DEE482CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET_METHOD_3_230287D4DEE482CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9BB3D1375506E0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGET_METHOD_3_A9BB3D1375506E0D_OFFSET))(a1, a2);
		}
	};
}
