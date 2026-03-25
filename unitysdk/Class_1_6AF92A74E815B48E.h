#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_6AF92A74E815B48E_CLEAR_OFFSET UNITYSDK_OFFSET(0x167FD2C0)
#define CLASS_1_6AF92A74E815B48E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x167FD360)
#define CLASS_1_6AF92A74E815B48E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x167FD4A0)
#define CLASS_1_6AF92A74E815B48E__CTOR_OFFSET UNITYSDK_OFFSET(0x167FD4E0)

inline static constexpr unsigned int Class_1_6AF92A74E815B48E_TypeDefinitionIndex = 33480;

class Class_1_6AF92A74E815B48E : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_1; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_2; // 0x18
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x28

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
