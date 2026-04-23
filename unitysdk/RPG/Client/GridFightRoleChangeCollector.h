#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_GET_ROLEADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xA570A30)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA570980)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA570770)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONROLENUMBERCHANGED_OFFSET UNITYSDK_OFFSET(0xA5709F0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xA5705D0)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_SET_ROLEADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xA570A40)
#define RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA570A50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleChangeCollector_TypeDefinitionIndex = 59415;

	class GridFightRoleChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* RoleUpdateUIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PosUpdatedRoleUIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EquipUpdatedRoleUIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* TraitUpdatedRoleUIDs; // 0x28
		::System::Boolean _RoleAddedOrRemoved_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnRoleNumberChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_ONROLENUMBERCHANGED_OFFSET))(this);
		}

		::System::Boolean get_RoleAddedOrRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_GET_ROLEADDEDORREMOVED_OFFSET))(this);
		}

		::System::Void set_RoleAddedOrRemoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECHANGECOLLECTOR_SET_ROLEADDEDORREMOVED_OFFSET))(this, value);
		}
	};
}
