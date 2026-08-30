#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AirshipCarEmitPrefab.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_660;
class Class_1_7D7F702D8900BCB8;
namespace RPG::Client { class AirshipCar; }
namespace RPG::Client { class AirshipCarEmitter_EmitterLevelInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPCAREMITTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC7340B0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET UNITYSDK_OFFSET(0xC733550)
#define RPG_CLIENT_AIRSHIPCAREMITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC733C70)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC734340)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC734320)
#define RPG_CLIENT_AIRSHIPCAREMITTER_GET_WAITEMITTIMER_OFFSET UNITYSDK_OFFSET(0xC733600)
#define RPG_CLIENT_AIRSHIPCAREMITTER_ISREADYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC733650)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_26BC5457168EC899_OFFSET UNITYSDK_OFFSET(0xC7339F0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0xC733CC0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_795F027B3CD81A67_OFFSET UNITYSDK_OFFSET(0xC733BD0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_959552A5A036D346_OFFSET UNITYSDK_OFFSET(0xC733EB0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_9C0516FF3847DE51_OFFSET UNITYSDK_OFFSET(0xC7339A0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_READYTOEMIT_OFFSET UNITYSDK_OFFSET(0xC7336C0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0xC7338F0)
#define RPG_CLIENT_AIRSHIPCAREMITTER_RESET_OFFSET UNITYSDK_OFFSET(0xC734270)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET UNITYSDK_OFFSET(0xC734350)
#define RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC734330)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TICK_OFFSET UNITYSDK_OFFSET(0xC733E50)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYDESTROY_OFFSET UNITYSDK_OFFSET(0xC733B00)
#define RPG_CLIENT_AIRSHIPCAREMITTER_TRYEMIT_OFFSET UNITYSDK_OFFSET(0xC733710)
#define RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0xC734140)
#define RPG_CLIENT_AIRSHIPCAREMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC734360)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCarEmitter_TypeDefinitionIndex = 59953;

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
		::System::Single ANCCFCLMLKH; // 0x50
		::System::Collections::Generic::List_1<::Class_1_7D7F702D8900BCB8*>* PGIBPPGCEEB; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_660* CreateManager(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_660*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_CREATEMANAGER_OFFSET))(this, a1, a2);
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

		::System::Void Method_5_4DE65AB3A4860CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_4DE65AB3A4860CEB_OFFSET))(this);
		}

		::System::Void Method_5_795F027B3CD81A67(::RPG::Client::AirshipCar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_METHOD_5_795F027B3CD81A67_OFFSET))(this, a1);
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

		::System::Void set_CurrentMaxAliveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTMAXALIVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_CurrentEmitInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_GET_CURRENTEMITINTERVAL_OFFSET))(this);
		}

		::System::Void set_CurrentEmitInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_SET_CURRENTEMITINTERVAL_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelInfo(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAREMITTER_UPDATELEVELINFO_OFFSET))(this, a1);
		}
	};
}
