#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8881C41F4913798A_1_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1CB8FB60)
#define CLASS_3_8881C41F4913798A_1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CB8FB50)
#define CLASS_3_8881C41F4913798A_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CB8FAD0)
#define CLASS_3_8881C41F4913798A_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CB8FA90)
#define CLASS_3_8881C41F4913798A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FB10)

inline static constexpr unsigned int Class_3_8881C41F4913798A_1_TypeDefinitionIndex = 55098;

class Class_3_8881C41F4913798A_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_8881C41F4913798A_1*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8881C41F4913798A_1_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
