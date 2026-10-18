#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F69DCCA8067B6A3;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_04E8FB3F34909F1C_1_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0xB7AC320)
#define CLASS_1_04E8FB3F34909F1C_1_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB7AC2C0)
#define CLASS_1_04E8FB3F34909F1C_1_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xB7AC3C0)
#define CLASS_1_04E8FB3F34909F1C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AC370)

inline static constexpr unsigned int Class_1_04E8FB3F34909F1C_1_TypeDefinitionIndex = 62682;

class Class_1_04E8FB3F34909F1C_1 : public ::System::Object
{
public:
	::Class_1_4F69DCCA8067B6A3* CEFLLELKFOP; // 0x10

	::System::Void _ctor(::Class_1_4F69DCCA8067B6A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F69DCCA8067B6A3*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_1_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_1_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_1_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
