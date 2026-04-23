#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_41EDC074DB603444_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E87980)
#define CLASS_1_41EDC074DB603444_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E87A00)
#define CLASS_1_41EDC074DB603444_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17E87B90)
#define CLASS_1_41EDC074DB603444__CTOR_OFFSET UNITYSDK_OFFSET(0x17E87BD0)

inline static constexpr unsigned int Class_1_41EDC074DB603444_TypeDefinitionIndex = 39081;

class Class_1_41EDC074DB603444 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::UnityEngine::Vector3Int, ::RPG::PoolHashSet_1<::System::Int32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41EDC074DB603444__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41EDC074DB603444_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41EDC074DB603444_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41EDC074DB603444_ONRECYCLE_OFFSET))(this);
	}
};
