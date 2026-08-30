#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameSettings_AccelerationRingInfo.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameSettings_CarInfo.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameSettings_RoadEventInfo.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameSettings_RoadObstacleInfo.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameSettings_StartPointInfo.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDE91480)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_METHOD_5_465B1FB725CC8225_OFFSET UNITYSDK_OFFSET(0xDE915A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_METHOD_5_74D0451084850EEE_OFFSET UNITYSDK_OFFSET(0xDE91510)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDE91B50)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xDE925F0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameSettings_TypeDefinitionIndex = 75455;

	class MonoRoadRashGameSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure* Configure; // 0x18
		::UnityEngine::Transform* CinematicCameraRoot; // 0x20
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameSettings_CarInfo>* Cars; // 0x28
		::System::UInt32 PlayerCarIndex; // 0x30
		::System::Single RoadHalfWidth; // 0x34
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad*>* Roads; // 0x38
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameSettings_StartPointInfo>* StartPoints; // 0x40
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameSettings_RoadEventInfo>* RoadEvents; // 0x48
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameSettings_AccelerationRingInfo>* AccelerationRings; // 0x50
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameSettings_RoadObstacleInfo>* RoadObstacles; // 0x58
		::UnityEngine::Bounds Boundary; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Boolean Method_5_74D0451084850EEE(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_METHOD_5_74D0451084850EEE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_465B1FB725CC8225(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_METHOD_5_465B1FB725CC8225_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMESETTINGS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
