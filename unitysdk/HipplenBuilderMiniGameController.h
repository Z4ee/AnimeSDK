#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderMiniGameController_RingGameState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BabyHipplenController;
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HIPPLENBUILDERMINIGAMECONTROLLER_METHOD_5_D16D471AE6EB753A_OFFSET UNITYSDK_OFFSET(0x17A663D0)
#define HIPPLENBUILDERMINIGAMECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17A652E0)
#define HIPPLENBUILDERMINIGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A66460)

inline static constexpr unsigned int HipplenBuilderMiniGameController_TypeDefinitionIndex = 45412;

class HipplenBuilderMiniGameController : public ::UnityEngine::MonoBehaviour
{
public:
	::BabyHipplenController* BabyHipplen; // 0x18
	::UnityEngine::Transform* RingInitTrans; // 0x20
	::UnityEngine::Transform* RingChargeTrans; // 0x28
	::UnityEngine::Transform* CameraTrans; // 0x30
	::UnityEngine::GameObject* RingPrefab; // 0x38
	::System::Boolean isPredictionMode; // 0x40
	::System::Single timeForceMult; // 0x44
	::System::Single forwardSpd; // 0x48
	::System::Single verticalSpd; // 0x4C
	::System::Single aimTime; // 0x50
	::HipplenBuilderMiniGameController_RingGameState Field_5_10; // 0x54
	::UnityEngine::GameObject* Field_5_11; // 0x58
	::System::Single Field_5_12; // 0x60
	::System::Single Field_5_13; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_D16D471AE6EB753A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERMINIGAMECONTROLLER_METHOD_5_D16D471AE6EB753A_OFFSET))(this, a1);
	}
};
