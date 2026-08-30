#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_A59D996EA4C786B3;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DAF303F39006E550_METHOD_2_41C2FC8BB95016DD_OFFSET UNITYSDK_OFFSET(0x1A0EB8F0)
#define CLASS_2_DAF303F39006E550_METHOD_2_8859F40A3E47CF22_OFFSET UNITYSDK_OFFSET(0x1A0EB420)
#define CLASS_2_DAF303F39006E550_METHOD_2_9178D0680A316E5A_OFFSET UNITYSDK_OFFSET(0x1A0EB590)
#define CLASS_2_DAF303F39006E550_METHOD_2_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x1A0EB810)
#define CLASS_2_DAF303F39006E550__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EB950)
#define CLASS_2_DAF303F39006E550__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A0EB130)

inline static constexpr unsigned int Class_2_DAF303F39006E550_TypeDefinitionIndex = 72263;

class Class_2_DAF303F39006E550 : public ::Class_1_34917908B7833130
{
public:
	::Il2CppArray<::UnityEngine::Transform*>* PPBKHNLDGEP; // 0x60
	::System::String* DLJDAMGNOIM; // 0x68
	::Il2CppArray<::System::String*>* NENDKIOBLMO; // 0x70
	::System::Collections::Generic::List_1<::Class_2_A59D996EA4C786B3*>* MLJDAEMEBFJ; // 0x78
	::System::String* LNDMFBFLHGK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8859F40A3E47CF22(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_8859F40A3E47CF22_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_41C2FC8BB95016DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_41C2FC8BB95016DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9178D0680A316E5A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_9178D0680A316E5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_D675670EA8F43CD1_OFFSET))(this, a1);
	}
};
