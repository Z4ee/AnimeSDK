#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12692EA0)
#define CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x12692EB0)
#define CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x12692EC0)
#define CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12692E90)
#define CLASS_3_57D624A4E66334C4_METHOD_3_952E78F8062978E5_OFFSET UNITYSDK_OFFSET(0x126928B0)
#define CLASS_3_57D624A4E66334C4_ONATTACH_OFFSET UNITYSDK_OFFSET(0x12692820)
#define CLASS_3_57D624A4E66334C4_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12692D60)
#define CLASS_3_57D624A4E66334C4_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12692860)
#define CLASS_3_57D624A4E66334C4_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12692DB0)
#define CLASS_3_57D624A4E66334C4__CTOR_OFFSET UNITYSDK_OFFSET(0x12692E00)

inline static constexpr unsigned int Class_3_57D624A4E66334C4_TypeDefinitionIndex = 67558;

class Class_3_57D624A4E66334C4 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_57D624A4E66334C4*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_952E78F8062978E5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_METHOD_3_952E78F8062978E5_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D624A4E66334C4_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}
};
