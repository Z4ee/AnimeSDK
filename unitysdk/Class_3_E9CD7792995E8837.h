#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13964B90)
#define CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x13964BA0)
#define CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13964B80)
#define CLASS_3_E9CD7792995E8837_ONATTACH_OFFSET UNITYSDK_OFFSET(0x13964680)
#define CLASS_3_E9CD7792995E8837_ONDETACH_OFFSET UNITYSDK_OFFSET(0x13964A20)
#define CLASS_3_E9CD7792995E8837_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13964AF0)
#define CLASS_3_E9CD7792995E8837__CTOR_OFFSET UNITYSDK_OFFSET(0x13964B40)

inline static constexpr unsigned int Class_3_E9CD7792995E8837_TypeDefinitionIndex = 42023;

class Class_3_E9CD7792995E8837 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_E9CD7792995E8837*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28
	::System::Int32 Field_3_2; // 0x2C
	::System::Int32 Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CD7792995E8837_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
