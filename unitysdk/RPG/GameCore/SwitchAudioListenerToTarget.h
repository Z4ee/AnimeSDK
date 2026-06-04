#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_METHOD_3_DE1A9912ACCD61F0_OFFSET UNITYSDK_OFFSET(0x19CD76D0)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_METHOD_3_F7A0779E8B649CC1_OFFSET UNITYSDK_OFFSET(0x19CD7750)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD7720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAudioListenerToTarget_TypeDefinitionIndex = 20679;

	class SwitchAudioListenerToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE1A9912ACCD61F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAudioListenerToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAudioListenerToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_METHOD_3_DE1A9912ACCD61F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7A0779E8B649CC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAudioListenerToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAudioListenerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_METHOD_3_F7A0779E8B649CC1_OFFSET))(a1, a2);
		}
	};
}
