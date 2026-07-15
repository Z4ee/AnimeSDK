#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_3_1ACADD354F8A3264;

#define CLASS_1_533B57E94BFD0E88_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16496470)
#define CLASS_1_533B57E94BFD0E88_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16496380)
#define CLASS_1_533B57E94BFD0E88_1_METHOD_1_E51D84397FEF33BE_OFFSET UNITYSDK_OFFSET(0x164962E0)
#define CLASS_1_533B57E94BFD0E88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16496370)

inline static constexpr unsigned int Class_1_533B57E94BFD0E88_1_TypeDefinitionIndex = 72034;

class Class_1_533B57E94BFD0E88_1 : public ::System::Object
{
public:
	::Class_3_1ACADD354F8A3264* Field_1_0; // 0x10
	::Class_1_3B1EA953A4067E26_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_533B57E94BFD0E88_1* Method_1_E51D84397FEF33BE(::Class_1_3B1EA953A4067E26_1* a1, ::Class_3_1ACADD354F8A3264* a2)
	{
		return ((::Class_1_533B57E94BFD0E88_1*(*)(::Class_1_3B1EA953A4067E26_1*, ::Class_3_1ACADD354F8A3264*))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88_1_METHOD_1_E51D84397FEF33BE_OFFSET))(a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88_1_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_533B57E94BFD0E88_1_EXECUTE_OFFSET))(this);
	}
};
