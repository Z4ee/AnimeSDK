#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0x1661AA10)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x1661B230)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1661AFA0)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x1661AD00)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x1661AEE0)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x1661AE20)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET UNITYSDK_OFFSET(0x16616EE0)
#define RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1661B310)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleTransportPad_TypeDefinitionIndex = 78276;

	class PadsPuzzleTransportPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::RPG::Client::Prop::PadsPuzzleTransportPad* theOtherTransportPad; // 0x70
		::UnityEngine::GameObject* effect; // 0x78
		::System::Boolean alreadyTransported; // 0x80
		::UnityEngine::GameObject* FIAKAEBFOGO; // 0x88
		::UnityEngine::Animator* FALOCKLLNPK; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void TriggerTeleportEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_TRIGGERTELEPORTEFFECT_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_7_0581090195E9C81F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLETRANSPORTPAD_METHOD_7_0581090195E9C81F_OFFSET))(this);
		}
	};
}
