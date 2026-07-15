#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_91EF6C50EE2BE09E_CLEAR_OFFSET UNITYSDK_OFFSET(0x175BBC10)
#define CLASS_1_91EF6C50EE2BE09E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x175BBC70)
#define CLASS_1_91EF6C50EE2BE09E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x175BBDE0)
#define CLASS_1_91EF6C50EE2BE09E__CTOR_OFFSET UNITYSDK_OFFSET(0x175BBE20)

inline static constexpr unsigned int Class_1_91EF6C50EE2BE09E_TypeDefinitionIndex = 40660;

class Class_1_91EF6C50EE2BE09E : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::UnityEngine::Vector3Int, ::RPG::PoolHashSet_1<::System::Int32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EF6C50EE2BE09E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EF6C50EE2BE09E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EF6C50EE2BE09E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EF6C50EE2BE09E_ONRECYCLE_OFFSET))(this);
	}
};
