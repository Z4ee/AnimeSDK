#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_1_METHOD_1_8CB77D1F2445E1C7_OFFSET UNITYSDK_OFFSET(0x159AE580)
#define CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x159AE570)

inline static constexpr unsigned int Class_1_7E9140739F099B31_Class_1_E86B2A10B97ED8FE_1_TypeDefinitionIndex = 51218;

class Class_1_7E9140739F099B31_Class_1_E86B2A10B97ED8FE_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_1__CTOR_OFFSET))(this);
	}

	::Foundation::DualQuaternion Method_1_8CB77D1F2445E1C7()
	{
		return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_1_METHOD_1_8CB77D1F2445E1C7_OFFSET))(this);
	}
};
