#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x19205E20)
#define CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x19205E30)
#define CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19205E10)
#define CLASS_3_0AAE0DDAAF97EE9C_ONATTACH_OFFSET UNITYSDK_OFFSET(0x19205900)
#define CLASS_3_0AAE0DDAAF97EE9C_ONDETACH_OFFSET UNITYSDK_OFFSET(0x19205C60)
#define CLASS_3_0AAE0DDAAF97EE9C_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x19205D30)
#define CLASS_3_0AAE0DDAAF97EE9C__CTOR_OFFSET UNITYSDK_OFFSET(0x19205D80)

inline static constexpr unsigned int Class_3_0AAE0DDAAF97EE9C_TypeDefinitionIndex = 62823;

class Class_3_0AAE0DDAAF97EE9C : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_0AAE0DDAAF97EE9C*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_3; // 0x20
	::System::Int32 Field_3_1; // 0x28
	::System::Int32 Field_3_0; // 0x2C
	::System::Boolean Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AAE0DDAAF97EE9C_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
