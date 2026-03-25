#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_ANIMATIONTOTARGETCOL_OFFSET UNITYSDK_OFFSET(0xA18D080)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0xA1939C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_ENABLEROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xA190610)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_INITRING_OFFSET UNITYSDK_OFFSET(0xA189D10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_LOGICTOTARGETCOL_OFFSET UNITYSDK_OFFSET(0xA195360)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xA18A1C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0xA1920E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA195000)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA195550)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER__DELAYSHOW_B__22_0_OFFSET UNITYSDK_OFFSET(0xA195560)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleRingController_TypeDefinitionIndex = 64383;

	class WormCompassPuzzleRingController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _StartRotateSoundEvent; // 0x0
		// static const ::System::String* _StopRotateSoundEvent; // 0x0
		::System::Int32 Row; // 0x18
		::System::Int32 ColDelta; // 0x1C
		::System::Single RotateDuration; // 0x20
		::UnityEngine::AnimationCurve* RotationCurve; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* ItemList; // 0x30
		::System::Int32 CurrCol; // 0x38
		::System::Single Field_5_6; // 0x3C
		::System::Single Field_5_7; // 0x40
		::System::Single Field_5_8; // 0x44
		::System::Boolean Field_5_9; // 0x48
		::System::Int32 Field_5_10; // 0x4C
		::System::Int32 Field_5_11; // 0x50
		::System::Action* Field_5_12; // 0x58
		::System::Boolean Field_5_13; // 0x60
		::RPG::Client::Prop::WormCompassPuzzleBoard* Field_5_14; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void InitRing(::RPG::Client::Prop::WormCompassPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_INITRING_OFFSET))(this, a1);
		}

		::System::Void AnimationToTargetCol(::System::Int32 a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_ANIMATIONTOTARGETCOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LogicToTargetCol(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_LOGICTOTARGETCOL_OFFSET))(this, a1);
		}

		::System::Void Select(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_SELECT_OFFSET))(this, a1);
		}

		::System::Void EnableRouteEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_ENABLEROUTEEFFECT_OFFSET))(this, a1);
		}

		::System::Void DelayShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER_DELAYSHOW_OFFSET))(this, a1);
		}

		::System::Void _DelayShow_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLERINGCONTROLLER__DELAYSHOW_B__22_0_OFFSET))(this);
		}
	};
}
