#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Nap::NapECS { class ComponentMaskFilter; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ADDCOMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x1C858FD0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_APPLYDELTA_OFFSET UNITYSDK_OFFSET(0x1C858AE0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_GETCOMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x1C856C70)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1C857E80)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEDIRTYENTITIES_OFFSET UNITYSDK_OFFSET(0x1C852920)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEENTITYADD_OFFSET UNITYSDK_OFFSET(0x1C858820)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1C858980)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYADDED_OFFSET UNITYSDK_OFFSET(0x1C856F40)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C857010)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0x1C857ED0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYLAYOUTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C8580B0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_REMOVECOMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x1C8591C0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_SETMERGE_OFFSET UNITYSDK_OFFSET(0x1C8578A0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_SETREMOVE_OFFSET UNITYSDK_OFFSET(0x1C8574C0)
#define NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C851D20)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorld_EntityComponentMaskMap_TypeDefinitionIndex = 37971;

	class EcsWorld_EntityComponentMaskMap : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* _removeBuffer; // 0x10
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* _addBuffer; // 0x18
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>* _deltaBuffer; // 0x20
		::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>* _maskToEntityCount; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Nullable_1<::Nap::NapECS::ComponentMask>, ::System::Nullable_1<::Nap::NapECS::ComponentMask>>>* _cachedDirtyEntities; // 0x30
		::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* _maskSortedList; // 0x38
		::System::UInt32 _version; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void SetRemove(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* set, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* setToRemove, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* output)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_SETREMOVE_OFFSET))(set, setToRemove, output);
		}

		static ::System::Void SetMerge(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* set, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* setToMerge, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* output)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_SETMERGE_OFFSET))(set, setToMerge, output);
		}

		::System::Void GetComponentMask(::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* buffer, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>* additionalBuffer, ::Nap::NapECS::ComponentMaskFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::System::Collections::Generic::List_1<::Nap::NapECS::ComponentMask>*, ::Nap::NapECS::ComponentMaskFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_GETCOMPONENTMASK_OFFSET))(this, buffer, additionalBuffer, filter);
		}

		::System::UInt32 GetVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_GETVERSION_OFFSET))(this);
		}

		::System::Void HandleDirtyEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEDIRTYENTITIES_OFFSET))(this);
		}

		::System::Void OnEntityChanged(::System::UInt32 entityId, ::Nap::NapECS::ComponentMask& oldMask, ::Nap::NapECS::ComponentMask& newMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYCHANGED_OFFSET))(this, entityId, oldMask, newMask);
		}

		::System::Void OnEntityAdded(::System::UInt32 entityId, ::Nap::NapECS::ComponentMask& componentMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYADDED_OFFSET))(this, entityId, componentMask);
		}

		::System::Void OnEntityDestroy(::System::UInt32 entityId, ::Nap::NapECS::ComponentMask& componentMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYDESTROY_OFFSET))(this, entityId, componentMask);
		}

		static ::System::Void OnEntityLayoutChanged(::System::Nullable_1<::Nap::NapECS::ComponentMask> oldMask, ::System::Nullable_1<::Nap::NapECS::ComponentMask> newMask, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>* delta)
		{
			return ((::System::Void(*)(::System::Nullable_1<::Nap::NapECS::ComponentMask>, ::System::Nullable_1<::Nap::NapECS::ComponentMask>, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ONENTITYLAYOUTCHANGED_OFFSET))(oldMask, newMask, delta);
		}

		static ::System::Void HandleEntityAdd(::Nap::NapECS::ComponentMask mask, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>* delta)
		{
			return ((::System::Void(*)(::Nap::NapECS::ComponentMask, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEENTITYADD_OFFSET))(mask, delta);
		}

		static ::System::Void HandleEntityRemove(::Nap::NapECS::ComponentMask mask, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>* delta)
		{
			return ((::System::Void(*)(::Nap::NapECS::ComponentMask, ::System::Collections::Generic::Dictionary_2<::Nap::NapECS::ComponentMask, ::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_HANDLEENTITYREMOVE_OFFSET))(mask, delta);
		}

		::System::Boolean ApplyDelta(::Nap::NapECS::ComponentMask& mask, ::System::Int32 deltaValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_APPLYDELTA_OFFSET))(this, mask, deltaValue);
		}

		::System::Void AddComponentMask(::Nap::NapECS::ComponentMask& mask, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_ADDCOMPONENTMASK_OFFSET))(this, mask, value);
		}

		::System::Void RemoveComponentMask(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLD_ENTITYCOMPONENTMASKMAP_REMOVECOMPONENTMASK_OFFSET))(this, mask);
		}
	};
}
