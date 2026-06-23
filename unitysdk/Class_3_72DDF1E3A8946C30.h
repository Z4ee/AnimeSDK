#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FBFD6F7304B717CB.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Config { class HackObjectTrait; }

#define CLASS_3_72DDF1E3A8946C30_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFF5E9E0)
#define CLASS_3_72DDF1E3A8946C30_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xFF5E9D0)
#define CLASS_3_72DDF1E3A8946C30_METHOD_3_E3A480FECDAD331E_OFFSET UNITYSDK_OFFSET(0xFF5E950)
#define CLASS_3_72DDF1E3A8946C30_ONEVENT_OFFSET UNITYSDK_OFFSET(0xFF5E820)
#define CLASS_3_72DDF1E3A8946C30_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xFF5E870)
#define CLASS_3_72DDF1E3A8946C30__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF5E810)
#define CLASS_3_72DDF1E3A8946C30__CTOR_OFFSET UNITYSDK_OFFSET(0xFF5E8C0)

inline static constexpr unsigned int Class_3_72DDF1E3A8946C30_TypeDefinitionIndex = 57916;

class Class_3_72DDF1E3A8946C30 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_72DDF1E3A8946C30*>
{
public:
	::MoleMole::Config::HackObjectTrait* Field_3_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_E3A480FECDAD331E(::Enum_3_FBFD6F7304B717CB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_FBFD6F7304B717CB))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30_METHOD_3_E3A480FECDAD331E_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DDF1E3A8946C30_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
