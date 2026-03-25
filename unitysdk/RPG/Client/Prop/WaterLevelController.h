#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WaterLevelControllerInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class WaterLevelPuzzleBoardPlus; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA17B320)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA17ADD0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA17B040)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xA17A5F0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_1B167429A8B82AD3_1_OFFSET UNITYSDK_OFFSET(0xA17B1A0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xA17B210)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0xA17B680)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0xA17B700)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xA17B280)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0xA17BBA0)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA17BA50)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA17B130)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_1_OFFSET UNITYSDK_OFFSET(0xA17B610)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xA17B410)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0xA17B480)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_ONWATERLEVELCHANGEEND_OFFSET UNITYSDK_OFFSET(0xA17AF20)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_REFRESHCURRENTACTIVEINDEX_OFFSET UNITYSDK_OFFSET(0xA17A950)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xA17AE50)
#define RPG_CLIENT_PROP_WATERLEVELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA17BC60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelController_TypeDefinitionIndex = 64367;

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
		::System::Int32 Field_5_8; // 0x54
		::System::Collections::Generic::List_1<::System::String*>* Field_5_9; // 0x58
		::RPG::Client::Prop::WaterLevelPuzzleBoardPlus* Field_5_10; // 0x60
		::Class_2_2679F01039F3FC24* Field_5_11; // 0x68
		::UnityEngine::Animator* Field_5_12; // 0x70
		::System::Int32 Field_5_13; // 0x78
		::System::Int32 Field_5_14; // 0x7C
		::System::Int32 Field_5_15; // 0x80

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

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_1B167429A8B82AD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_1B167429A8B82AD3_OFFSET))(this);
		}

		::System::Void Method_5_1B167429A8B82AD3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_1B167429A8B82AD3_1_OFFSET))(this);
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

		::System::Void Method_5_36726F9E10ADB55F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_36726F9E10ADB55F_OFFSET))(this);
		}

		::System::Boolean Method_5_28141171CE1C76E0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_28141171CE1C76E0_OFFSET))(this, a1);
		}

		::System::Void Method_5_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Method_5_7646FFE662147970_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELCONTROLLER_METHOD_5_7646FFE662147970_1_OFFSET))(this);
		}
	};
}
