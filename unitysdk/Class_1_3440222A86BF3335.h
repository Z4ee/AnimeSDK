#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_3440222A86BF3335_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C7E20)
#define CLASS_1_3440222A86BF3335_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x180C7FC0)
#define CLASS_1_3440222A86BF3335_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180C7EA0)
#define CLASS_1_3440222A86BF3335_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x180C7F80)
#define CLASS_1_3440222A86BF3335__CTOR_OFFSET UNITYSDK_OFFSET(0x180C80C0)

inline static constexpr unsigned int Class_1_3440222A86BF3335_TypeDefinitionIndex = 40782;

class Class_1_3440222A86BF3335 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::UInt32 Field_1_7; // 0x34

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
