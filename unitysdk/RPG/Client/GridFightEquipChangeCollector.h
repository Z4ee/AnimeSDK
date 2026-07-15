#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAADDED_OFFSET UNITYSDK_OFFSET(0x1A67D7F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1A67D7D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A67D760)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A67D700)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A67D6B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAADDED_OFFSET UNITYSDK_OFFSET(0x1A67D800)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1A67D7E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A67D810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipChangeCollector_TypeDefinitionIndex = 61630;

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

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsEquipDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsEquipDataUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEquipDataAdded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_GET_ISEQUIPDATAADDED_OFFSET))(this);
		}

		::System::Void set_IsEquipDataAdded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGECOLLECTOR_SET_ISEQUIPDATAADDED_OFFSET))(this, a1);
		}
	};
}
