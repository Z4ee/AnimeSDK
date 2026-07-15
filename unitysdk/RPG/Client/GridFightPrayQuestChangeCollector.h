#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_GET_PRAYQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x1AEA21B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AEA2150)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1AEA20F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AEA20B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_SET_PRAYQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x1AEA21C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA21D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestChangeCollector_TypeDefinitionIndex = 61638;

	class GridFightPrayQuestChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _PrayQuestUpdated_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_PrayQuestUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_GET_PRAYQUESTUPDATED_OFFSET))(this);
		}

		::System::Void set_PrayQuestUpdated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCHANGECOLLECTOR_SET_PRAYQUESTUPDATED_OFFSET))(this, a1);
		}
	};
}
