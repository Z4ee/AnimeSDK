#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_65B24FDD1B4196C2;

#define CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0xC5070F0)
#define CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC507140)
#define CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC506260)

inline static constexpr unsigned int Class_1_65B24FDD1B4196C2_Class_1_18BFEAD82BA3C5E8_1_TypeDefinitionIndex = 50365;

class Class_1_65B24FDD1B4196C2_Class_1_18BFEAD82BA3C5E8_1 : public ::System::Object
{
public:
	::Class_1_65B24FDD1B4196C2* CFKHNPGEAJA; // 0x10

	::System::Void _ctor(::Class_1_65B24FDD1B4196C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65B24FDD1B4196C2*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean CanExecute(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1_CANEXECUTE_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_18BFEAD82BA3C5E8_1_EXECUTE_OFFSET))(this, a1);
	}
};
