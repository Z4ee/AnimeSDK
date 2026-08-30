#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashCameraShake_RoadRashCameraShake.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBasicMultiChannelPerlin; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDE7A830)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDE7A7C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xDE7A3B0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0xDE7A920)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STARTSHAKE_OFFSET UNITYSDK_OFFSET(0xDE7A620)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0xDE7A6D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_TICK_OFFSET UNITYSDK_OFFSET(0xDE7A080)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xDE7A970)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCameraShake_TypeDefinitionIndex = 75428;

	class MonoRoadRashCameraShake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RoadRash::MonoRoadRashCameraShake_RoadRashCameraShake>* CameraShakes; // 0x18
		::Cinemachine::CinemachineFreeLook* Camera; // 0x20
		::System::Boolean editorUpdate; // 0x28
		::Cinemachine::CinemachineBasicMultiChannelPerlin* OBIEPHKGFAD; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EFMPDHDGAPC; // 0x38
		::System::Int32 JFELLAPNGGJ; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* KOAIOCGABOF; // 0x48
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* NMFFDDKMFAO; // 0x50
		::System::Int32 CIHPIBADLCD; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_TICK_OFFSET))(this, a1);
		}

		::System::Void StartShake(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STARTSHAKE_OFFSET))(this, a1);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_STOPSHAKE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_EBAF10BBA97B82DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASHAKE_METHOD_5_EBAF10BBA97B82DD_OFFSET))(this);
		}
	};
}
