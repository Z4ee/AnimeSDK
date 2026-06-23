#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13C9E050)
#define CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x13C9E060)
#define CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x13C9E070)
#define CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x13C9E080)
#define CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13C9E040)
#define CLASS_3_61DA6553C1A7D2D5_ONATTACH_OFFSET UNITYSDK_OFFSET(0x13C9DE70)
#define CLASS_3_61DA6553C1A7D2D5_ONDETACH_OFFSET UNITYSDK_OFFSET(0x13C9DEB0)
#define CLASS_3_61DA6553C1A7D2D5_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13C9DF30)
#define CLASS_3_61DA6553C1A7D2D5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13C9DEF0)
#define CLASS_3_61DA6553C1A7D2D5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13C9DF70)
#define CLASS_3_61DA6553C1A7D2D5__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9DFB0)

inline static constexpr unsigned int Class_3_61DA6553C1A7D2D5_TypeDefinitionIndex = 55611;

class Class_3_61DA6553C1A7D2D5 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_61DA6553C1A7D2D5*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DA6553C1A7D2D5_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}
};
