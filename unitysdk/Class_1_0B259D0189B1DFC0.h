#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_0F2988457304ACEC;

#define CLASS_1_0B259D0189B1DFC0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17E49790)
#define CLASS_1_0B259D0189B1DFC0_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17E49B80)
#define CLASS_1_0B259D0189B1DFC0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E49740)

inline static constexpr unsigned int Class_1_0B259D0189B1DFC0_TypeDefinitionIndex = 38458;

class Class_1_0B259D0189B1DFC0 : public ::System::Object
{
public:
	static ::Class_2_0F2988457304ACEC** StaticGet_Field_1_1()
	{
		return (::Class_2_0F2988457304ACEC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B259D0189B1DFC0_TypeDefinitionIndex)->GetStaticField(0x143E0);
	}
	static ::Class_1_867B6CE75953535A** StaticGet_Field_1_0()
	{
		return (::Class_1_867B6CE75953535A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B259D0189B1DFC0_TypeDefinitionIndex)->GetStaticField(0x143E8);
	}

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_0F2988457304ACEC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_0F2988457304ACEC*))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B259D0189B1DFC0_TEARDOWN_OFFSET))(this);
	}
};
