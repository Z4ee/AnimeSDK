#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_3_9FFBA9098718E3FC_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13D8EB10)
#define CLASS_3_9FFBA9098718E3FC_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13D8EB00)
#define CLASS_3_9FFBA9098718E3FC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13D8E9A0)
#define CLASS_3_9FFBA9098718E3FC_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13D8EA10)
#define CLASS_3_9FFBA9098718E3FC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8EA70)

inline static constexpr unsigned int Class_3_9FFBA9098718E3FC_TypeDefinitionIndex = 62366;

class Class_3_9FFBA9098718E3FC : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_9FFBA9098718E3FC*>
{
public:
	::System::String* Field_3_0; // 0x20
	::System::Single Field_3_2; // 0x28
	::System::Single Field_3_1; // 0x2C
	::System::Single Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FFBA9098718E3FC__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FFBA9098718E3FC_ONENABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FFBA9098718E3FC_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FFBA9098718E3FC_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FFBA9098718E3FC_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
