#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TrackExtensionMonoPlugin; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

#define CLASS_1_0AC0DA1FD76496C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19111520)
#define CLASS_1_0AC0DA1FD76496C6_GETCLOSESTPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x19111750)
#define CLASS_1_0AC0DA1FD76496C6_GETDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x19111420)
#define CLASS_1_0AC0DA1FD76496C6_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0x19111570)
#define CLASS_1_0AC0DA1FD76496C6_GETNORMALBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x19111900)
#define CLASS_1_0AC0DA1FD76496C6_GETPOSITIONBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x19111A50)
#define CLASS_1_0AC0DA1FD76496C6_GETPOSITIONINFOBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x191115D0)
#define CLASS_1_0AC0DA1FD76496C6_GETTANGENTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x191119B0)
#define CLASS_1_0AC0DA1FD76496C6_GET_ENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x19111B50)
#define CLASS_1_0AC0DA1FD76496C6_GET_MONO_OFFSET UNITYSDK_OFFSET(0x19111AF0)
#define CLASS_1_0AC0DA1FD76496C6_GET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x19111B30)
#define CLASS_1_0AC0DA1FD76496C6_GET_STARTDISTANCE_OFFSET UNITYSDK_OFFSET(0x19111B40)
#define CLASS_1_0AC0DA1FD76496C6_GET_TRACK_OFFSET UNITYSDK_OFFSET(0x19111B10)
#define CLASS_1_0AC0DA1FD76496C6_SET_MONO_OFFSET UNITYSDK_OFFSET(0x19111B00)
#define CLASS_1_0AC0DA1FD76496C6_SET_TRACK_OFFSET UNITYSDK_OFFSET(0x19111B20)
#define CLASS_1_0AC0DA1FD76496C6__CTOR_OFFSET UNITYSDK_OFFSET(0x191113D0)

inline static constexpr unsigned int Class_1_0AC0DA1FD76496C6_TypeDefinitionIndex = 75489;

class Class_1_0AC0DA1FD76496C6 : public ::System::Object
{
public:
	::RPG::Client::RoadRash::MonoRoadRashGameRoad* _Mono_k__BackingField; // 0x10
	::RPG::Client::TrackExtensionMonoPlugin* _Track_k__BackingField; // 0x18
	::System::Boolean _Positive_k__BackingField; // 0x20
	::System::Single _StartDistance_k__BackingField; // 0x24
	::System::Single _EndDistance_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_DISPOSE_OFFSET))(this);
	}

	::System::Single GetDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETDISTANCE_OFFSET))(this);
	}

	::System::Single GetDistance_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETDISTANCE_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetPositionInfoByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETPOSITIONINFOBYDISTANCE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 GetClosestPositionInfo(::UnityEngine::Vector3 a1, ::System::Single& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETCLOSESTPOSITIONINFO_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 GetNormalByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETNORMALBYDISTANCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetTangentByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETTANGENTBYDISTANCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetPositionByDistance(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GETPOSITIONBYDISTANCE_OFFSET))(this, a1);
	}

	::RPG::Client::RoadRash::MonoRoadRashGameRoad* get_Mono()
	{
		return ((::RPG::Client::RoadRash::MonoRoadRashGameRoad*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GET_MONO_OFFSET))(this);
	}

	::System::Void set_Mono(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_SET_MONO_OFFSET))(this, a1);
	}

	::RPG::Client::TrackExtensionMonoPlugin* get_Track()
	{
		return ((::RPG::Client::TrackExtensionMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GET_TRACK_OFFSET))(this);
	}

	::System::Void set_Track(::RPG::Client::TrackExtensionMonoPlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackExtensionMonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_SET_TRACK_OFFSET))(this, a1);
	}

	::System::Boolean get_Positive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GET_POSITIVE_OFFSET))(this);
	}

	::System::Single get_StartDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GET_STARTDISTANCE_OFFSET))(this);
	}

	::System::Single get_EndDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC0DA1FD76496C6_GET_ENDDISTANCE_OFFSET))(this);
	}
};
