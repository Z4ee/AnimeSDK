#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_33DDE86A20ED342F_CLEAR_OFFSET UNITYSDK_OFFSET(0x14342640)
#define CLASS_1_33DDE86A20ED342F_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x14342840)
#define CLASS_1_33DDE86A20ED342F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x143427E0)
#define CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14342750)
#define CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14342790)
#define CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14342700)
#define CLASS_1_33DDE86A20ED342F_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x14342690)
#define CLASS_1_33DDE86A20ED342F_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x14342850)
#define CLASS_1_33DDE86A20ED342F__CTOR_OFFSET UNITYSDK_OFFSET(0x14342630)

inline static constexpr unsigned int Class_1_33DDE86A20ED342F_TypeDefinitionIndex = 55865;

class Class_1_33DDE86A20ED342F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Boolean _IsLoaded_k__BackingField; // 0x10
	::System::Single Field_1_2; // 0x14
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_GET_ISLOADED_OFFSET))(this);
	}

	::System::Void set_IsLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33DDE86A20ED342F_SET_ISLOADED_OFFSET))(this, a1);
	}
};
