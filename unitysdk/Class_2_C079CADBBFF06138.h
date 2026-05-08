#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C079CADBBFF06138_METHOD_2_08B7D15C48D5132C_OFFSET UNITYSDK_OFFSET(0x132D81B0)
#define CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x132D8600)
#define CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x132D8610)
#define CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x132D8620)
#define CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x132D85F0)
#define CLASS_2_C079CADBBFF06138_ONATTACH_OFFSET UNITYSDK_OFFSET(0x132D8120)
#define CLASS_2_C079CADBBFF06138_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x132D8540)
#define CLASS_2_C079CADBBFF06138_ONENABLE_OFFSET UNITYSDK_OFFSET(0x132D8160)
#define CLASS_2_C079CADBBFF06138_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x132D8590)
#define CLASS_2_C079CADBBFF06138__CTOR_OFFSET UNITYSDK_OFFSET(0x132D85E0)

inline static constexpr unsigned int Class_2_C079CADBBFF06138_TypeDefinitionIndex = 58926;

class Class_2_C079CADBBFF06138 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_C079CADBBFF06138*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_08B7D15C48D5132C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_METHOD_2_08B7D15C48D5132C_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C079CADBBFF06138_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}
};
