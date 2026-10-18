#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define CLASS_1_530DC6CF143DECC0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8AF740)
#define CLASS_1_530DC6CF143DECC0_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8AF7B0)
#define CLASS_1_530DC6CF143DECC0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8AF840)
#define CLASS_1_530DC6CF143DECC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF8E0)

inline static constexpr unsigned int Class_1_530DC6CF143DECC0_TypeDefinitionIndex = 43520;

class Class_1_530DC6CF143DECC0 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* CJEDAPMNOPA; // 0x10
	::RPG::GameCore::LevelTriggerInfo* NEKELDEHMEE; // 0x18
	::System::Boolean PENJBKKNLEA; // 0x20
	::System::Boolean NOOJOFHAIAA; // 0x21
	::System::Single CBFDCMECCEJ; // 0x24

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
