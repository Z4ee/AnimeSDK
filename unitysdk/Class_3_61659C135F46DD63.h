#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x18829B60)
#define CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x18829B70)
#define CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18829B50)
#define CLASS_3_61659C135F46DD63_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x188298F0)
#define CLASS_3_61659C135F46DD63_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18829770)
#define CLASS_3_61659C135F46DD63_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18829A70)
#define CLASS_3_61659C135F46DD63__CTOR_OFFSET UNITYSDK_OFFSET(0x18829AC0)

inline static constexpr unsigned int Class_3_61659C135F46DD63_TypeDefinitionIndex = 65869;

class Class_3_61659C135F46DD63 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_61659C135F46DD63*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61659C135F46DD63_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
