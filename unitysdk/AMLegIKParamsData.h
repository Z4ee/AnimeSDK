#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int AMLegIKParamsData_TypeDefinitionIndex = 74898;

struct alignas(8) AMLegIKParamsData
{
	::UnityEngine::GameObject* pelvis; // 0x10
	::System::String* pelvisCpName; // 0x18
	::Il2CppArray<::UnityEngine::GameObject*>* feet; // 0x20
	::Il2CppArray<::UnityEngine::GameObject*>* toes; // 0x28
	::Il2CppArray<::System::String*>* PosQuatNames; // 0x30
	::System::Single FootUpVelocityLimit; // 0x38
	::System::Single FootDownVelocityLimit; // 0x3C
	::System::Single RayCastHeight; // 0x40
	::System::Single PredictRayCastHeight; // 0x44
	::System::Single EffectorCastMaxDist; // 0x48
	::UnityEngine::LayerMask IKLayerMask; // 0x4C
};
