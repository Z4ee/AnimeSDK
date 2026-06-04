#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBBFEAA0)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBBFEA40)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0xBBFEA00)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFEAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopChangeCollector_TypeDefinitionIndex = 60351;

	class GridFightShopChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean IsDirty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}
	};
}
