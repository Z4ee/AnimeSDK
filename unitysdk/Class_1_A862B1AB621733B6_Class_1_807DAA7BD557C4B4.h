#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9D59A2B00711B552_3;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4_METHOD_1_A77CCB2B76428A7D_1_OFFSET UNITYSDK_OFFSET(0x145ED6A0)
#define CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4_METHOD_1_A77CCB2B76428A7D_OFFSET UNITYSDK_OFFSET(0x145ED680)
#define CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4__CTOR_OFFSET UNITYSDK_OFFSET(0x145ED670)

inline static constexpr unsigned int Class_1_A862B1AB621733B6_Class_1_807DAA7BD557C4B4_TypeDefinitionIndex = 58363;

class Class_1_A862B1AB621733B6_Class_1_807DAA7BD557C4B4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_3_9D59A2B00711B552_3*>* Field_1_7; // 0x18
	::System::Action_1<::Class_3_9D59A2B00711B552_3*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A77CCB2B76428A7D(::Class_3_9D59A2B00711B552_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9D59A2B00711B552_3*))((::PBYTE)hIl2Cpp + CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4_METHOD_1_A77CCB2B76428A7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A77CCB2B76428A7D_1(::Class_3_9D59A2B00711B552_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9D59A2B00711B552_3*))((::PBYTE)hIl2Cpp + CLASS_1_A862B1AB621733B6_CLASS_1_807DAA7BD557C4B4_METHOD_1_A77CCB2B76428A7D_1_OFFSET))(this, a1);
	}
};
