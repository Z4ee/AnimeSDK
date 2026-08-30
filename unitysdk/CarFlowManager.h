#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Car;
class CarFlowIntersectionRule;
class CarFlowRoad;
class CarFlowRoadMapInfo;
class CarFlowRoadMapPosition;
class Lane;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CARFLOWMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A868910)
#define CARFLOWMANAGER_GETNEXTROUTE_OFFSET UNITYSDK_OFFSET(0x1A86B2A0)
#define CARFLOWMANAGER_METHOD_5_118F52D5C8BFF4E4_OFFSET UNITYSDK_OFFSET(0x1A86B8A0)
#define CARFLOWMANAGER_METHOD_5_13552F67455E3764_OFFSET UNITYSDK_OFFSET(0x1A86BA10)
#define CARFLOWMANAGER_METHOD_5_1953F86B3BCC0E34_OFFSET UNITYSDK_OFFSET(0x1A86B0D0)
#define CARFLOWMANAGER_METHOD_5_2DF1E18DDFFAC256_OFFSET UNITYSDK_OFFSET(0x1A86A550)
#define CARFLOWMANAGER_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x1A86B540)
#define CARFLOWMANAGER_METHOD_5_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x1A86A5E0)
#define CARFLOWMANAGER_METHOD_5_6415A809F05B92A2_OFFSET UNITYSDK_OFFSET(0x1A86A800)
#define CARFLOWMANAGER_METHOD_5_6CB03087A432B09A_OFFSET UNITYSDK_OFFSET(0x1A86B810)
#define CARFLOWMANAGER_METHOD_5_71B4B8707E3FB1F0_OFFSET UNITYSDK_OFFSET(0x1A86AC70)
#define CARFLOWMANAGER_METHOD_5_821464E984634C6E_OFFSET UNITYSDK_OFFSET(0x1A869D20)
#define CARFLOWMANAGER_METHOD_5_858C0EE85497EE5C_OFFSET UNITYSDK_OFFSET(0x1A86A680)
#define CARFLOWMANAGER_METHOD_5_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1A868960)
#define CARFLOWMANAGER_METHOD_5_BC2B5197E2682305_OFFSET UNITYSDK_OFFSET(0x1A86A9D0)
#define CARFLOWMANAGER_SPAWNCAR_OFFSET UNITYSDK_OFFSET(0x1A8698F0)
#define CARFLOWMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1A869100)
#define CARFLOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A869140)
#define CARFLOWMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A86BBE0)
#define CARFLOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86BBC0)

inline static constexpr unsigned int CarFlowManager_TypeDefinitionIndex = 47532;

class CarFlowManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Single* StaticGet_DefaultStaticCarMinDistance()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager_TypeDefinitionIndex)->GetStaticField(0x15280);
	}
	static ::System::Single* StaticGet_DefaultAverageCarLength()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager_TypeDefinitionIndex)->GetStaticField(0x15284);
	}
	::CarFlowRoadMapInfo* RoadMap; // 0x18
	::System::Collections::Generic::List_1<::Lane*>* EntryLanes; // 0x20
	::System::Collections::Generic::List_1<::Lane*>* ExitLanes; // 0x28
	::System::Collections::Generic::List_1<::Car*>* RuntimeCars; // 0x30
	::Il2CppArray<::Car*>* CarArtPrefabs; // 0x38
	::System::Single SpawnTimeInterval; // 0x40
	::System::Single SpawnTimeIntervalRange; // 0x44
	::System::Single StaticCarMinDistance; // 0x48
	::System::Single StaticCarSafetyDistance; // 0x4C
	::System::Single AverageCarLength; // 0x50
	::UnityEngine::AnimationCurve* SafetyDistance_SpeedCurve; // 0x58
	::System::Single TangentScale; // 0x60
	::System::Boolean IPKICAFDKEP; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARFLOWMANAGER__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void Method_5_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_821464E984634C6E(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_821464E984634C6E_OFFSET))(this, a1);
	}

	::System::Single Method_5_2DF1E18DDFFAC256(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_2DF1E18DDFFAC256_OFFSET))(this, a1);
	}

	::System::Single Method_5_71B4B8707E3FB1F0(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_71B4B8707E3FB1F0_OFFSET))(this, a1);
	}

	::System::Single Method_5_1953F86B3BCC0E34(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_1953F86B3BCC0E34_OFFSET))(this, a1);
	}

	::System::Single Method_5_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_BC2B5197E2682305(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_BC2B5197E2682305_OFFSET))(this, a1);
	}

	::System::Void Method_5_858C0EE85497EE5C(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_858C0EE85497EE5C_OFFSET))(this, a1);
	}

	::System::Void Method_5_6415A809F05B92A2(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_6415A809F05B92A2_OFFSET))(this, a1);
	}

	::System::Void SpawnCar(::Lane* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Lane*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_SPAWNCAR_OFFSET))(this, a1);
	}

	::Car* Method_5_6CB03087A432B09A()
	{
		return ((::Car*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_6CB03087A432B09A_OFFSET))(this);
	}

	::CarFlowIntersectionRule* GetNextRoute(::CarFlowRoadMapPosition* a1, ::CarFlowRoad* a2)
	{
		return ((::CarFlowIntersectionRule*(*)(::PVOID, ::CarFlowRoadMapPosition*, ::CarFlowRoad*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_GETNEXTROUTE_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Single> Method_5_118F52D5C8BFF4E4(::Car* a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Single>(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_118F52D5C8BFF4E4_OFFSET))(this, a1);
	}

	::System::Single Method_5_13552F67455E3764(::Car* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::Car*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_13552F67455E3764_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}
};
