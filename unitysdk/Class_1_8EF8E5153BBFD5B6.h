#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_91EF6C50EE2BE09E;

#define CLASS_1_8EF8E5153BBFD5B6_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C7350)
#define CLASS_1_8EF8E5153BBFD5B6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180C72C0)
#define CLASS_1_8EF8E5153BBFD5B6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x180C7310)
#define CLASS_1_8EF8E5153BBFD5B6__CTOR_OFFSET UNITYSDK_OFFSET(0x180C73C0)

inline static constexpr unsigned int Class_1_8EF8E5153BBFD5B6_TypeDefinitionIndex = 40671;

class Class_1_8EF8E5153BBFD5B6 : public ::System::Object
{
public:
	::Class_1_91EF6C50EE2BE09E* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF8E5153BBFD5B6__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF8E5153BBFD5B6_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF8E5153BBFD5B6_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF8E5153BBFD5B6_CLEAR_OFFSET))(this);
	}
};
