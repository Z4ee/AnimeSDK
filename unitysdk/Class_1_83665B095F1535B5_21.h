#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_21_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16506F80)
#define CLASS_1_83665B095F1535B5_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16506F70)
#define CLASS_1_83665B095F1535B5_21_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16506EF0)
#define CLASS_1_83665B095F1535B5_21__CTOR_OFFSET UNITYSDK_OFFSET(0x16506F90)

inline static constexpr unsigned int Class_1_83665B095F1535B5_21_TypeDefinitionIndex = 55000;

class Class_1_83665B095F1535B5_21 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_21_TypeDefinitionIndex)->GetStaticField(0x12B80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_21_TypeDefinitionIndex)->GetStaticField(0x12B81);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_21__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_21_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_21_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_21_METHOD_1_F0088C88851A7DFB_1_OFFSET))();
	}
};
