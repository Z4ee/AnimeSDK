#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3_1;

#define CLASS_3_435619C65165674C_1_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x1A168BD0)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1A168BB0)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1A168BC0)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A168BA0)
#define CLASS_3_435619C65165674C_1_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1A1689B0)
#define CLASS_3_435619C65165674C_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A168810)
#define CLASS_3_435619C65165674C_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A167600)
#define CLASS_3_435619C65165674C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A168B10)

inline static constexpr unsigned int Class_3_435619C65165674C_1_TypeDefinitionIndex = 83181;

class Class_3_435619C65165674C_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_435619C65165674C_1*>
{
public:
	::Class_3_07AAFA6F7F79BEB3_1* Field_3_1; // 0x20
	::MoleMole::EntityHandle Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_07AAFA6F7F79BEB3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3_1*))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};
