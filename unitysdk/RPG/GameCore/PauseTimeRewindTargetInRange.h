#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindPauseReason.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_METHOD_3_3A7FB5361FB548CB_OFFSET UNITYSDK_OFFSET(0x1BB132B0)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_METHOD_3_F3644F7BD52A0AE7_OFFSET UNITYSDK_OFFSET(0x1BB13260)
#define RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB132A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseTimeRewindTargetInRange_TypeDefinitionIndex = 19875;

	class PauseTimeRewindTargetInRange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Single Range; // 0x1C
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Boolean IsSkill; // 0x28
		::RPG::GameCore::TimeRewindPauseReason PauseReason; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3644F7BD52A0AE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseTimeRewindTargetInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_METHOD_3_F3644F7BD52A0AE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A7FB5361FB548CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETIMEREWINDTARGETINRANGE_METHOD_3_3A7FB5361FB548CB_OFFSET))(a1, a2);
		}
	};
}
