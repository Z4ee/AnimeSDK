#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x133D2E40)
#define CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x133D2E50)
#define CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x133D2E60)
#define CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x133D2E70)
#define CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x133D2E30)
#define CLASS_3_894FFC1FB27A69A8_ONATTACH_OFFSET UNITYSDK_OFFSET(0x133D2CB0)
#define CLASS_3_894FFC1FB27A69A8_ONDETACH_OFFSET UNITYSDK_OFFSET(0x133D2CF0)
#define CLASS_3_894FFC1FB27A69A8_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x133D2D70)
#define CLASS_3_894FFC1FB27A69A8_ONENABLE_OFFSET UNITYSDK_OFFSET(0x133D2D30)
#define CLASS_3_894FFC1FB27A69A8_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x133D2DB0)
#define CLASS_3_894FFC1FB27A69A8__CTOR_OFFSET UNITYSDK_OFFSET(0x133D2DF0)

inline static constexpr unsigned int Class_3_894FFC1FB27A69A8_TypeDefinitionIndex = 91303;

class Class_3_894FFC1FB27A69A8 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_894FFC1FB27A69A8*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_894FFC1FB27A69A8_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}
};
