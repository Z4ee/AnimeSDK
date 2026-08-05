#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1682E4D0)
#define CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1682E4E0)
#define CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1682E4C0)
#define CLASS_3_D8F83D971B71E77E_METHOD_3_87BFEF6DA87B3611_OFFSET UNITYSDK_OFFSET(0x1682E4F0)
#define CLASS_3_D8F83D971B71E77E_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1682DF80)
#define CLASS_3_D8F83D971B71E77E_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1682E440)
#define CLASS_3_D8F83D971B71E77E_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1682E1B0)
#define CLASS_3_D8F83D971B71E77E__CTOR_OFFSET UNITYSDK_OFFSET(0x1682E480)

inline static constexpr unsigned int Class_3_D8F83D971B71E77E_TypeDefinitionIndex = 53393;

class Class_3_D8F83D971B71E77E : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_D8F83D971B71E77E*>
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x20
	::System::Int32 Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_3_87BFEF6DA87B3611()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8F83D971B71E77E_METHOD_3_87BFEF6DA87B3611_OFFSET))(this);
	}
};
