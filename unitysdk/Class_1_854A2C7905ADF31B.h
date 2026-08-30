#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_854A2C7905ADF31B__CTOR_OFFSET UNITYSDK_OFFSET(0x19B45A80)

inline static constexpr unsigned int Class_1_854A2C7905ADF31B_TypeDefinitionIndex = 69629;

class Class_1_854A2C7905ADF31B : public ::System::Object
{
public:
	::UnityEngine::RectTransform* NBJICLPDGFD; // 0x10
	::UnityEngine::Transform* NGOPIKCKJMA; // 0x18
	::UnityEngine::Vector2 DPIJEOOFHIN; // 0x20
	::UnityEngine::Vector3 BNGJDBHHMFO; // 0x28
	::System::Single OLKEBGEMAOD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854A2C7905ADF31B__CTOR_OFFSET))(this);
	}
};
