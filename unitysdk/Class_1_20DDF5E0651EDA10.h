#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
class Class_1_64FA72CEAB1AF5ED;
class Class_1_99BC3314E5B9C3C0;

#define CLASS_1_20DDF5E0651EDA10_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CBC31A0)
#define CLASS_1_20DDF5E0651EDA10_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1CBC31B0)
#define CLASS_1_20DDF5E0651EDA10_METHOD_1_FF78B4F7AE574C19_OFFSET UNITYSDK_OFFSET(0x1CBC3250)
#define CLASS_1_20DDF5E0651EDA10__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC32E0)

inline static constexpr unsigned int Class_1_20DDF5E0651EDA10_TypeDefinitionIndex = 88611;

class Class_1_20DDF5E0651EDA10 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DDF5E0651EDA10__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DDF5E0651EDA10_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_99BC3314E5B9C3C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BC3314E5B9C3C0*))((::PBYTE)hIl2Cpp + CLASS_1_20DDF5E0651EDA10_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FF78B4F7AE574C19(::System::Single a1, ::Class_1_64FA72CEAB1AF5ED* a2, ::System::Int32 a3, ::Class_0_16E4307DCC419505_91* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Class_1_64FA72CEAB1AF5ED*, ::System::Int32, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_20DDF5E0651EDA10_METHOD_1_FF78B4F7AE574C19_OFFSET))(this, a1, a2, a3, a4);
	}
};
