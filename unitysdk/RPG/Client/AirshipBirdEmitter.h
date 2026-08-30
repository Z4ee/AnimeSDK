#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipBirdEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_660;
class Class_1_FD711FBD7923B1D0;
namespace RPG::Client { class AirshipBird; }
namespace RPG::Client { class AirshipBirdEmitter_EmitterLevelInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPBIRDEMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC72F240)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC72E6E0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC72EE00)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC72F4D0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC72F4B0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC72E790)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC72E7E0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_22C04E98AEE4E2EB_OFFSET UNITYSDK_OFFSET(0xC72F040)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0xC72EE50)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_886F54B83F44F5F0_OFFSET UNITYSDK_OFFSET(0xC72EB30)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_C51A83DB17CCB044_OFFSET UNITYSDK_OFFSET(0xC72EB80)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_F5445E49035A19AE_OFFSET UNITYSDK_OFFSET(0xC72ED60)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC72E850)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC72EA80)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC72F400)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC72F4E0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC72F4C0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC72EFE0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC72EC90)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC72E8A0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC72F2D0)
#define RPG_CLIENT_AIRSHIPBIRDEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC72F4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBirdEmitter_TypeDefinitionIndex = 59941;

	class AirshipBirdEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single emitInterval; // 0x18
		::UnityEngine::AnimationCurve* emitIntervalCurve; // 0x20
		::System::Int32 maxAliveCount; // 0x28
		::UnityEngine::Vector2 initialEmitRange; // 0x2C
		::Il2CppArray<::RPG::Client::AirshipBirdEmitter_EmitterLevelInfo*>* levelInfo; // 0x38
		::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>* airshipEmitPrefabs; // 0x40
		::System::Int32 _CurrentMaxAliveCount_k__BackingField; // 0x48
		::System::Single _CurrentEmitInterval_k__BackingField; // 0x4C
		::System::Single ANCCFCLMLKH; // 0x50
		::System::Collections::Generic::List_1<::Class_1_FD711FBD7923B1D0*>* PGIBPPGCEEB; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_660* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_660*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Single get_WaitEmitTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_WAITEMITTIMER_OFFSET))(this);
		}

		::System::Boolean IsReadyToEmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_ISREADYTOEMIT_OFFSET))(this);
		}

		::System::Void ReadyToEmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_READYTOEMIT_OFFSET))(this);
		}

		::Class_1_FD711FBD7923B1D0* TryEmit(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::Class_1_FD711FBD7923B1D0*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYEMIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryDestroy(::Class_1_FD711FBD7923B1D0* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TRYDESTROY_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_RESETTIMER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipBird* Method_5_886F54B83F44F5F0()
		{
			return ((::RPG::Client::AirshipBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_886F54B83F44F5F0_OFFSET))(this);
		}

		static ::RPG::Client::AirshipBird* Method_5_22C04E98AEE4E2EB(::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>* a1)
		{
			return ((::RPG::Client::AirshipBird*(*)(::Il2CppArray<::RPG::Client::AirshipBirdEmitPrefab>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_22C04E98AEE4E2EB_OFFSET))(a1);
		}

		::Class_1_FD711FBD7923B1D0* Method_5_C51A83DB17CCB044(::RPG::Client::AirshipBird* a1, ::UnityEngine::Transform* a2)
		{
			return ((::Class_1_FD711FBD7923B1D0*(*)(::PVOID, ::RPG::Client::AirshipBird*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_C51A83DB17CCB044_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4DE65AB3A4860CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_4DE65AB3A4860CEB_OFFSET))(this);
		}

		::System::Void Method_5_F5445E49035A19AE(::RPG::Client::AirshipBird* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipBird*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_METHOD_5_F5445E49035A19AE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_RESET_OFFSET))(this);
		}

		::System::Int32 get_CurrentMaxAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRDEMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}
	};
}
