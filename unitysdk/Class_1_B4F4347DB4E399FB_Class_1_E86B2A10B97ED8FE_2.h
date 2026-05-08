#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_B4F4347DB4E399FB_CLASS_1_E86B2A10B97ED8FE_2_METHOD_1_FD68C66EACD6313C_OFFSET UNITYSDK_OFFSET(0x14CD5B60)
#define CLASS_1_B4F4347DB4E399FB_CLASS_1_E86B2A10B97ED8FE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD5B50)

inline static constexpr unsigned int Class_1_B4F4347DB4E399FB_Class_1_E86B2A10B97ED8FE_2_TypeDefinitionIndex = 67787;

class Class_1_B4F4347DB4E399FB_Class_1_E86B2A10B97ED8FE_2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_CLASS_1_E86B2A10B97ED8FE_2__CTOR_OFFSET))(this);
	}

	::Foundation::DualQuaternion Method_1_FD68C66EACD6313C()
	{
		return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F4347DB4E399FB_CLASS_1_E86B2A10B97ED8FE_2_METHOD_1_FD68C66EACD6313C_OFFSET))(this);
	}
};
