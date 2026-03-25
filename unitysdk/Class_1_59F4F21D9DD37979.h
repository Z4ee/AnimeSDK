#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_559;
namespace UnityEngine { class Material; }

#define CLASS_1_59F4F21D9DD37979_METHOD_1_00956925B29D3396_OFFSET UNITYSDK_OFFSET(0xAC512C0)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_854E4F41C6457F22_OFFSET UNITYSDK_OFFSET(0xAC50B60)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_8A2584377889F87C_OFFSET UNITYSDK_OFFSET(0xAC50B10)
#define CLASS_1_59F4F21D9DD37979_METHOD_1_B757E52FEFB52265_OFFSET UNITYSDK_OFFSET(0xAC51110)
#define CLASS_1_59F4F21D9DD37979__CTOR_OFFSET UNITYSDK_OFFSET(0xAC51440)

inline static constexpr unsigned int Class_1_59F4F21D9DD37979_TypeDefinitionIndex = 50679;

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

	::System::Void Method_1_854E4F41C6457F22(::Class_0_16E4307DCC419505_559* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_854E4F41C6457F22_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_B757E52FEFB52265()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_B757E52FEFB52265_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_00956925B29D3396()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F4F21D9DD37979_METHOD_1_00956925B29D3396_OFFSET))(this);
	}
};
