#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17B92CF4857957F9_Class_1_DAA75FE29D72B390;
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }
namespace UnityEngine { class Object; }

#define CLASS_1_17B92CF4857957F9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC59450)
#define CLASS_1_17B92CF4857957F9___C__CLOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EC594A0)
#define CLASS_1_17B92CF4857957F9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59490)

inline static constexpr unsigned int Class_1_17B92CF4857957F9___c_TypeDefinitionIndex = 44245;

class Class_1_17B92CF4857957F9___c : public ::System::Object
{
public:
	static ::Class_1_17B92CF4857957F9___c** StaticGet___9()
	{
		return (::Class_1_17B92CF4857957F9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B92CF4857957F9___c_TypeDefinitionIndex)->GetStaticField(0x49AE0);
	}
	static ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::UnityEngine::Object*, ::Class_1_17B92CF4857957F9_Class_1_DAA75FE29D72B390*>** StaticGet___9__2_0()
	{
		return (::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::UnityEngine::Object*, ::Class_1_17B92CF4857957F9_Class_1_DAA75FE29D72B390*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B92CF4857957F9___c_TypeDefinitionIndex)->GetStaticField(0x49AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17B92CF4857957F9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B92CF4857957F9___C__CTOR_OFFSET))(this);
	}

	::Class_1_17B92CF4857957F9_Class_1_DAA75FE29D72B390* _Close_b__2_0(::UnityEngine::Object* a1)
	{
		return ((::Class_1_17B92CF4857957F9_Class_1_DAA75FE29D72B390*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_17B92CF4857957F9___C__CLOSE_B__2_0_OFFSET))(this, a1);
	}
};
