#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_GET_ISCONSUMABLEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xA4643C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA464360)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA464300)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xA4642C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_SET_ISCONSUMABLEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xA4643D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4643E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableChangeCollector_TypeDefinitionIndex = 59404;

	class GridFightConsumableChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _IsConsumableDataUpdate_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean get_IsConsumableDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_GET_ISCONSUMABLEDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsConsumableDataUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_SET_ISCONSUMABLEDATAUPDATE_OFFSET))(this, value);
		}
	};
}
