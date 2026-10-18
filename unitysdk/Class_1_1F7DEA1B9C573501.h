#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_1F7DEA1B9C573501_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9279A0)
#define CLASS_1_1F7DEA1B9C573501_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C927A20)
#define CLASS_1_1F7DEA1B9C573501_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C927B00)
#define CLASS_1_1F7DEA1B9C573501__CTOR_OFFSET UNITYSDK_OFFSET(0x1C927B40)

inline static constexpr unsigned int Class_1_1F7DEA1B9C573501_TypeDefinitionIndex = 43499;

class Class_1_1F7DEA1B9C573501 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x18
	::System::Boolean IPKICAFDKEP; // 0x20
	::System::Boolean DHGJDNMJBMF; // 0x21

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
