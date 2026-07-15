#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterBodyControlData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_56D44D1559CFAD9D_METHOD_3_3F96E3F9CDF8DFEE_OFFSET UNITYSDK_OFFSET(0x17F79E30)
#define CLASS_3_56D44D1559CFAD9D_METHOD_3_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x17F79BB0)
#define CLASS_3_56D44D1559CFAD9D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F79FB0)

inline static constexpr unsigned int Class_3_56D44D1559CFAD9D_TypeDefinitionIndex = 46163;

class Class_3_56D44D1559CFAD9D : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPGTools::Timeline::CharacterBodyControlData* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56D44D1559CFAD9D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56D44D1559CFAD9D_METHOD_3_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_3F96E3F9CDF8DFEE(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_56D44D1559CFAD9D_METHOD_3_3F96E3F9CDF8DFEE_OFFSET))(this, a1);
	}
};
