#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_534;

#define CLASS_1_E743F4500729FABC_COMPARE_OFFSET UNITYSDK_OFFSET(0x10C6A210)
#define CLASS_1_E743F4500729FABC__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C6A570)
#define CLASS_1_E743F4500729FABC__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6A560)

inline static constexpr unsigned int Class_1_E743F4500729FABC_TypeDefinitionIndex = 55433;

class Class_1_E743F4500729FABC : public ::System::Object
{
public:
	static ::Class_1_E743F4500729FABC** StaticGet_Field_1_0()
	{
		return (::Class_1_E743F4500729FABC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E743F4500729FABC_TypeDefinitionIndex)->GetStaticField(0x40040);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Class_0_16E4307DCC419505_534* a1, ::Class_0_16E4307DCC419505_534* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_534*, ::Class_0_16E4307DCC419505_534*))((::PBYTE)hIl2Cpp + CLASS_1_E743F4500729FABC_COMPARE_OFFSET))(this, a1, a2);
	}
};
