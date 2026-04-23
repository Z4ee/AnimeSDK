#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_49445DCF373ACBE2_CLEAR_OFFSET UNITYSDK_OFFSET(0x90CE840)
#define CLASS_1_49445DCF373ACBE2_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x90CEA40)
#define CLASS_1_49445DCF373ACBE2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x90CE9E0)
#define CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x90CE950)
#define CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x90CE990)
#define CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90CE900)
#define CLASS_1_49445DCF373ACBE2_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x90CE890)
#define CLASS_1_49445DCF373ACBE2_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x90CEA50)
#define CLASS_1_49445DCF373ACBE2__CTOR_OFFSET UNITYSDK_OFFSET(0x90CE830)

inline static constexpr unsigned int Class_1_49445DCF373ACBE2_TypeDefinitionIndex = 55131;

class Class_1_49445DCF373ACBE2 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	::System::Boolean _IsLoaded_k__BackingField; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_GET_ISLOADED_OFFSET))(this);
	}

	::System::Void set_IsLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_49445DCF373ACBE2_SET_ISLOADED_OFFSET))(this, value);
	}
};
