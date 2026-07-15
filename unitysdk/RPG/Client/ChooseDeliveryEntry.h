#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChooseDeliveryGroup; }
namespace RPG::Client { class ChooseDeliveryToastConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1ADEF920)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1ADEF940)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0x1ADEF960)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x1ADEF930)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1ADEF950)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0x1ADEF970)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEF980)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryEntry_TypeDefinitionIndex = 60726;

	class ChooseDeliveryEntry : public ::System::Object
	{
	public:
		::RPG::Client::ChooseDeliveryToastConfig* _ToastConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* _Groups_k__BackingField; // 0x18
		::System::UInt32 _EntryID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* get_Groups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_GROUPS_OFFSET))(this);
		}

		::System::Void set_Groups(::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_GROUPS_OFFSET))(this, a1);
		}

		::RPG::Client::ChooseDeliveryToastConfig* get_ToastConfig()
		{
			return ((::RPG::Client::ChooseDeliveryToastConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_TOASTCONFIG_OFFSET))(this);
		}

		::System::Void set_ToastConfig(::RPG::Client::ChooseDeliveryToastConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChooseDeliveryToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_TOASTCONFIG_OFFSET))(this, a1);
		}
	};
}
