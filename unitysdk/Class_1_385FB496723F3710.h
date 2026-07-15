#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_1_A4F2563DAA3A2A96;
class Class_3_1ACADD354F8A3264;

#define CLASS_1_385FB496723F3710_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1632D600)
#define CLASS_1_385FB496723F3710_METHOD_1_27F0B867882F61B3_OFFSET UNITYSDK_OFFSET(0x1632D550)
#define CLASS_1_385FB496723F3710__CTOR_OFFSET UNITYSDK_OFFSET(0x1632D5F0)

inline static constexpr unsigned int Class_1_385FB496723F3710_TypeDefinitionIndex = 72037;

class Class_1_385FB496723F3710 : public ::System::Object
{
public:
	::Class_3_1ACADD354F8A3264* Field_1_0; // 0x10
	::Class_1_A4F2563DAA3A2A96* Field_1_1; // 0x18
	::Class_1_3B1EA953A4067E26_1* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_385FB496723F3710__CTOR_OFFSET))(this);
	}

	static ::Class_1_385FB496723F3710* Method_1_27F0B867882F61B3(::Class_1_3B1EA953A4067E26_1* a1, ::Class_3_1ACADD354F8A3264* a2)
	{
		return ((::Class_1_385FB496723F3710*(*)(::Class_1_3B1EA953A4067E26_1*, ::Class_3_1ACADD354F8A3264*))((::PBYTE)hIl2Cpp + CLASS_1_385FB496723F3710_METHOD_1_27F0B867882F61B3_OFFSET))(a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_385FB496723F3710_EXECUTE_OFFSET))(this);
	}
};
