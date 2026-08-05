#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Config { class EtherEyesObjectTrait; }

#define CLASS_3_F08DAE38FA0422E3_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x158BF850)
#define CLASS_3_F08DAE38FA0422E3_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x158BF860)
#define CLASS_3_F08DAE38FA0422E3_METHOD_3_E3A480FECDAD331E_OFFSET UNITYSDK_OFFSET(0x158BF750)
#define CLASS_3_F08DAE38FA0422E3_ONEVENT_OFFSET UNITYSDK_OFFSET(0x158BF240)
#define CLASS_3_F08DAE38FA0422E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x158BF7D0)
#define CLASS_3_F08DAE38FA0422E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x158BF150)
#define CLASS_3_F08DAE38FA0422E3__CTOR_OFFSET UNITYSDK_OFFSET(0x158BF810)

inline static constexpr unsigned int Class_3_F08DAE38FA0422E3_TypeDefinitionIndex = 45589;

class Class_3_F08DAE38FA0422E3 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_F08DAE38FA0422E3*>
{
public:
	::MoleMole::Config::EtherEyesObjectTrait* Field_3_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_E3A480FECDAD331E(::Enum_3_49722073307230E6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_49722073307230E6))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3_METHOD_3_E3A480FECDAD331E_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F08DAE38FA0422E3_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
