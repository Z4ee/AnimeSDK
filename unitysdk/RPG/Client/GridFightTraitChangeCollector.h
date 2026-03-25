#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x98CCB70)
#define RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x98CC660)
#define RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x98CC520)
#define RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x98CCBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChangeCollector_TypeDefinitionIndex = 52461;

	class GridFightTraitChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UpdatedUIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UpdatedTraitEffectIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* UpdatedTraitIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}
	};
}
