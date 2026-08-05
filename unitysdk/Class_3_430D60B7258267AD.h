#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_430D60B7258267AD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1870BDD0)
#define CLASS_3_430D60B7258267AD_METHOD_3_2C466F93FAEC90CB_OFFSET UNITYSDK_OFFSET(0x1870BEB0)
#define CLASS_3_430D60B7258267AD_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1870C240)
#define CLASS_3_430D60B7258267AD_METHOD_3_8D0F121837AD9038_OFFSET UNITYSDK_OFFSET(0x1870C5D0)
#define CLASS_3_430D60B7258267AD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1870C540)
#define CLASS_3_430D60B7258267AD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1870C470)
#define CLASS_3_430D60B7258267AD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1870C4C0)
#define CLASS_3_430D60B7258267AD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1870BD80)
#define CLASS_3_430D60B7258267AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870BE20)
#define CLASS_3_430D60B7258267AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1870BEA0)

inline static constexpr unsigned int Class_3_430D60B7258267AD_TypeDefinitionIndex = 73651;

class Class_3_430D60B7258267AD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xCE; // 0x0
	::Foundation::ViewObject::ViewObjectHandle Field_3_1; // 0x48
	::System::Boolean Field_3_7; // 0x58
	::System::Single Field_3_0; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_2C466F93FAEC90CB(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_2C466F93FAEC90CB_OFFSET))(this, a1);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_430D60B7258267AD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_430D60B7258267AD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_3_430D60B7258267AD* Method_3_8D0F121837AD9038(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Class_3_430D60B7258267AD*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_430D60B7258267AD_METHOD_3_8D0F121837AD9038_OFFSET))(this, a1);
	}
};
