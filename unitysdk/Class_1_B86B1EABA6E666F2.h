#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_B86B1EABA6E666F2_CLEAR_OFFSET UNITYSDK_OFFSET(0x187C16D0)
#define CLASS_1_B86B1EABA6E666F2_ONALLOC_OFFSET UNITYSDK_OFFSET(0x187C1530)
#define CLASS_1_B86B1EABA6E666F2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x187C1690)
#define CLASS_1_B86B1EABA6E666F2__CTOR_OFFSET UNITYSDK_OFFSET(0x187C1760)

inline static constexpr unsigned int Class_1_B86B1EABA6E666F2_TypeDefinitionIndex = 40724;

class Class_1_B86B1EABA6E666F2 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86B1EABA6E666F2__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86B1EABA6E666F2_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86B1EABA6E666F2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86B1EABA6E666F2_CLEAR_OFFSET))(this);
	}
};
