#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WaterLevelControllerInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x17B25CF0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B25840)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x17B259E0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x17B25220)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x17B26000)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x17B25AE0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17B25BA0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x17B26340)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x17B261E0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x17B25C60)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_1_OFFSET UNITYSDK_OFFSET(0x17B25F90)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x17B25D80)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x17B26080)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x17B25A70)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x17B25DF0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ONWATERLEVELCHANGEEND_OFFSET UNITYSDK_OFFSET(0x17B25990)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_REFRESHCURRENTACTIVEINDEX_OFFSET UNITYSDK_OFFSET(0x17B25560)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x17B258C0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B26400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelController_TypeDefinitionIndex = 78446;

	class WaterLevelController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DelayAfterAnimFinish; // 0x18
		::System::String* WaitAnimStateName; // 0x20
		::System::String* ControllerAnimatorParamName; // 0x28
		::System::Int32 WaterLevelControllerInvalidState; // 0x30
		::Il2CppArray<::RPG::Client::Prop::WaterLevelControllerInfo>* ControllerInfos; // 0x38
		::System::Single DelayActiveTime; // 0x40
		::System::String* ActiveCustomString; // 0x48
		::System::Single TargetWaterLevelChangeDelay; // 0x50
		::System::Int32 HOCNNGAIFGB; // 0x54
		::System::Collections::Generic::List_1<::System::String*>* LPIANMKADEK; // 0x58
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* COAMCKILKPH; // 0x60
		::Class_2_2679F01039F3FC24* BCALOKFAJFH; // 0x68
		::UnityEngine::Animator* OGOFKDNPINI; // 0x70
		::System::Int32 NGBGAHCDDJF; // 0x78
		::System::Int32 LHGLGIKHMMI; // 0x7C
		::System::Int32 GLGEFIFACBA; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WaterLevelPuzzleBoardPlus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void OnWaterLevelChangeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ONWATERLEVELCHANGEEND_OFFSET))(this);
		}

		::System::Void RefreshCurrentActiveIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_REFRESHCURRENTACTIVEINDEX_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void Method_5_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_5_EDBE0DAF47EEEEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_EDBE0DAF47EEEEED_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_5_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_5_A1781348F0A89177_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_1_OFFSET))(this);
		}

		::System::Void Method_5_FD1A8012013ED9C5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_FD1A8012013ED9C5_OFFSET))(this, a1);
		}

		::System::Void Method_5_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_EAD10B3E55E2C4C5_OFFSET))(this);
		}

		::System::Boolean Method_5_28141171CE1C76E0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_28141171CE1C76E0_OFFSET))(this, a1);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_4D2A473556700CDC_1_OFFSET))(this);
		}
	};
}
