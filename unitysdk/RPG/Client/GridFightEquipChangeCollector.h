#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAADDED_OFFSET UNITYSDK_OFFSET(0x97F9FE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x97F9FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x97F9F50)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x97F9EF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x97F9EA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAADDED_OFFSET UNITYSDK_OFFSET(0x97F9FF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x97F9FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x97FA000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipChangeCollector_TypeDefinitionIndex = 52447;

	class GridFightEquipChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _IsEquipDataUpdate_k__BackingField; // 0x10
		::System::Boolean _IsEquipDataAdded_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean get_IsEquipDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsEquipDataUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsEquipDataAdded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAADDED_OFFSET))(this);
		}

		::System::Void set_IsEquipDataAdded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAADDED_OFFSET))(this, value);
		}
	};
}
