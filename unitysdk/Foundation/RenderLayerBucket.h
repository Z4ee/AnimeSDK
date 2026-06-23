#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IRenderElement; }
namespace Foundation { class IRenderLayerConfig; }
namespace Foundation { class RenderSubLayerBucket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_RENDERLAYERBUCKET_ADD_OFFSET UNITYSDK_OFFSET(0x1D781630)
#define FOUNDATION_RENDERLAYERBUCKET_APPLYALLSUBBUCKETORDERS_OFFSET UNITYSDK_OFFSET(0x1D7831E0)
#define FOUNDATION_RENDERLAYERBUCKET_APPLYDIRTYSUBBUCKETORDERS_OFFSET UNITYSDK_OFFSET(0x1D783300)
#define FOUNDATION_RENDERLAYERBUCKET_APPLYSHAREDSUBBUCKETORDERS_OFFSET UNITYSDK_OFFSET(0x1D783420)
#define FOUNDATION_RENDERLAYERBUCKET_CALCCAPACITY_OFFSET UNITYSDK_OFFSET(0x1D783B10)
#define FOUNDATION_RENDERLAYERBUCKET_COLLECTDIRTYSUBBUCKETS_OFFSET UNITYSDK_OFFSET(0x1D782900)
#define FOUNDATION_RENDERLAYERBUCKET_ENSUREAPPENDONLYSUBBUCKETINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D781EF0)
#define FOUNDATION_RENDERLAYERBUCKET_EVALUATELAYOUTSTATE_OFFSET UNITYSDK_OFFSET(0x1D782A20)
#define FOUNDATION_RENDERLAYERBUCKET_EVALUATESHAREDORDERLAYOUTSTATE_OFFSET UNITYSDK_OFFSET(0x1D783730)
#define FOUNDATION_RENDERLAYERBUCKET_GETORCREATESUBBUCKET_OFFSET UNITYSDK_OFFSET(0x1D781CE0)
#define FOUNDATION_RENDERLAYERBUCKET_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D7813B0)
#define FOUNDATION_RENDERLAYERBUCKET_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1D7813E0)
#define FOUNDATION_RENDERLAYERBUCKET_GET_ELEMENTLIST_OFFSET UNITYSDK_OFFSET(0x1D7813D0)
#define FOUNDATION_RENDERLAYERBUCKET_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1D781360)
#define FOUNDATION_RENDERLAYERBUCKET_INSERTORDEREDSUBBUCKET_OFFSET UNITYSDK_OFFSET(0x1D783630)
#define FOUNDATION_RENDERLAYERBUCKET_REBUILDSHAREDORDERRANGES_OFFSET UNITYSDK_OFFSET(0x1D7838F0)
#define FOUNDATION_RENDERLAYERBUCKET_REBUILDSUBBUCKETRANGES_OFFSET UNITYSDK_OFFSET(0x1D782C50)
#define FOUNDATION_RENDERLAYERBUCKET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D7820F0)
#define FOUNDATION_RENDERLAYERBUCKET_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D7813C0)
#define FOUNDATION_RENDERLAYERBUCKET_SET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1D7813F0)
#define FOUNDATION_RENDERLAYERBUCKET_SORT_OFFSET UNITYSDK_OFFSET(0x1D782640)
#define FOUNDATION_RENDERLAYERBUCKET_TRYAPPENDASSIGN_OFFSET UNITYSDK_OFFSET(0x1D781F60)
#define FOUNDATION_RENDERLAYERBUCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D781400)

namespace Foundation
{
	inline static constexpr unsigned int RenderLayerBucket_TypeDefinitionIndex = 89367;

