#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C67A6979628184B7_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x87E6520)
#define CLASS_1_C67A6979628184B7_METHOD_1_8B13E979A52E412C_OFFSET UNITYSDK_OFFSET(0x87E6570)
#define CLASS_1_C67A6979628184B7__CTOR_OFFSET UNITYSDK_OFFSET(0x87E6480)

inline static constexpr unsigned int Class_1_C67A6979628184B7_TypeDefinitionIndex = 53577;

class Class_1_C67A6979628184B7 : public ::System::Object
{
public:
	::Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::RPG::Client::UIPrefabLoader* Field_1_3; // 0x20
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_1_1; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831*))((::PBYTE)hIl2Cpp + CLASS_1_C67A6979628184B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67A6979628184B7_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}

	::System::Void Method_1_8B13E979A52E412C(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_C67A6979628184B7_METHOD_1_8B13E979A52E412C_OFFSET))(this, a1);
	}
};
