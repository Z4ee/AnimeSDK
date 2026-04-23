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

#define LANE_METHOD_1_245DAC87743A0F36_OFFSET UNITYSDK_OFFSET(0x90B7720)
#define LANE_METHOD_1_92DEBBA487CC3465_OFFSET UNITYSDK_OFFSET(0x90B7980)
#define LANE_METHOD_1_DB4566C5411DFC07_OFFSET UNITYSDK_OFFSET(0x90B7CC0)
#define LANE__CTOR_OFFSET UNITYSDK_OFFSET(0x90B7FB0)

inline static constexpr unsigned int Lane_TypeDefinitionIndex = 43886;

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

	::UnityEngine::Vector3 Method_1_245DAC87743A0F36(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_METHOD_1_245DAC87743A0F36_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_1_92DEBBA487CC3465(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LANE_METHOD_1_92DEBBA487CC3465_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DB4566C5411DFC07()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LANE_METHOD_1_DB4566C5411DFC07_OFFSET))(this);
	}
};
