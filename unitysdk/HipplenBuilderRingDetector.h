#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define HIPPLENBUILDERRINGDETECTOR_GETCLOSESTPREDICTIONPOINT_OFFSET UNITYSDK_OFFSET(0x15AD9610)
#define HIPPLENBUILDERRINGDETECTOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x15ADBB90)
#define HIPPLENBUILDERRINGDETECTOR_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x15ADBFF0)
#define HIPPLENBUILDERRINGDETECTOR_PREDICTFUTUREPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15ADB900)
#define HIPPLENBUILDERRINGDETECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x15ADB1B0)
#define HIPPLENBUILDERRINGDETECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADC250)

inline static constexpr unsigned int HipplenBuilderRingDetector_TypeDefinitionIndex = 47666;

class HipplenBuilderRingDetector : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rigidbody* projectile; // 0x18
	::UnityEngine::Transform* predictionPoint; // 0x20
	::System::Single gravity; // 0x28
	::System::Single timeStep; // 0x2C
	::System::Int32 predictionSteps; // 0x30
	::System::Single neckHelperForce; // 0x34
	::UnityEngine::Transform* COIKNAHIIEI; // 0x38
	::System::Boolean ECMGPIOBPBM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* GetClosestPredictionPoint(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR_GETCLOSESTPREDICTIONPOINT_OFFSET))(this, a1);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR_ONTRIGGERENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR_ONTRIGGERSTAY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PredictFuturePositions()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERRINGDETECTOR_PREDICTFUTUREPOSITIONS_OFFSET))(this);
	}
};
