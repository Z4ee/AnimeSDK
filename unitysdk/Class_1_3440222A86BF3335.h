#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_3440222A86BF3335_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BA9B010)
#define CLASS_1_3440222A86BF3335_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1BA9B1B0)
#define CLASS_1_3440222A86BF3335_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1BA9B090)
#define CLASS_1_3440222A86BF3335_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1BA9B170)
#define CLASS_1_3440222A86BF3335__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9B2B0)

inline static constexpr unsigned int Class_1_3440222A86BF3335_TypeDefinitionIndex = 41736;

class Class_1_3440222A86BF3335 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* GKEJJMPKKKO; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* OFNBGNCFIHG; // 0x18
	::System::Single CPJBIFJCENK; // 0x20
	::System::Single LJPNPDFOEMP; // 0x24
	::System::UInt32 FJNHFEFFJOJ; // 0x28
	::System::Single AAPADBHKBBH; // 0x2C
	::System::Single KIBGIABPHCF; // 0x30
	::System::Single ADKLGJDCKGM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3440222A86BF3335__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3440222A86BF3335_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3440222A86BF3335_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3440222A86BF3335_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3440222A86BF3335_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
