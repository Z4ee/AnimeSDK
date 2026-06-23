#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_CAE1CE1BAD52952C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13765DB0)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x13765EE0)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_8D0F121837AD9038_OFFSET UNITYSDK_OFFSET(0x13766490)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13766400)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_C9D934BB8108D0D9_OFFSET UNITYSDK_OFFSET(0x13766110)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13765E90)
#define CLASS_3_CAE1CE1BAD52952C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x137664F0)
#define CLASS_3_CAE1CE1BAD52952C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13765D60)
#define CLASS_3_CAE1CE1BAD52952C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13765E00)
#define CLASS_3_CAE1CE1BAD52952C__CTOR_OFFSET UNITYSDK_OFFSET(0x13765E80)

inline static constexpr unsigned int Class_3_CAE1CE1BAD52952C_TypeDefinitionIndex = 70445;

class Class_3_CAE1CE1BAD52952C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xCC; // 0x0
	::Foundation::ViewObject::ViewObjectHandle Field_3_0; // 0x48
	::System::Boolean Field_3_2; // 0x58
	::System::Single Field_3_1; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_C9D934BB8108D0D9(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_C9D934BB8108D0D9_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_3_CAE1CE1BAD52952C* Method_3_8D0F121837AD9038(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Class_3_CAE1CE1BAD52952C*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_8D0F121837AD9038_OFFSET))(this, a1);
	}

	static ::Class_3_CAE1CE1BAD52952C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CAE1CE1BAD52952C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CAE1CE1BAD52952C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
