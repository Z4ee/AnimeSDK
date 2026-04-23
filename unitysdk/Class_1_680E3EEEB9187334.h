#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_41EDC074DB603444;

#define CLASS_1_680E3EEEB9187334_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5CF80)
#define CLASS_1_680E3EEEB9187334_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F5CED0)
#define CLASS_1_680E3EEEB9187334_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F5CF40)
#define CLASS_1_680E3EEEB9187334__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5D000)

inline static constexpr unsigned int Class_1_680E3EEEB9187334_TypeDefinitionIndex = 39092;

class Class_1_680E3EEEB9187334 : public ::System::Object
{
public:
	::Class_1_41EDC074DB603444* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_680E3EEEB9187334_CLEAR_OFFSET))(this);
	}
};
