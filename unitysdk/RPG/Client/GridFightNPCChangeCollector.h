#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_GET_NPCADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xBBB8B60)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBBB8AF0)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBBB89D0)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xBBB8930)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_SET_NPCADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xBBB8B70)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB8B80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPCChangeCollector_TypeDefinitionIndex = 60344;

	class GridFightNPCChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PosUpdatedNPCUIDs; // 0x10
		::System::Boolean _NPCAddedOrRemoved_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_NPCAddedOrRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_GET_NPCADDEDORREMOVED_OFFSET))(this);
		}

		::System::Void set_NPCAddedOrRemoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_SET_NPCADDEDORREMOVED_OFFSET))(this, a1);
		}
	};
}
