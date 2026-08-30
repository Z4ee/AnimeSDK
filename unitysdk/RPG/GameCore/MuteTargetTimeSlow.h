#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_58A07545469F2B7A_OFFSET UNITYSDK_OFFSET(0x1D2ED0B0)
#define RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_9F82D578078F8E35_OFFSET UNITYSDK_OFFSET(0x1D2ED060)
#define RPG_GAMECORE_MUTETARGETTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ED0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteTargetTimeSlow_TypeDefinitionIndex = 23555;

	class MuteTargetTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsMute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F82D578078F8E35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteTargetTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteTargetTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_9F82D578078F8E35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58A07545469F2B7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTETARGETTIMESLOW_METHOD_3_58A07545469F2B7A_OFFSET))(a1, a2);
		}
	};
}
