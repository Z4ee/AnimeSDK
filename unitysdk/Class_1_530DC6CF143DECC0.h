#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define CLASS_1_530DC6CF143DECC0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A046080)
#define CLASS_1_530DC6CF143DECC0_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A0460F0)
#define CLASS_1_530DC6CF143DECC0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A046180)
#define CLASS_1_530DC6CF143DECC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A046210)

inline static constexpr unsigned int Class_1_530DC6CF143DECC0_TypeDefinitionIndex = 40919;

class Class_1_530DC6CF143DECC0 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_0; // 0x10
	::RPG::GameCore::LevelTriggerInfo* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530DC6CF143DECC0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530DC6CF143DECC0_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530DC6CF143DECC0_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530DC6CF143DECC0_ONRECYCLE_OFFSET))(this);
	}
};
