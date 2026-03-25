#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_327;
class Class_0_16E4307DCC419505_488;
class Class_1_20A9882BBF853CEE;
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipEmitter_EmitterLevelInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPEMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9099C70)
#define RPG_CLIENT_AIRSHIPEMITTER_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x909A140)
#define RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0x9098680)
#define RPG_CLIENT_AIRSHIPEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9099420)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0x909A100)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x909A0E0)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x909A120)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0x9098710)
#define RPG_CLIENT_AIRSHIPEMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0x9098760)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2255B3F0FA1619FE_OFFSET UNITYSDK_OFFSET(0x9098BA0)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2C33C3CB06D1D95F_OFFSET UNITYSDK_OFFSET(0x90993A0)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x9099E40)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x9099F60)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_4E7FADC1B404C65B_OFFSET UNITYSDK_OFFSET(0x9098B50)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_A3979D70DA6179B4_OFFSET UNITYSDK_OFFSET(0x9099A70)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x9099470)
#define RPG_CLIENT_AIRSHIPEMITTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9099ED0)
#define RPG_CLIENT_AIRSHIPEMITTER_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x909A1C0)
#define RPG_CLIENT_AIRSHIPEMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0x90987D0)
#define RPG_CLIENT_AIRSHIPEMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0x9098AA0)
#define RPG_CLIENT_AIRSHIPEMITTER_RESET_OFFSET UNITYSDK_OFFSET(0x9099FC0)
#define RPG_CLIENT_AIRSHIPEMITTER_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x909A180)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0x909A110)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x909A0F0)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x909A130)
#define RPG_CLIENT_AIRSHIPEMITTER_SHOULDEMITBYSIGNAL_OFFSET UNITYSDK_OFFSET(0x90999F0)
#define RPG_CLIENT_AIRSHIPEMITTER_TICK_OFFSET UNITYSDK_OFFSET(0x9099960)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0x9099120)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0x9098820)
#define RPG_CLIENT_AIRSHIPEMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x9099D50)
#define RPG_CLIENT_AIRSHIPEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x909A260)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipEmitter_TypeDefinitionIndex = 48410;

	class AirshipEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean useSyncLoad; // 0x18
		::System::Single emitInterval; // 0x1C
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::Il2CppArray<::RPG::Client::AirshipEmitter_EmitterLevelInfo*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Boolean enableSignalBinding; // 0x48
		::System::String* signalChannelName; // 0x50
		::System::Int32 targetSignValue; // 0x58
		::System::Single emitTimeOffset; // 0x5C
		::System::Int32 debugCurrentSignalValue; // 0x60
		::System::Boolean debugSignalMatched; // 0x64
		::System::Single debugEmitCountdown; // 0x68
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x6C
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x70
		::System::Single Field_5_16; // 0x74
		::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_5_17; // 0x78
		::System::Boolean Field_5_18; // 0x80
		::System::Single Field_5_19; // 0x84
		::System::Int32 Field_5_20; // 0x88
		::Class_0_16E4307DCC419505_327* _OwnerFMSystem_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_488* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_488*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_READYTOEMIT_OFFSET))(this);
		}

		::Class_1_20A9882BBF853CEE* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::Class_1_20A9882BBF853CEE*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::Class_1_20A9882BBF853CEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_20A9882BBF853CEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ShouldEmitBySignal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SHOULDEMITBYSIGNAL_OFFSET))(this);
		}

		::RPG::Client::Airship* Method_5_4E7FADC1B404C65B()
		{
			return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_4E7FADC1B404C65B_OFFSET))(this);
		}

		static ::RPG::Client::Airship* Method_5_A3979D70DA6179B4(::Il2CppArray<::RPG::Client::AirshipEmitPrefab>* a1)
		{
			return ((::RPG::Client::Airship*(*)(::Il2CppArray<::RPG::Client::AirshipEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_A3979D70DA6179B4_OFFSET))(a1);
		}

		::Class_1_20A9882BBF853CEE* Method_5_2255B3F0FA1619FE(::RPG::Client::Airship* a1, ::UnityEngine::Transform* a2)
		{
			return ((::Class_1_20A9882BBF853CEE*(*)(::PVOID, ::RPG::Client::Airship*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2255B3F0FA1619FE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FEE7938AD36467E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_FEE7938AD36467E5_OFFSET))(this);
		}

		::System::Void Method_5_2C33C3CB06D1D95F(::RPG::Client::Airship* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2C33C3CB06D1D95F_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_RESET_OFFSET))(this);
		}

		::System::Void Method_5_2F0F99A12DB93F30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_2F0F99A12DB93F30_OFFSET))(this);
		}

		::System::Void Method_5_3B7145E79424FB75()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3B7145E79424FB75_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, value);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_327* get_OwnerFMSystem()
		{
			return ((::Class_0_16E4307DCC419505_327*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_327* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET))(this, value);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_ONSAMPLE_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}
	};
}
