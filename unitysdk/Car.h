#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CarFlowRoadMapPosition;
class CarStateParam;
namespace UnityEngine { class GameObject; }

#define CAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1846E6C0)

inline static constexpr unsigned int Car_TypeDefinitionIndex = 45297;

class Car : public ::System::Object
{
public:
	::UnityEngine::GameObject* CarArt; // 0x10
	::System::Single CarMaxSpeed; // 0x18
	::System::Single CurrentSpeed; // 0x1C
	::System::Single LastFrameSpeed; // 0x20
	::CarFlowRoadMapPosition* CarPosition; // 0x28
	::CarStateParam* CarParam; // 0x30
	::System::Boolean IsDestroy; // 0x38
	::System::Single CarFollowSpeed; // 0x3C
	::System::Single CarFollowDistance; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAR__CTOR_OFFSET))(this);
	}
};
