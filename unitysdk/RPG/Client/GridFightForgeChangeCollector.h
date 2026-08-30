#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0xD198370)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xD198350)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xD1982E0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xD198280)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xD198230)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0xD198380)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xD198360)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD198390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeChangeCollector_TypeDefinitionIndex = 64615;

	class GridFightForgeChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _HasForgeRemoved_k__BackingField; // 0x10
		::System::Boolean _IsForgeDataUpdate_k__BackingField; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsForgeDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_ISFORGEDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsForgeDataUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_ISFORGEDATAUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasForgeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_HASFORGEREMOVED_OFFSET))(this);
		}

		::System::Void set_HasForgeRemoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_HASFORGEREMOVED_OFFSET))(this, a1);
		}
	};
}
