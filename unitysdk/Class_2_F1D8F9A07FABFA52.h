#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F1D8F9A07FABFA52_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C146B0)
#define CLASS_2_F1D8F9A07FABFA52_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18C14630)
#define CLASS_2_F1D8F9A07FABFA52__CTOR_OFFSET UNITYSDK_OFFSET(0x18C14730)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C147D0)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18C14750)

inline static constexpr unsigned int Class_2_F1D8F9A07FABFA52_TypeDefinitionIndex = 40122;

class Class_2_F1D8F9A07FABFA52 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::System::Boolean Field_2_0; // 0x338
	::System::Int32 Field_2_1; // 0x33C
	::System::Int32 Field_2_2; // 0x340
	::UnityEngine::Vector3 Field_2_3; // 0x344
	::System::Boolean Field_2_4; // 0x350
	::System::Boolean Field_2_5; // 0x351
	::System::Boolean Field_2_6; // 0x352
	::System::Boolean Field_2_7; // 0x353

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
