#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_GET_PROJECTIONADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xA564A10)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA5649A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA564890)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xA564800)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_SET_PROJECTIONADDEDORREMOVED_OFFSET UNITYSDK_OFFSET(0xA564A20)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA564A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionChangeCollector_TypeDefinitionIndex = 59413;

	class GridFightProjectionChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PosUpdatedProjectionUIDS; // 0x10
		::System::Boolean _ProjectionAddedOrRemoved_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean get_ProjectionAddedOrRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_GET_PROJECTIONADDEDORREMOVED_OFFSET))(this);
		}

		::System::Void set_ProjectionAddedOrRemoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCHANGECOLLECTOR_SET_PROJECTIONADDEDORREMOVED_OFFSET))(this, value);
		}
	};
}
