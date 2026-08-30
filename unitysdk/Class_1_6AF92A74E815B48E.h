#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_6AF92A74E815B48E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3C9130)
#define CLASS_1_6AF92A74E815B48E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C3C91D0)
#define CLASS_1_6AF92A74E815B48E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C3C9330)
#define CLASS_1_6AF92A74E815B48E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C9370)

inline static constexpr unsigned int Class_1_6AF92A74E815B48E_TypeDefinitionIndex = 41813;

class Class_1_6AF92A74E815B48E : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* BBEODDICNEN; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* PKIMKNGFFHJ; // 0x18
	::RPG::PoolHashSet_1<::System::Int32>* HEFGMLHIFDG; // 0x20
	::System::Int32 MNMHMECGDAK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF92A74E815B48E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF92A74E815B48E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF92A74E815B48E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AF92A74E815B48E_ONRECYCLE_OFFSET))(this);
	}
};
