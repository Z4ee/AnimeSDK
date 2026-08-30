#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD234568D667D0C5;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_04E8FB3F34909F1C_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x15770990)
#define CLASS_1_04E8FB3F34909F1C_METHOD_1_8F9CBB9701813BD7_OFFSET UNITYSDK_OFFSET(0x157709F0)
#define CLASS_1_04E8FB3F34909F1C_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x15770B20)
#define CLASS_1_04E8FB3F34909F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x15770AD0)

inline static constexpr unsigned int Class_1_04E8FB3F34909F1C_TypeDefinitionIndex = 62673;

class Class_1_04E8FB3F34909F1C : public ::System::Object
{
public:
	::Class_1_DD234568D667D0C5* OGMCNDAEJID; // 0x10

	::System::Void _ctor(::Class_1_DD234568D667D0C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD234568D667D0C5*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_8F9CBB9701813BD7()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_METHOD_1_8F9CBB9701813BD7_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_04E8FB3F34909F1C_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
