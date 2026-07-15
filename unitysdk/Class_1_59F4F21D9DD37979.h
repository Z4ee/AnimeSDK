#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_706;
namespace UnityEngine { class Material; }

#define CLASS_1_59F4F21D9DD37979_METHOD_1_854E4F41C6457F22_OFFSET UNITYSDK_OFFSET(0x14532770)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_8A2584377889F87C_OFFSET UNITYSDK_OFFSET(0x14532720)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_D9E00B7B8547349A_OFFSET UNITYSDK_OFFSET(0x14532FD0)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_F0496077606A36E1_OFFSET UNITYSDK_OFFSET(0x14533150)
#define CLASS_1_59F4F21D9DD37979__CTOR_OFFSET UNITYSDK_OFFSET(0x14533290)

inline static constexpr unsigned int Class_1_59F4F21D9DD37979_TypeDefinitionIndex = 59616;

class Class_1_59F4F21D9DD37979 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A2584377889F87C(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_8A2584377889F87C_OFFSET))(this, a1);
	}

	::System::Void Method_1_854E4F41C6457F22(::Class_0_16E4307DCC419505_706* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_706*))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_854E4F41C6457F22_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_D9E00B7B8547349A()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_D9E00B7B8547349A_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_F0496077606A36E1()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_F0496077606A36E1_OFFSET))(this);
	}
};
