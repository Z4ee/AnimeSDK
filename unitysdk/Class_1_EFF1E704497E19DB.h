#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EFF1E704497E19DB_METHOD_1_02C5AB138F5F739C_OFFSET UNITYSDK_OFFSET(0xA788330)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_0CF365FEDCC37CB7_OFFSET UNITYSDK_OFFSET(0xA788290)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_5C6268E622CAD2E7_OFFSET UNITYSDK_OFFSET(0xA7885C0)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_657CBE4226257EDE_OFFSET UNITYSDK_OFFSET(0xA788520)
#define CLASS_1_EFF1E704497E19DB_METHOD_1_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0xA788B30)
#define CLASS_1_EFF1E704497E19DB__CTOR_OFFSET UNITYSDK_OFFSET(0xA788BE0)

inline static constexpr unsigned int Class_1_EFF1E704497E19DB_TypeDefinitionIndex = 56969;

class Class_1_EFF1E704497E19DB : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::UnityEngine::Object* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CF365FEDCC37CB7(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_0CF365FEDCC37CB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_02C5AB138F5F739C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_02C5AB138F5F739C_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_657CBE4226257EDE(::System::Single a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_657CBE4226257EDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_83A2D2FF4410F4BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C6268E622CAD2E7(::UnityEngine::GameObject* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EFF1E704497E19DB_METHOD_1_5C6268E622CAD2E7_OFFSET))(this, a1, a2);
	}
};
