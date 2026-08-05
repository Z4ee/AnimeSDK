#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_3_435619C65165674C_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xF7A4DD0)
#define CLASS_3_435619C65165674C_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xF7A4DC0)
#define CLASS_3_435619C65165674C_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF7A4DB0)
#define CLASS_3_435619C65165674C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF7A4BC0)
#define CLASS_3_435619C65165674C_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF7A2D10)
#define CLASS_3_435619C65165674C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A4D70)

inline static constexpr unsigned int Class_3_435619C65165674C_TypeDefinitionIndex = 62459;

class Class_3_435619C65165674C : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_435619C65165674C*>
{
public:
	::Class_3_07AAFA6F7F79BEB3* Field_3_7; // 0x20
	::MoleMole::EntityHandle Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};
