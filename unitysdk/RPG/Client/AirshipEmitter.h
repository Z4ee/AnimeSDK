#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_391;
class Class_0_16E4307DCC419505_660;
class Class_1_5F439A66B759DFD0;
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipEmitter_EmitterLevelInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPEMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC7359E0)
#define RPG_CLIENT_AIRSHIPEMITTER_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xC735EA0)
#define RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC734490)
#define RPG_CLIENT_AIRSHIPEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC735250)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC735E60)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC735E40)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC735E80)
#define RPG_CLIENT_AIRSHIPEMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC734520)
#define RPG_CLIENT_AIRSHIPEMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC734570)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_1FFBCA2671193585_OFFSET UNITYSDK_OFFSET(0xC734960)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xC735D60)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0xC735C40)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_4E7FADC1B404C65B_OFFSET UNITYSDK_OFFSET(0xC734910)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_A3979D70DA6179B4_OFFSET UNITYSDK_OFFSET(0xC7357E0)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xC7352A0)
#define RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_DC40FACD38678F76_OFFSET UNITYSDK_OFFSET(0xC7351D0)
#define RPG_CLIENT_AIRSHIPEMITTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC735CD0)
#define RPG_CLIENT_AIRSHIPEMITTER_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xC735F20)
#define RPG_CLIENT_AIRSHIPEMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC7345E0)
#define RPG_CLIENT_AIRSHIPEMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC734860)
#define RPG_CLIENT_AIRSHIPEMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC735DC0)
#define RPG_CLIENT_AIRSHIPEMITTER_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xC735EE0)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC735E70)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC735E50)
#define RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xC735E90)
#define RPG_CLIENT_AIRSHIPEMITTER_SHOULDEMITBYSIGNAL_OFFSET UNITYSDK_OFFSET(0xC735760)
#define RPG_CLIENT_AIRSHIPEMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC7356D0)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC734F40)
#define RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC734630)
#define RPG_CLIENT_AIRSHIPEMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC735B10)
#define RPG_CLIENT_AIRSHIPEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC735FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipEmitter_TypeDefinitionIndex = 59929;

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
		::System::Single ANCCFCLMLKH; // 0x74
		::System::Collections::Generic::List_1<::Class_1_5F439A66B759DFD0*>* PGIBPPGCEEB; // 0x78
		::System::Boolean EEKOJGCGHLB; // 0x80
		::System::Single MEEEDHKBDJL; // 0x84
		::System::Int32 DFGABAIIJOH; // 0x88
		::Class_0_16E4307DCC419505_391* _OwnerFMSystem_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_660* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_660*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
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

		::Class_1_5F439A66B759DFD0* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::Class_1_5F439A66B759DFD0*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::Class_1_5F439A66B759DFD0* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F439A66B759DFD0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_TRYDESTROY_OFFSET))(this, a1);
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

		::Class_1_5F439A66B759DFD0* Method_5_1FFBCA2671193585(::RPG::Client::Airship* a1, ::UnityEngine::Transform* a2)
		{
			return ((::Class_1_5F439A66B759DFD0*(*)(::PVOID, ::RPG::Client::Airship*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_1FFBCA2671193585_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C56DC3B2E26040B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_C56DC3B2E26040B8_OFFSET))(this);
		}

		::System::Void Method_5_DC40FACD38678F76(::RPG::Client::Airship* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_DC40FACD38678F76_OFFSET))(this, a1);
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

		::System::Void Method_5_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_5_3B258437A86233AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_METHOD_5_3B258437A86233AC_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_391* get_OwnerFMSystem()
		{
			return ((::Class_0_16E4307DCC419505_391*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::Class_0_16E4307DCC419505_391* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_391*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPEMITTER_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
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
