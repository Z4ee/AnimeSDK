#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A89A7E79D6B85D01;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_04E8FB3F34909F1C_2_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0xF2306C0)
#define CLASS_1_04E8FB3F34909F1C_2_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xF230660)
#define CLASS_1_04E8FB3F34909F1C_2_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xF230760)
#define CLASS_1_04E8FB3F34909F1C_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF230710)

inline static constexpr unsigned int Class_1_04E8FB3F34909F1C_2_TypeDefinitionIndex = 62683;

class Class_1_04E8FB3F34909F1C_2 : public ::System::Object
{
public:
	::Class_1_A89A7E79D6B85D01* CEFLLELKFOP; // 0x10

	::System::Void _ctor(::Class_1_A89A7E79D6B85D01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A89A7E79D6B85D01*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_2__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_2_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_2_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_2_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
