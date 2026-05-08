#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_2_E0D8BA9B26DFEF82_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x112038A0)
#define CLASS_2_E0D8BA9B26DFEF82_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11203840)
#define CLASS_2_E0D8BA9B26DFEF82__CTOR_OFFSET UNITYSDK_OFFSET(0x11203890)

inline static constexpr unsigned int Class_2_E0D8BA9B26DFEF82_TypeDefinitionIndex = 49679;

class Class_2_E0D8BA9B26DFEF82 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_E0D8BA9B26DFEF82*>
{
public:
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D8BA9B26DFEF82__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D8BA9B26DFEF82_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0D8BA9B26DFEF82_METHOD_2_832295EC279E5994_OFFSET))(this);
	}
};
