#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0xAE8AB00)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_METHOD_7_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0xAE8B920)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAE8B670)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xAE8B000)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE8B500)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xAE8B350)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xAE8B820)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_INITSTATE_OFFSET UNITYSDK_OFFSET(0xAE8B840)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xAE8B850)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE8B8C0)
#define RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xAE8B860)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleEndPad_TypeDefinitionIndex = 72240;

	class PadsPuzzleEndPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::UnityEngine::GameObject* effect; // 0x70
		::UnityEngine::GameObject* endEffect; // 0x78
		::UnityEngine::GameObject* Field_7_2; // 0x80
		::UnityEngine::GameObject* Field_7_3; // 0x88
		::UnityEngine::Animator* Field_7_4; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_METHOD_7_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_INITSTATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD___IFIXBASEPROXY_PUZZLERESET_OFFSET))(this);
		}

		::System::Void Method_7_46E030E6F5465A66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEENDPAD_METHOD_7_46E030E6F5465A66_OFFSET))(this);
		}
	};
}
