#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Config { class ControllableObjectTrait; }
namespace System { class String; }

#define CLASS_3_EC8E953182337EFE_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x158D0870)
#define CLASS_3_EC8E953182337EFE_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x158D0860)
#define CLASS_3_EC8E953182337EFE_METHOD_3_E3A480FECDAD331E_OFFSET UNITYSDK_OFFSET(0x158D0880)
#define CLASS_3_EC8E953182337EFE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x158D0780)
#define CLASS_3_EC8E953182337EFE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x158D07D0)
#define CLASS_3_EC8E953182337EFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x158D0770)
#define CLASS_3_EC8E953182337EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x158D0820)

inline static constexpr unsigned int Class_3_EC8E953182337EFE_TypeDefinitionIndex = 55501;

class Class_3_EC8E953182337EFE : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_EC8E953182337EFE*>
{
public:
	::System::String* Field_3_7; // 0x20
	::MoleMole::Config::ControllableObjectTrait* Field_3_3; // 0x28
	::System::Boolean Field_3_2; // 0x30
	::System::Boolean Field_3_1; // 0x31
	::System::Boolean Field_3_0; // 0x32

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_E3A480FECDAD331E(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_3_EC8E953182337EFE_METHOD_3_E3A480FECDAD331E_OFFSET))(this, a1);
	}
};
