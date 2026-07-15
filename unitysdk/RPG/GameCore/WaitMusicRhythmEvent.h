#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT_METHOD_3_028DA997C1ED97F1_OFFSET UNITYSDK_OFFSET(0x1D1B7290)
#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT_METHOD_3_D5783F31F96B011A_OFFSET UNITYSDK_OFFSET(0x1D1B7250)
#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B7280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicRhythmEvent_TypeDefinitionIndex = 21249;

	class WaitMusicRhythmEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LevelId; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D5783F31F96B011A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT_METHOD_3_D5783F31F96B011A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_028DA997C1ED97F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT_METHOD_3_028DA997C1ED97F1_OFFSET))(a1, a2);
		}
	};
}
