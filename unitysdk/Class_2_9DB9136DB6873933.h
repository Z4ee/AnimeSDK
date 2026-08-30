#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_2150C540C0522B59;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_9DB9136DB6873933_METHOD_2_4BBED92D826E82B7_OFFSET UNITYSDK_OFFSET(0x185033A0)
#define CLASS_2_9DB9136DB6873933__CTOR_OFFSET UNITYSDK_OFFSET(0x18503560)
#define CLASS_2_9DB9136DB6873933__ONBIND_OFFSET UNITYSDK_OFFSET(0x18503000)

inline static constexpr unsigned int Class_2_9DB9136DB6873933_TypeDefinitionIndex = 72100;

class Class_2_9DB9136DB6873933 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 GJALMNOAKIM = 0x3; // 0x0
	// static const ::System::String* FCFKJGEENKN; // 0x0
	::UnityEngine::Animation* PMOJILOJEPE; // 0x60
	::Il2CppArray<::Class_2_2150C540C0522B59*>* PBGDDGOBGPD; // 0x68
	::System::Int32 IKIIIHNECLG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DB9136DB6873933__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DB9136DB6873933__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4BBED92D826E82B7(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9DB9136DB6873933_METHOD_2_4BBED92D826E82B7_OFFSET))(this, a1, a2);
	}
};
