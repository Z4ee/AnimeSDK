#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xE9863F0)
#define CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xE986400)
#define CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE9863E0)
#define CLASS_3_8881C41F4913798A_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE9861C0)
#define CLASS_3_8881C41F4913798A_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE986030)
#define CLASS_3_8881C41F4913798A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE986350)
#define CLASS_3_8881C41F4913798A__CTOR_OFFSET UNITYSDK_OFFSET(0xE9863A0)

inline static constexpr unsigned int Class_3_8881C41F4913798A_TypeDefinitionIndex = 52195;

class Class_3_8881C41F4913798A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_8881C41F4913798A*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
