#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17;
namespace UnityEngine { class Collider; }

#define STRUCT_2_67B528512A95A70E_METHOD_2_07CB730D65B6BA23_OFFSET UNITYSDK_OFFSET(0x1949D500)
#define STRUCT_2_67B528512A95A70E_METHOD_2_AD9F071724804EBE_OFFSET UNITYSDK_OFFSET(0x1949D610)
#define STRUCT_2_67B528512A95A70E_METHOD_2_E94A322E40387EDF_OFFSET UNITYSDK_OFFSET(0x8920D0)
#define STRUCT_2_67B528512A95A70E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1949D440)
#define STRUCT_2_67B528512A95A70E__CTOR_OFFSET UNITYSDK_OFFSET(0x8920C0)

inline static constexpr unsigned int Struct_2_67B528512A95A70E_TypeDefinitionIndex = 50755;

struct alignas(8) Struct_2_67B528512A95A70E
{
	static ::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17** StaticGet_Field_2_5()
	{
		return (::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x4F1A0);
	}
	static ::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17** StaticGet_Field_2_4()
	{
		return (::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x4F1A8);
	}
	static ::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17** StaticGet_Field_2_11()
	{
		return (::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x4F1B0);
	}
	static ::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17** StaticGet_Field_2_6()
	{
		return (::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x4F1B8);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_7()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x12360);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_67B528512A95A70E_TypeDefinitionIndex)->GetStaticField(0x12370);
	}
	::System::Single Field_2_10; // 0x10
	::System::Boolean Field_2_9; // 0x14
	::Struct_2_67B528512A95A70E_Class_0_16E7307DCC43CB2C_17* Field_2_8; // 0x18

	::System::Void _ctor(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Color Method_2_07CB730D65B6BA23(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E_METHOD_2_07CB730D65B6BA23_OFFSET))(a1);
	}

	/*
	static ::System::Single Method_2_AD9F071724804EBE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E_METHOD_2_AD9F071724804EBE_OFFSET))(a1);
	}
	*/

	/*
	::System::Single Method_2_E94A322E40387EDF(::UnityEngine::Collider* a1, ::Struct_2_67B528512A95A70E_Struct_2_2793BD7138B360CA& a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*, ::Struct_2_67B528512A95A70E_Struct_2_2793BD7138B360CA&))((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E_METHOD_2_E94A322E40387EDF_OFFSET))(this, a1, a2);
	}
	*/
};
