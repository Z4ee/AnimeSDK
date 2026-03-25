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

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_DEBUG_UPDATEALLSPEEDREGIONINFO_OFFSET UNITYSDK_OFFSET(0x9F03520)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_61D63D85BCB76B0E_OFFSET UNITYSDK_OFFSET(0x9F03890)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_72D8343319FB1CDB_OFFSET UNITYSDK_OFFSET(0x9F02FA0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_853E3C989ACA913F_OFFSET UNITYSDK_OFFSET(0x9F023B0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_921B5EE2DA323FBF_OFFSET UNITYSDK_OFFSET(0x9F06080)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0x9F062E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_EBA1FCD99A55B4C2_OFFSET UNITYSDK_OFFSET(0x9F02EA0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_F908AFB307A0D324_OFFSET UNITYSDK_OFFSET(0x9F04660)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_FC9369A30C0BC9DC_OFFSET UNITYSDK_OFFSET(0x9F05B90)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9F019E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEENDPOINTPYNEXTCONNECTIONSTART_OFFSET UNITYSDK_OFFSET(0x9F04550)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEGENERATE_OFFSET UNITYSDK_OFFSET(0x9F052C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATENEXTCONNECTIONSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x9F036A0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F06460)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_TypeDefinitionIndex = 60812;

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
		::System::Single Field_5_8; // 0x50
		::System::Single Field_5_9; // 0x54
		::System::Single Field_5_10; // 0x58
		::System::Single Field_5_11; // 0x5C

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

		::System::Void Method_5_61D63D85BCB76B0E(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_61D63D85BCB76B0E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_853E3C989ACA913F(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_853E3C989ACA913F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_921B5EE2DA323FBF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_921B5EE2DA323FBF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_5_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad* Method_5_FC9369A30C0BC9DC(::System::String* a1)
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_FC9369A30C0BC9DC_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_5_EBA1FCD99A55B4C2(::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_EBA1FCD99A55B4C2_OFFSET))(this, a1);
		}

		::System::Void Method_5_F908AFB307A0D324(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_METHOD_5_F908AFB307A0D324_OFFSET))(this, a1, a2);
		}
	};
}
