#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_METHOD_1_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0x15C1AAD0)
#define CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1AAC0)

inline static constexpr unsigned int Class_1_7E9140739F099B31_Class_1_E86B2A10B97ED8FE_TypeDefinitionIndex = 51216;

class Class_1_7E9140739F099B31_Class_1_E86B2A10B97ED8FE : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_E86B2A10B97ED8FE_METHOD_1_A7C25C16DAF12EC1_OFFSET))(this);
	}
};
