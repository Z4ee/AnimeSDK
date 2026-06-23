#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FBFD6F7304B717CB.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Config { class ControllableObjectTrait; }

#define CLASS_3_CE5C26A6592CE017_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x126A4490)
#define CLASS_3_CE5C26A6592CE017_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x126A44A0)
#define CLASS_3_CE5C26A6592CE017_METHOD_3_E3A480FECDAD331E_OFFSET UNITYSDK_OFFSET(0x126A44B0)
#define CLASS_3_CE5C26A6592CE017_ONEVENT_OFFSET UNITYSDK_OFFSET(0x126A4360)
#define CLASS_3_CE5C26A6592CE017_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x126A43B0)
#define CLASS_3_CE5C26A6592CE017__CCTOR_OFFSET UNITYSDK_OFFSET(0x126A4350)
#define CLASS_3_CE5C26A6592CE017__CTOR_OFFSET UNITYSDK_OFFSET(0x126A4400)

inline static constexpr unsigned int Class_3_CE5C26A6592CE017_TypeDefinitionIndex = 55644;

class Class_3_CE5C26A6592CE017 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_CE5C26A6592CE017*>
{
public:
	::MoleMole::Config::ControllableObjectTrait* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E3A480FECDAD331E(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_3_CE5C26A6592CE017_METHOD_3_E3A480FECDAD331E_OFFSET))(this, a1);
	}
};
