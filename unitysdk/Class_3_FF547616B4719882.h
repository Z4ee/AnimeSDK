#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_FF547616B4719882_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x114B4E30)
#define CLASS_3_FF547616B4719882_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x114B4D50)
#define CLASS_3_FF547616B4719882__CTOR_OFFSET UNITYSDK_OFFSET(0x114B4DA0)

inline static constexpr unsigned int Class_3_FF547616B4719882_TypeDefinitionIndex = 45565;

class Class_3_FF547616B4719882 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_FF547616B4719882*>
{
public:
	::System::Int32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF547616B4719882__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF547616B4719882_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF547616B4719882_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
