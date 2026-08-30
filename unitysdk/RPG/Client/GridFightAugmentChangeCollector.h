#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_GET_AUGMENTINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x1ADB3820)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1ADB37C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1ADB3760)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ADB3720)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_SET_AUGMENTINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x1ADB3830)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB3840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentChangeCollector_TypeDefinitionIndex = 64612;

	class GridFightAugmentChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _AugmentInfoChanged_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_AugmentInfoChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_GET_AUGMENTINFOCHANGED_OFFSET))(this);
		}

		::System::Void set_AugmentInfoChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCHANGECOLLECTOR_SET_AUGMENTINFOCHANGED_OFFSET))(this, a1);
		}
	};
}
