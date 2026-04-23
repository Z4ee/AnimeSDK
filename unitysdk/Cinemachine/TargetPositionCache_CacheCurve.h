#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_CacheCurve_Item.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADDUNTIL_OFFSET UNITYSDK_OFFSET(0x12BA9090)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADD_OFFSET UNITYSDK_OFFSET(0x12BA9050)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12BA8D10)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12BA8F10)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA8F30)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheCurve_TypeDefinitionIndex = 36610;

	class TargetPositionCache_CacheCurve : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Cinemachine::TargetPositionCache_CacheCurve_Item>* m_Cache; // 0x10
		::System::Single StartTime; // 0x18
		::System::Single StepSize; // 0x1C

		::System::Void _ctor(::System::Single startTime, ::System::Single endTime, ::System::Single stepSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE__CTOR_OFFSET))(this, startTime, endTime, stepSize);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::Cinemachine::TargetPositionCache_CacheCurve_Item item)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::TargetPositionCache_CacheCurve_Item))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADD_OFFSET))(this, item);
		}

		::System::Void AddUntil(::Cinemachine::TargetPositionCache_CacheCurve_Item item, ::System::Single time, ::System::Boolean isCut)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::TargetPositionCache_CacheCurve_Item, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_ADDUNTIL_OFFSET))(this, item, time, isCut);
		}

		::Cinemachine::TargetPositionCache_CacheCurve_Item Evaluate(::System::Single time)
		{
			return ((::Cinemachine::TargetPositionCache_CacheCurve_Item(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHECURVE_EVALUATE_OFFSET))(this, time);
		}
	};
}
