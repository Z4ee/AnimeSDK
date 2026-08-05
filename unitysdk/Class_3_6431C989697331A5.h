#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_3_6431C989697331A5_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x17A81020)
#define CLASS_3_6431C989697331A5_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17A81010)
#define CLASS_3_6431C989697331A5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17A80F00)
#define CLASS_3_6431C989697331A5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17A80F70)
#define CLASS_3_6431C989697331A5__CTOR_OFFSET UNITYSDK_OFFSET(0x17A80FD0)

inline static constexpr unsigned int Class_3_6431C989697331A5_TypeDefinitionIndex = 51379;

class Class_3_6431C989697331A5 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_6431C989697331A5*>
{
public:
	::System::String* Field_3_3; // 0x20
	::System::Single Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x2C
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6431C989697331A5__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6431C989697331A5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6431C989697331A5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6431C989697331A5_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6431C989697331A5_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
