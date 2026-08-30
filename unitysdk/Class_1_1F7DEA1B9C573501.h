#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_1F7DEA1B9C573501_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3EE640)
#define CLASS_1_1F7DEA1B9C573501_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C3EE6C0)
#define CLASS_1_1F7DEA1B9C573501_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C3EE7A0)
#define CLASS_1_1F7DEA1B9C573501__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EE7E0)

inline static constexpr unsigned int Class_1_1F7DEA1B9C573501_TypeDefinitionIndex = 41857;

class Class_1_1F7DEA1B9C573501 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x18
	::System::Boolean DHGJDNMJBMF; // 0x20
	::System::Boolean IPKICAFDKEP; // 0x21

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
