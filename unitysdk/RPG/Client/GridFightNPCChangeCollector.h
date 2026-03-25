#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_GET_NPCADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0x986E650)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x986E5E0)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x986E4D0)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x986E440)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_SET_NPCADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0x986E660)
#define RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x986E670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPCChangeCollector_TypeDefinitionIndex = 52451;

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

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean get_NPCAddedOrRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_GET_NPCADDEDORREMOVED_OFFSET))(this);
		}

		::System::Void set_NPCAddedOrRemoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPCCHANGECOLLECTOR_SET_NPCADDEDORREMOVED_OFFSET))(this, value);
		}
	};
}
