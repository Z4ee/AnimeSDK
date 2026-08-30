#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadItem; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadTrigger; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_DEBUG_UPDATEALLSPEEDREGIONINFO_OFFSET UNITYSDK_OFFSET(0xDA2C510)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_47424911C5436EA2_OFFSET UNITYSDK_OFFSET(0xDA2B1A0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_5389068FEB5B4D81_OFFSET UNITYSDK_OFFSET(0xDA2C830)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_72D8343319FB1CDB_OFFSET UNITYSDK_OFFSET(0xDA2BF10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_921B5EE2DA323FBF_OFFSET UNITYSDK_OFFSET(0xDA2F500)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_97013D7C4AA8CA8B_OFFSET UNITYSDK_OFFSET(0xDA2BDA0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0xDA2F760)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CF9A8F549904EB45_OFFSET UNITYSDK_OFFSET(0xDA2EEC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_D87B4D4B0BD2A856_OFFSET UNITYSDK_OFFSET(0xDA2D850)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDA2A920)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEENDPOINTPYNEXTCONNECTIONSTART_OFFSET UNITYSDK_OFFSET(0xDA2D740)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEGENERATE_OFFSET UNITYSDK_OFFSET(0xDA2E6D0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATENEXTCONNECTIONSTARTPOINT_OFFSET UNITYSDK_OFFSET(0xDA2C670)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD__CTOR_OFFSET UNITYSDK_OFFSET(0xDA2F8E0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_TypeDefinitionIndex = 74056;

	class MonoParkourRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::UnityEngine::Vector2Int RoadRange; // 0x20
		::System::Int32 StartPointIndex; // 0x28
		::System::Int32 EndPointIndex; // 0x2C
		::BGCurveExtention* Curve; // 0x30
		::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* Connection; // 0x38
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*>* Items; // 0x40
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*>* Triggers; // 0x48
		::System::Single HDCNNMLMFAA; // 0x50
		::System::Single EECKKIEPEDH; // 0x54
		::System::Single COCCEOCDJLA; // 0x58
		::System::Single AAJPCONCACN; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Debug_UpdateAllSpeedRegionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_DEBUG_UPDATEALLSPEEDREGIONINFO_OFFSET))(this);
		}

		::System::Void UpdateNextConnectionStartPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATENEXTCONNECTIONSTARTPOINT_OFFSET))(this);
		}

		::System::Void UpdateEndPointPyNextConnectionStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEENDPOINTPYNEXTCONNECTIONSTART_OFFSET))(this);
		}

		::System::Void UpdateGenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEGENERATE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_5_72D8343319FB1CDB(::RPG::Client::ParkourGame::MonoParkourRoad* a1, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad*, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_72D8343319FB1CDB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5389068FEB5B4D81(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_5389068FEB5B4D81_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_47424911C5436EA2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_47424911C5436EA2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_921B5EE2DA323FBF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_921B5EE2DA323FBF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad* Method_5_CF9A8F549904EB45(::System::String* a1)
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CF9A8F549904EB45_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_5_97013D7C4AA8CA8B(::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_97013D7C4AA8CA8B_OFFSET))(this, a1);
		}

		::System::Void Method_5_D87B4D4B0BD2A856(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_D87B4D4B0BD2A856_OFFSET))(this, a1, a2);
		}
	};
}
