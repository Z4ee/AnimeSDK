#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xA10C310)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xA10C590)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xA10C730)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xA10C680)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA10C900)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_INITSTATE_OFFSET UNITYSDK_OFFSET(0xA10C910)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xA10C920)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xA10C990)
#define RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xA10C930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleStartPad_TypeDefinitionIndex = 64196;

	class PadsPuzzleStartPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::UnityEngine::GameObject* effect; // 0x70
		::UnityEngine::GameObject* startEffect; // 0x78
		::UnityEngine::GameObject* Field_7_2; // 0x80
		::UnityEngine::GameObject* Field_7_3; // 0x88
		::UnityEngine::Animator* Field_7_4; // 0x90

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

		::System::Void __iFixBaseProxy_InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_INITSTATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLESTARTPAD___IFIXBASEPROXY_PUZZLERESET_OFFSET))(this);
		}
	};
}
