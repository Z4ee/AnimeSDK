#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_CA48F56DCEF4E4D6_CLASS_1_36A0020EEB62E831__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9738D10)
#define CLASS_1_CA48F56DCEF4E4D6_CLASS_1_36A0020EEB62E831__CTOR_OFFSET UNITYSDK_OFFSET(0x9738D00)

inline static constexpr unsigned int Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831_TypeDefinitionIndex = 60722;

class Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_CLASS_1_36A0020EEB62E831__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_CLASS_1_36A0020EEB62E831__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
