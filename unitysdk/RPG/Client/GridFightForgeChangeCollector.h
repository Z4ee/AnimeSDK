#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0x981B9B0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x981B990)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x981B920)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x981B8C0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x981B870)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0x981B9C0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x981B9A0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x981B9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeChangeCollector_TypeDefinitionIndex = 52448;

	class GridFightForgeChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _IsForgeDataUpdate_k__BackingField; // 0x10
		::System::Boolean _HasForgeRemoved_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean get_IsForgeDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_ISFORGEDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsForgeDataUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_ISFORGEDATAUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_HasForgeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_HASFORGEREMOVED_OFFSET))(this);
		}

		::System::Void set_HasForgeRemoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_HASFORGEREMOVED_OFFSET))(this, value);
		}
	};
}
