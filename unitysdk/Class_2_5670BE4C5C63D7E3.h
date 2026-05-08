#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B1E3F4D4C32B440D.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Config { class EtherEyesObjectTrait; }

#define CLASS_2_5670BE4C5C63D7E3_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16AFBB40)
#define CLASS_2_5670BE4C5C63D7E3_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x16AFBB50)
#define CLASS_2_5670BE4C5C63D7E3_METHOD_2_E3A480FECDAD331E_OFFSET UNITYSDK_OFFSET(0x16AFBA70)
#define CLASS_2_5670BE4C5C63D7E3_ONEVENT_OFFSET UNITYSDK_OFFSET(0x16AFB550)
#define CLASS_2_5670BE4C5C63D7E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16AFBAF0)
#define CLASS_2_5670BE4C5C63D7E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AFB490)
#define CLASS_2_5670BE4C5C63D7E3__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFBB30)

inline static constexpr unsigned int Class_2_5670BE4C5C63D7E3_TypeDefinitionIndex = 79328;

class Class_2_5670BE4C5C63D7E3 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_5670BE4C5C63D7E3*>
{
public:
	::MoleMole::Config::EtherEyesObjectTrait* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_E3A480FECDAD331E(::Enum_3_B1E3F4D4C32B440D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B1E3F4D4C32B440D))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3_METHOD_2_E3A480FECDAD331E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_5670BE4C5C63D7E3_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
