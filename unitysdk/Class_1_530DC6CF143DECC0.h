#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }

#define CLASS_1_530DC6CF143DECC0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C38BC90)
#define CLASS_1_530DC6CF143DECC0_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C38BD00)
#define CLASS_1_530DC6CF143DECC0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C38BD90)
#define CLASS_1_530DC6CF143DECC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38BE20)

inline static constexpr unsigned int Class_1_530DC6CF143DECC0_TypeDefinitionIndex = 41878;

class Class_1_530DC6CF143DECC0 : public ::System::Object
{
public:
	::RPG::GameCore::LevelTriggerInfo* NEKELDEHMEE; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* CJEDAPMNOPA; // 0x18
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
