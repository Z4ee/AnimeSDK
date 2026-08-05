#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_B24194D87DA234B0_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x154F8770)
#define CLASS_3_B24194D87DA234B0_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x154F8760)
#define CLASS_3_B24194D87DA234B0_ONREADY_OFFSET UNITYSDK_OFFSET(0x154F8540)
#define CLASS_3_B24194D87DA234B0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x154F86B0)
#define CLASS_3_B24194D87DA234B0__CTOR_OFFSET UNITYSDK_OFFSET(0x154F8720)

inline static constexpr unsigned int Class_3_B24194D87DA234B0_TypeDefinitionIndex = 49422;

class Class_3_B24194D87DA234B0 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_B24194D87DA234B0*>
{
public:
	::UnityEngine::Vector3 Field_3_1; // 0x20
	::System::Int32 Field_3_2; // 0x2C
	::UnityEngine::Vector3 Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B24194D87DA234B0__CTOR_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B24194D87DA234B0_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B24194D87DA234B0_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B24194D87DA234B0_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B24194D87DA234B0_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}
};
