#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15BC0A70)
#define CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x15BC0A80)
#define CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15BC0A60)
#define CLASS_3_346CAD300BC85B11_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15BC08B0)
#define CLASS_3_346CAD300BC85B11_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15BC0740)
#define CLASS_3_346CAD300BC85B11_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15BC09D0)
#define CLASS_3_346CAD300BC85B11__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC0A20)

inline static constexpr unsigned int Class_3_346CAD300BC85B11_TypeDefinitionIndex = 49921;

class Class_3_346CAD300BC85B11 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_346CAD300BC85B11*>
{
public:
	::System::UInt32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
