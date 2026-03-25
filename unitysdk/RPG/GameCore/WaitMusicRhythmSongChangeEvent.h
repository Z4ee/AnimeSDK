#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_METHOD_3_9116A0895C54B235_OFFSET UNITYSDK_OFFSET(0x178FEB30)
#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_METHOD_3_AAD79541107427C4_OFFSET UNITYSDK_OFFSET(0x178FEAB0)
#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x178FEB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicRhythmSongChangeEvent_TypeDefinitionIndex = 20240;

	class WaitMusicRhythmSongChangeEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAD79541107427C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_METHOD_3_AAD79541107427C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9116A0895C54B235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_METHOD_3_9116A0895C54B235_OFFSET))(a1, a2);
		}
	};
}
