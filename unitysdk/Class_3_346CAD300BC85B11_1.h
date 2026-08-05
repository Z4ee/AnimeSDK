#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_346CAD300BC85B11_1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13C41040)
#define CLASS_3_346CAD300BC85B11_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13C40FB0)
#define CLASS_3_346CAD300BC85B11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C41000)

inline static constexpr unsigned int Class_3_346CAD300BC85B11_1_TypeDefinitionIndex = 62342;

class Class_3_346CAD300BC85B11_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_346CAD300BC85B11_1*>
{
public:
	::System::UInt32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_1__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346CAD300BC85B11_1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
