#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyOrderStatus.h"
#include "unitysdk/RPG/Client/AlleyOrderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyGoodData; }
namespace RPG::Client { class AlleySpecialOrderTarget; }
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xB3098F0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0xB3098A0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERPICPATH_OFFSET UNITYSDK_OFFSET(0xB3099C0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERTIPSPATH_OFFSET UNITYSDK_OFFSET(0xB309960)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERTIPSTIME_OFFSET UNITYSDK_OFFSET(0xB309980)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERCONTENT_OFFSET UNITYSDK_OFFSET(0xB309860)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERGOODS_OFFSET UNITYSDK_OFFSET(0xB309880)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERREWARD_OFFSET UNITYSDK_OFFSET(0xB309940)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERSHIP_OFFSET UNITYSDK_OFFSET(0xB309920)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERSHOPID_OFFSET UNITYSDK_OFFSET(0xB3099A0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB3098C0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SUBTITLEID_OFFSET UNITYSDK_OFFSET(0xB309900)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xB3098E0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3098B0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB3098D0)
#define RPG_CLIENT_ALLEYSPECIALORDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB309590)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleySpecialOrderData_TypeDefinitionIndex = 58244;

	class AlleySpecialOrderData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>* _Targets_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::AlleyGoodData*>* _Goods_k__BackingField; // 0x18
		::RPG::GameCore::AlleySpecialOrderRow* Row; // 0x20
		::RPG::Client::AlleyOrderStatus _Status_k__BackingField; // 0x28
		::RPG::Client::AlleyOrderType _Type_k__BackingField; // 0x2C
		::System::UInt32 _OrderID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERID_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderType get_Type()
		{
			return ((::RPG::Client::AlleyOrderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::AlleyOrderStatus get_Status()
		{
			return ((::RPG::Client::AlleyOrderStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::AlleyOrderStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyOrderStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>* get_Targets()
		{
			return ((::Il2CppArray<::RPG::Client::AlleySpecialOrderTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_TARGETS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::AlleyGoodData*>* get_Goods()
		{
			return ((::Il2CppArray<::RPG::Client::AlleyGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_GOODS_OFFSET))(this);
		}

		::System::String* get_SubTitleID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SUBTITLEID_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOrderShip()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERSHIP_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::GoodsClass*>* get_SpecialOrderGoods()
		{
			return ((::Il2CppArray<::RPG::GameCore::GoodsClass*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERGOODS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialOrderContent()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOrderReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERREWARD_OFFSET))(this);
		}

		::System::String* get_OrderTipsPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERTIPSPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_OrderTipsTime()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERTIPSTIME_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOrderShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_SPECIALORDERSHOPID_OFFSET))(this);
		}

		::System::String* get_OrderPicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERDATA_GET_ORDERPICPATH_OFFSET))(this);
		}
	};
}
