#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_1F7DEA1B9C573501_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EB6E00)
#define CLASS_1_1F7DEA1B9C573501_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EB6E80)
#define CLASS_1_1F7DEA1B9C573501_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17EB6F50)
#define CLASS_1_1F7DEA1B9C573501__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB6F90)

inline static constexpr unsigned int Class_1_1F7DEA1B9C573501_TypeDefinitionIndex = 39316;

class Class_1_1F7DEA1B9C573501 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_3; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7DEA1B9C573501__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7DEA1B9C573501_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7DEA1B9C573501_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F7DEA1B9C573501_ONRECYCLE_OFFSET))(this);
	}
};
