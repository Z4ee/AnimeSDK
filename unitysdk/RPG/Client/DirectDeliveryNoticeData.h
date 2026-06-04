#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8789FE9A7EA728A4_2;
namespace Proto { class ItemList; }
namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDAVATARID_OFFSET UNITYSDK_OFFSET(0xB7F3000)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xB7F3340)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB7F3AF0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET UNITYSDK_OFFSET(0xB7F3B40)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xB7F3AD0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET UNITYSDK_OFFSET(0xB7F3AE0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_TRYSETAVATARNEW_OFFSET UNITYSDK_OFFSET(0xB7F3BB0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F3BA0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__GETNEWAVATARID_OFFSET UNITYSDK_OFFSET(0xB7F3C30)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeData_TypeDefinitionIndex = 59497;

	class DirectDeliveryNoticeData : public ::System::Object
	{
	public:
		::Class_1_8789FE9A7EA728A4_2* _ServerData; // 0x10
		::RPG::Client::DirectDeliveryNoticeToastConfig* _ToastConfig_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_8789FE9A7EA728A4_2* a1, ::RPG::Client::DirectDeliveryNoticeToastConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8789FE9A7EA728A4_2*, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DirectDeliveryNoticeToastConfig* get_ToastConfig()
		{
			return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_TOASTCONFIG_OFFSET))(this);
		}

		::System::Void set_ToastConfig(::RPG::Client::DirectDeliveryNoticeToastConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_SET_TOASTCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_RewardItemListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GET_REWARDITEMLISTCOUNT_OFFSET))(this);
		}

		::Proto::ItemList* GetRewardItemList(::System::Int32 a1)
		{
			return ((::Proto::ItemList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEDATA_GETREWARDITEMLIST_OFFSET))(this, a1);
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
