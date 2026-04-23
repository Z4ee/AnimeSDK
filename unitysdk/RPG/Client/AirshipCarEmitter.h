#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_567;
class Class_1_7D7F702D8900BCB8;
namespace RPG::Client { class AirshipCar; }
namespace RPG::Client { class AirshipCarEmitter_EmitterLevelInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPCAREMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CF5460)
#define RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0x9CF4890)
#define RPG_CLIENT_AIRSHIPCAREMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CF5000)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0x9CF56F0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x9CF56D0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0x9CF4940)
#define RPG_CLIENT_AIRSHIPCAREMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0x9CF4990)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_26BC5457168EC899_OFFSET UNITYSDK_OFFSET(0x9CF4D80)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_2F22101E49EA7CA0_OFFSET UNITYSDK_OFFSET(0x9CF4F60)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_959552A5A036D346_OFFSET UNITYSDK_OFFSET(0x9CF5260)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_9C0516FF3847DE51_OFFSET UNITYSDK_OFFSET(0x9CF4D30)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x9CF5050)
#define RPG_CLIENT_AIRSHIPCAREMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0x9CF4A00)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0x9CF4C80)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESET_OFFSET UNITYSDK_OFFSET(0x9CF55B0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0x9CF5700)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x9CF56E0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TICK_OFFSET UNITYSDK_OFFSET(0x9CF5200)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0x9CF4E90)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0x9CF4A50)
#define RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x9CF54C0)
#define RPG_CLIENT_AIRSHIPCAREMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CF5710)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarEmitter_TypeDefinitionIndex = 55182;

	class AirshipCarEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single emitInterval; // 0x18
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::Il2CppArray<::RPG::Client::AirshipCarEmitter_EmitterLevelInfo*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x48
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x4C
		::System::Single Field_5_8; // 0x50
		::System::Collections::Generic::List_1<::Class_1_7D7F702D8900BCB8*>* Field_5_9; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_567* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_567*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_READYTOEMIT_OFFSET))(this);
		}

		::Class_1_7D7F702D8900BCB8* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::Class_1_7D7F702D8900BCB8*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::Class_1_7D7F702D8900BCB8* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7D7F702D8900BCB8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipCar* Method_5_9C0516FF3847DE51()
		{
			return ((::RPG::Client::AirshipCar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_9C0516FF3847DE51_OFFSET))(this);
		}

		static ::RPG::Client::AirshipCar* Method_5_959552A5A036D346(::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>* a1)
		{
			return ((::RPG::Client::AirshipCar*(*)(::Il2CppArray<::RPG::Client::AirshipCarEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_959552A5A036D346_OFFSET))(a1);
		}

		::Class_1_7D7F702D8900BCB8* Method_5_26BC5457168EC899(::RPG::Client::AirshipCar* a1, ::UnityEngine::Transform* a2)
		{
			return ((::Class_1_7D7F702D8900BCB8*(*)(::PVOID, ::RPG::Client::AirshipCar*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_26BC5457168EC899_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FCB175EE4400634C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_FCB175EE4400634C_OFFSET))(this);
		}

		::System::Void Method_5_2F22101E49EA7CA0(::RPG::Client::AirshipCar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_2F22101E49EA7CA0_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_RESET_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, value);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, value);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}
	};
}
