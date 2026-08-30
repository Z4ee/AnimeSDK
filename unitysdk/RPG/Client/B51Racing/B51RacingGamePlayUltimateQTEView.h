#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC879F00)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0xC879E70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0xC87A060)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_UPDATEQTEVIEW_OFFSET UNITYSDK_OFFSET(0xC879D60)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC87A0D0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGamePlayUltimateQTEView_TypeDefinitionIndex = 80552;

	class B51RacingGamePlayUltimateQTEView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _QTEEnd; // 0x18
		::System::Single _QTEDuration; // 0x1C
		::UnityEngine::RectTransform* _HandleTransform; // 0x20
		::System::Single _FullProgressHandleWidth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void UpdateQTEView(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_UPDATEQTEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_558C6AE12602A241()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_558C6AE12602A241_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_E69F3DFB7CDFE412()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_METHOD_5_E69F3DFB7CDFE412_OFFSET))(this);
		}
	};
}
