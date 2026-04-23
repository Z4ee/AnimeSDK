#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EFF1E704497E19DB_METHOD_1_0CF365FEDCC37CB7_OFFSET UNITYSDK_OFFSET(0x96FCEE0)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0x96FCF80)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_657CBE4226257EDE_OFFSET UNITYSDK_OFFSET(0x96FD140)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x96FD770)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_C6688A2704E2D57B_OFFSET UNITYSDK_OFFSET(0x96FD1E0)
#define CLASS_1_EFF1E704497E19DB__CTOR_OFFSET UNITYSDK_OFFSET(0x96FD820)

inline static constexpr unsigned int Class_1_EFF1E704497E19DB_TypeDefinitionIndex = 56207;

class Class_1_EFF1E704497E19DB : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* Field_1_3; // 0x10
	::UnityEngine::Object* Field_1_2; // 0x18
	::System::String* Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CF365FEDCC37CB7(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_0CF365FEDCC37CB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_657CBE4226257EDE(::System::Single a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_657CBE4226257EDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_83A2D2FF4410F4BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6688A2704E2D57B(::UnityEngine::GameObject* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_C6688A2704E2D57B_OFFSET))(this, a1, a2);
	}
};
