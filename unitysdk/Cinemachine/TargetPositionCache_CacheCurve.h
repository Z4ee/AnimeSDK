#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_CacheCurve_Item.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADDUNTIL_OFFSET UNITYSDK_OFFSET(0x1D216C70)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADD_OFFSET UNITYSDK_OFFSET(0x1D216BE0)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D216860)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D216A90)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D216AB0)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheCurve_TypeDefinitionIndex = 37692;

	class TargetPositionCache_CacheCurve : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Cinemachine::TargetPositionCache_CacheCurve_Item>* m_Cache; // 0x10
		::System::Single StepSize; // 0x18
		::System::Single StartTime; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::Cinemachine::TargetPositionCache_CacheCurve_Item a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::TargetPositionCache_CacheCurve_Item))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADD_OFFSET))(this, a1);
		}

		::System::Void AddUntil(::Cinemachine::TargetPositionCache_CacheCurve_Item a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::TargetPositionCache_CacheCurve_Item, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADDUNTIL_OFFSET))(this, a1, a2, a3);
		}

		::Cinemachine::TargetPositionCache_CacheCurve_Item Evaluate(::System::Single a1)
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_EVALUATE_OFFSET))(this, a1);
		}
	};
}