	class RenderLayerBucket : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultSpare = 0x4; // 0x0
		// static const ::System::Single GrowFactor; // 0x0
		::System::Collections::Generic::List_1<::Foundation::IRenderElement*>* _elementList; // 0x10
		::Foundation::IRenderLayerConfig* _Config_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Foundation::RenderSubLayerBucket*>* _orderedSubBuckets; // 0x20
		::System::Collections::Generic::List_1<::Foundation::RenderSubLayerBucket*>* _dirtySubBuckets; // 0x28
		::System::Collections::Generic::IComparer_1<::Foundation::IRenderElement*>* _layerComparer; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::RenderSubLayerBucket*>* _subBucketMap; // 0x38
		::System::Boolean _Dirty_k__BackingField; // 0x40
		::System::Boolean _layoutDirty; // 0x41
		::System::Boolean _needCompact; // 0x42

		::System::Void _ctor(::Foundation::IRenderLayerConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderLayerConfig*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET__CTOR_OFFSET))(this, config);
		}

		::System::Int32 get_Layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_GET_LAYER_OFFSET))(this);
		}

		::Foundation::IRenderLayerConfig* get_Config()
		{
			return ((::Foundation::IRenderLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::Foundation::IRenderLayerConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderLayerConfig*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::IRenderElement*>* get_ElementList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::IRenderElement*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_GET_ELEMENTLIST_OFFSET))(this);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_GET_DIRTY_OFFSET))(this);
		}

		::System::Void set_Dirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_SET_DIRTY_OFFSET))(this, value);
		}

		::System::Void Add(::Foundation::IRenderElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_ADD_OFFSET))(this, elem);
		}

		::System::Void Remove(::Foundation::IRenderElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_REMOVE_OFFSET))(this, elem);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_SORT_OFFSET))(this);
		}

		::System::Void EnsureAppendOnlySubBucketInitialized(::Foundation::RenderSubLayerBucket* subBucket, ::System::Int32 pendingAddCount)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::RenderSubLayerBucket*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_ENSUREAPPENDONLYSUBBUCKETINITIALIZED_OFFSET))(this, subBucket, pendingAddCount);
		}

		::System::Boolean TryAppendAssign(::Foundation::RenderSubLayerBucket* subBucket, ::Foundation::IRenderElement* elem)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::RenderSubLayerBucket*, ::Foundation::IRenderElement*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_TRYAPPENDASSIGN_OFFSET))(this, subBucket, elem);
		}

		::Foundation::RenderSubLayerBucket* GetOrCreateSubBucket(::System::Int32 subLayer)
		{
			return ((::Foundation::RenderSubLayerBucket*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_GETORCREATESUBBUCKET_OFFSET))(this, subLayer);
		}

		::System::Void InsertOrderedSubBucket(::Foundation::RenderSubLayerBucket* bucket)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::RenderSubLayerBucket*))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_INSERTORDEREDSUBBUCKET_OFFSET))(this, bucket);
		}

		::System::Void CollectDirtySubBuckets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_COLLECTDIRTYSUBBUCKETS_OFFSET))(this);
		}

		::System::Void EvaluateLayoutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_EVALUATELAYOUTSTATE_OFFSET))(this);
		}

		::System::Void EvaluateSharedOrderLayoutState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_EVALUATESHAREDORDERLAYOUTSTATE_OFFSET))(this);
		}

		::System::Void RebuildSubBucketRanges(::Foundation::RenderSubLayerBucket* pendingSubBucket, ::System::Int32 pendingAddCount)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::RenderSubLayerBucket*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_REBUILDSUBBUCKETRANGES_OFFSET))(this, pendingSubBucket, pendingAddCount);
		}

		::System::Void RebuildSharedOrderRanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_REBUILDSHAREDORDERRANGES_OFFSET))(this);
		}

		::System::Void ApplyAllSubBucketOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_APPLYALLSUBBUCKETORDERS_OFFSET))(this);
		}

		::System::Void ApplyDirtySubBucketOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_APPLYDIRTYSUBBUCKETORDERS_OFFSET))(this);
		}

		::System::Void ApplySharedSubBucketOrders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_APPLYSHAREDSUBBUCKETORDERS_OFFSET))(this);
		}

		static ::System::Int32 CalcCapacity(::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RENDERLAYERBUCKET_CALCCAPACITY_OFFSET))(count);
		}
	};
}
