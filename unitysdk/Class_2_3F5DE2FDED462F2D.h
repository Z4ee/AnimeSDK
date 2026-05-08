#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x123EFE30)
#define CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x123EFE40)
#define CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x123EFE20)
#define CLASS_2_3F5DE2FDED462F2D_ONATTACH_OFFSET UNITYSDK_OFFSET(0x123EF8C0)
#define CLASS_2_3F5DE2FDED462F2D_ONDETACH_OFFSET UNITYSDK_OFFSET(0x123EFC20)
#define CLASS_2_3F5DE2FDED462F2D_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x123EFDC0)
#define CLASS_2_3F5DE2FDED462F2D__CTOR_OFFSET UNITYSDK_OFFSET(0x123EFE10)

inline static constexpr unsigned int Class_2_3F5DE2FDED462F2D_TypeDefinitionIndex = 42392;

class Class_2_3F5DE2FDED462F2D : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_3F5DE2FDED462F2D*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x20
	::System::Int32 Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x2C
	::System::Boolean Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F5DE2FDED462F2D_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
