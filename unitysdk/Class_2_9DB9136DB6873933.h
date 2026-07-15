#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_2150C540C0522B59;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_9DB9136DB6873933_METHOD_2_4BBED92D826E82B7_OFFSET UNITYSDK_OFFSET(0x1427A740)
#define CLASS_2_9DB9136DB6873933__CTOR_OFFSET UNITYSDK_OFFSET(0x1427A900)
#define CLASS_2_9DB9136DB6873933__ONBIND_OFFSET UNITYSDK_OFFSET(0x1427A3A0)

inline static constexpr unsigned int Class_2_9DB9136DB6873933_TypeDefinitionIndex = 68902;

class Class_2_9DB9136DB6873933 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::Il2CppArray<::Class_2_2150C540C0522B59*>* Field_2_3; // 0x68
	::System::Int32 Field_2_4; // 0x70

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
