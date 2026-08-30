#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_Class_1_840480C78D39CB70; }
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_PreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_1B856EBC2CA7A274_OFFSET UNITYSDK_OFFSET(0xDE8D460)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_1CA0F27A750F142A_OFFSET UNITYSDK_OFFSET(0xDE8D900)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_22E2AAA27D01258F_OFFSET UNITYSDK_OFFSET(0xDE8E580)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_5EC9653F33CC734C_OFFSET UNITYSDK_OFFSET(0xDE8CB40)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_61077A503B5DBB84_OFFSET UNITYSDK_OFFSET(0xDE8E020)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_848DC3DE5BBA4FBF_OFFSET UNITYSDK_OFFSET(0xDE8C810)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_88BFC64A6E80E5DB_OFFSET UNITYSDK_OFFSET(0xDE8C980)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_CCD7B9751D03600B_OFFSET UNITYSDK_OFFSET(0xDE8E740)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_DF70B30DD7EC8E09_OFFSET UNITYSDK_OFFSET(0xDE8C6C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xDE8D080)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDE8C930)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDE8CAB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xDE8D010)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_RESETPREVIEW_OFFSET UNITYSDK_OFFSET(0xDE8D400)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_STOP_OFFSET UNITYSDK_OFFSET(0xDE8D3C0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDE8C580)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDE8E990)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreview_TypeDefinitionIndex = 75441;

	class MonoRoadRashGamePreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single GABMANGIJBO; // 0x0
		// static const ::System::Single KOBEMBMDLBJ; // 0x0
		// static const ::System::Single NMMAIECOBGC; // 0x0
		// static const ::System::Single AENFKPGMPAI; // 0x0
		::RPG::Client::RoadRash::MonoRoadRashGameSettings* GameSettings; // 0x18
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar*>* PreviewCars; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RoadRash::MonoRoadRashGamePreview_Class_1_840480C78D39CB70*>* AEPGJFIOOLM; // 0x28
		::System::Boolean OFEPHLEKKCD; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_STOP_OFFSET))(this);
		}

		::System::Void ResetPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_RESETPREVIEW_OFFSET))(this);
		}

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_5_88BFC64A6E80E5DB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_88BFC64A6E80E5DB_OFFSET))(this);
		}

		::System::Void Method_5_848DC3DE5BBA4FBF(::RPG::Client::RoadRash::MonoRoadRashGamePreview_Class_1_840480C78D39CB70* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_Class_1_840480C78D39CB70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_848DC3DE5BBA4FBF_OFFSET))(this, a1);
		}

		::System::Void Method_5_5EC9653F33CC734C(::System::Int32 a1, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_5EC9653F33CC734C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_1CA0F27A750F142A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_1CA0F27A750F142A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_1B856EBC2CA7A274(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_1B856EBC2CA7A274_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_5_61077A503B5DBB84(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_61077A503B5DBB84_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_DF70B30DD7EC8E09(::RPG::Client::RoadRash::MonoRoadRashGameRoad*& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_DF70B30DD7EC8E09_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_CCD7B9751D03600B(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_CCD7B9751D03600B_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Method_5_22E2AAA27D01258F(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
		{
			return ((::RPG::Client::RoadRash::MonoRoadRashGameRoad*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_METHOD_5_22E2AAA27D01258F_OFFSET))(this, a1);
		}
	};
}
