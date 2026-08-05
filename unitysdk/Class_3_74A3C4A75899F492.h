#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x132BC560)
#define CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x132BC570)
#define CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x132BC550)
#define CLASS_3_74A3C4A75899F492_ONATTACH_OFFSET UNITYSDK_OFFSET(0x132BC1D0)
#define CLASS_3_74A3C4A75899F492_ONDETACH_OFFSET UNITYSDK_OFFSET(0x132BC3A0)
#define CLASS_3_74A3C4A75899F492_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x132BC4C0)
#define CLASS_3_74A3C4A75899F492__CTOR_OFFSET UNITYSDK_OFFSET(0x132BC510)

inline static constexpr unsigned int Class_3_74A3C4A75899F492_TypeDefinitionIndex = 68039;

class Class_3_74A3C4A75899F492 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_74A3C4A75899F492*>
{
public:
	::System::Boolean Field_3_1; // 0x20
	::System::Int32 Field_3_2; // 0x24
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74A3C4A75899F492_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
