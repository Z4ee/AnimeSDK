#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x9881E10)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x9882630)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x98825E0)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9881F00)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x9881E70)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x98826C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerChangeCollector_TypeDefinitionIndex = 52454;

	class GridFightPlayerChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightPlayerPropertyType>* ChangedProperties; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::GridFightPlayerPropertyType>* _PropertyNameToProperyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Boolean IsChanged(::RPG::Client::GridFightPlayerPropertyType propertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPlayerPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGECOLLECTOR_ISCHANGED_OFFSET))(this, propertyType);
		}
	};
}
