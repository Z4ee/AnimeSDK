#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70;
namespace UnityEngine { class Collider; }

#define STRUCT_2_6A2D1CD07805DEFA_METHOD_2_07CB730D65B6BA23_OFFSET UNITYSDK_OFFSET(0xD0D03B0)
#define STRUCT_2_6A2D1CD07805DEFA_METHOD_2_31B96F9C78EE7AAC_OFFSET UNITYSDK_OFFSET(0x55FED0)
#define STRUCT_2_6A2D1CD07805DEFA_METHOD_2_67181556765F6CA8_OFFSET UNITYSDK_OFFSET(0xD0D04C0)
#define STRUCT_2_6A2D1CD07805DEFA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0CFEF0)
#define STRUCT_2_6A2D1CD07805DEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x55FEC0)

inline static constexpr unsigned int Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex = 74750;

struct alignas(8) Struct_2_6A2D1CD07805DEFA
{
	static ::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70** StaticGet_Field_2_5()
	{
		return (::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x44430);
	}
	static ::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70** StaticGet_Field_2_4()
	{
		return (::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x44438);
	}
	static ::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70** StaticGet_Field_2_3()
	{
		return (::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x44440);
	}
	static ::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70** StaticGet_Field_2_2()
	{
		return (::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x44448);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_1()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x106B0);
	}
	static ::UnityEngine::Color* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6A2D1CD07805DEFA_TypeDefinitionIndex)->GetStaticField(0x106C0);
	}
	::System::Single Field_2_6; // 0x10
	::System::Boolean Field_2_7; // 0x14
	::Struct_2_6A2D1CD07805DEFA_Class_0_16E7307DCC43CB2C_70* Field_2_8; // 0x18

	::System::Void _ctor(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA__CCTOR_OFFSET))();
	}

	/*
	::System::Single Method_2_31B96F9C78EE7AAC(::UnityEngine::Collider* a1, ::Struct_2_6A2D1CD07805DEFA_Struct_2_C5F65554FE7DFF2E& a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*, ::Struct_2_6A2D1CD07805DEFA_Struct_2_C5F65554FE7DFF2E&))((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA_METHOD_2_31B96F9C78EE7AAC_OFFSET))(this, a1, a2);
	}
	*/

	static ::UnityEngine::Color Method_2_07CB730D65B6BA23(::System::Single a1)
	{
		return ((::UnityEngine::Color(*)(::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA_METHOD_2_07CB730D65B6BA23_OFFSET))(a1);
	}

	/*
	static ::System::Single Method_2_67181556765F6CA8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA_METHOD_2_67181556765F6CA8_OFFSET))(a1);
	}
	*/
};
