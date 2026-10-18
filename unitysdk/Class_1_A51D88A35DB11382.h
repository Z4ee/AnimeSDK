#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_1_A51D88A35DB11382__CTOR_OFFSET UNITYSDK_OFFSET(0x1C941D70)

inline static constexpr unsigned int Class_1_A51D88A35DB11382_TypeDefinitionIndex = 42901;

class Class_1_A51D88A35DB11382 : public ::System::Object
{
public:
	::UnityEngine::Collider* FBPGNCCDEGP; // 0x10
	::UnityEngine::Rigidbody* LIPAHKEIFOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51D88A35DB11382__CTOR_OFFSET))(this);
	}
};
