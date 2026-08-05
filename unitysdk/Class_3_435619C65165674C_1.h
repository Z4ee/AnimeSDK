#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_07AAFA6F7F79BEB3;

#define CLASS_3_435619C65165674C_1_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x1722D6F0)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1722D750)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1722D760)
#define CLASS_3_435619C65165674C_1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1722D740)
#define CLASS_3_435619C65165674C_1_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1722D550)
#define CLASS_3_435619C65165674C_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1722D3B0)
#define CLASS_3_435619C65165674C_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1722C250)
#define CLASS_3_435619C65165674C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1722D6B0)

inline static constexpr unsigned int Class_3_435619C65165674C_1_TypeDefinitionIndex = 64218;

class Class_3_435619C65165674C_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_435619C65165674C_1*>
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x20
	::Class_3_07AAFA6F7F79BEB3* Field_3_7; // 0x30

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

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_435619C65165674C_1_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
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
};
