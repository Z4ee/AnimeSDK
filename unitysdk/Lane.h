#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LaneSpecialType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CarFlowIntersectionRule;
class CarFlowRoad;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LANE_METHOD_1_38E9BC70BF28BB8A_OFFSET UNITYSDK_OFFSET(0x18DA6AE0)
#define LANE_METHOD_1_512591BDB7CEBE60_OFFSET UNITYSDK_OFFSET(0x18DA6CB0)
#define LANE_METHOD_1_760A499C0F97691D_OFFSET UNITYSDK_OFFSET(0x18DA6F60)
#define LANE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA71E0)

inline static constexpr unsigned int Lane_TypeDefinitionIndex = 45302;

class Lane : public ::System::Object
{
public:
	::System::Single LaneWidth; // 0x10
	::System::Single PositionOffset; // 0x14
	::System::Boolean IsSameWay; // 0x18
	::System::Single Weight; // 0x1C
	::LaneSpecialType LaneType; // 0x20
	::System::Collections::Generic::List_1<::CarFlowIntersectionRule*>* Rules; // 0x28
	::CarFlowRoad* ParentRoad; // 0x30
	::System::Single SpawnTimer; // 0x38
	::System::Single NextSpawnInterval; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_38E9BC70BF28BB8A(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_METHOD_1_38E9BC70BF28BB8A_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_1_512591BDB7CEBE60(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_METHOD_1_512591BDB7CEBE60_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_760A499C0F97691D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANE_METHOD_1_760A499C0F97691D_OFFSET))(this);
	}
};
