#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x14426CE0)
#define CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x14426CF0)
#define CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14426CD0)
#define CLASS_3_2B29BFAE5DC7783E_ONATTACH_OFFSET UNITYSDK_OFFSET(0x14426900)
#define CLASS_3_2B29BFAE5DC7783E_ONDETACH_OFFSET UNITYSDK_OFFSET(0x14426AD0)
#define CLASS_3_2B29BFAE5DC7783E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14426BF0)
#define CLASS_3_2B29BFAE5DC7783E__CTOR_OFFSET UNITYSDK_OFFSET(0x14426C40)

inline static constexpr unsigned int Class_3_2B29BFAE5DC7783E_TypeDefinitionIndex = 77366;

class Class_3_2B29BFAE5DC7783E : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_2B29BFAE5DC7783E*>
{
public:
	::System::Int32 Field_3_0; // 0x20
	::System::Int32 Field_3_2; // 0x24
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B29BFAE5DC7783E_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
