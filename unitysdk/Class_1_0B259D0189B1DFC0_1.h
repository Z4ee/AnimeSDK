#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_C386A74518D39C8B;

#define CLASS_1_0B259D0189B1DFC0_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16786350)
#define CLASS_1_0B259D0189B1DFC0_1_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16786740)
#define CLASS_1_0B259D0189B1DFC0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16786300)

inline static constexpr unsigned int Class_1_0B259D0189B1DFC0_1_TypeDefinitionIndex = 32931;

class Class_1_0B259D0189B1DFC0_1 : public ::System::Object
{
public:
	static ::Class_2_C386A74518D39C8B** StaticGet_Field_1_1()
	{
		return (::Class_2_C386A74518D39C8B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B259D0189B1DFC0_1_TypeDefinitionIndex)->GetStaticField(0xCE10);
	}
	static ::Class_1_867B6CE75953535A** StaticGet_Field_1_0()
	{
		return (::Class_1_867B6CE75953535A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B259D0189B1DFC0_1_TypeDefinitionIndex)->GetStaticField(0xCE18);
	}

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0_1_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0_1_TEARDOWN_OFFSET))(this);
	}
};
