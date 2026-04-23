#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8789FE9A7EA728A4_4;
namespace Proto { class ItemList; }
namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDAVATARID_OFFSET UNITYSDK_OFFSET(0xA174DF0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xA174D80)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA174CC0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET UNITYSDK_OFFSET(0xA174D10)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xA174CA0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xA174CB0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_TRYSETAVATARNEW_OFFSET UNITYSDK_OFFSET(0xA175190)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA174D70)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__GETNEWAVATARID_OFFSET UNITYSDK_OFFSET(0xA175290)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeData_TypeDefinitionIndex = 58567;

	class DirectDeliveryNoticeData : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeToastConfig* _ToastConfig_k__BackingField; // 0x10
		::Class_1_8789FE9A7EA728A4_4* _ServerData; // 0x18

		::System::Void _ctor(::Class_1_8789FE9A7EA728A4_4* serverData, ::RPG::Client::DirectDeliveryNoticeToastConfig* toastConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_4*, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__CTOR_OFFSET))(this, serverData, toastConfig);
		}

		::RPG::Client::DirectDeliveryNoticeToastConfig* get_ToastConfig()
		{
			return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET))(this);
		}

		::System::Void set_ToastConfig(::RPG::Client::DirectDeliveryNoticeToastConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_RewardItemListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET))(this);
		}

		::Proto::ItemList* GetRewardItemList(::System::Int32 index)
		{
			return ((::Proto::ItemList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET))(this, index);
		}

		::System::UInt32 GetRewardAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDAVATARID_OFFSET))(this);
		}

		::System::Void TrySetAvatarNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_TRYSETAVATARNEW_OFFSET))(this);
		}

		::System::UInt32 _GetNewAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__GETNEWAVATARID_OFFSET))(this);
		}
	};
}
