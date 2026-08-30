#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0x1BD48510)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_GET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD484F0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1BD48480)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1BD48420)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BD483D0)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_HASFORGEREMOVED_OFFSET UNITYSDK_OFFSET(0x1BD48520)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR_SET_ISFORGEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD48500)
#define RPG_CLIENT_GRIDFIGHTFORGECHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD48530)

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
