#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xDCDAB00)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xDCDAD80)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDCDAEE0)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDCDAE70)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCDB0B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleStartPad_TypeDefinitionIndex = 78276;

	class PadsPuzzleStartPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::UnityEngine::GameObject* effect; // 0x70
		::UnityEngine::GameObject* startEffect; // 0x78
		::UnityEngine::GameObject* FIAKAEBFOGO; // 0x80
		::UnityEngine::GameObject* OBIODAHPKCB; // 0x88
		::UnityEngine::Animator* FALOCKLLNPK; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLERESET_OFFSET))(this);
		}
	};
}
