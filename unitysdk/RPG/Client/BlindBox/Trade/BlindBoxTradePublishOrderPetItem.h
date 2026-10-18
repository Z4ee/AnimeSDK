#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradePublishOrderPetItemKind.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GETINSTANCEAT_OFFSET UNITYSDK_OFFSET(0xC8AAE90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0xC8AAE40)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_ISSELECTABLE_OFFSET UNITYSDK_OFFSET(0xC8AAE20)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_KIND_OFFSET UNITYSDK_OFFSET(0xC8AAE00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_PET_OFFSET UNITYSDK_OFFSET(0xC8AAE10)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_SHOWSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0xC8AAE30)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8AAB10)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderPetItem_TypeDefinitionIndex = 74888;

	class BlindBoxTradePublishOrderPetItem : public ::System::Object
	{
	public:
		::RPG::Client::Pet::BlindBox::IBlindBoxPet* _Pet_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>* _Instances; // 0x18
		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind _Kind_k__BackingField; // 0x20
		::System::Boolean _ShowStackCount_k__BackingField; // 0x24
		::System::Boolean _IsSelectable_k__BackingField; // 0x25

		::System::Void _ctor(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind get_Kind()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_KIND_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* get_Pet()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_PET_OFFSET))(this);
		}

		::System::Boolean get_IsSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_ISSELECTABLE_OFFSET))(this);
		}

		::System::Boolean get_ShowStackCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_SHOWSTACKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_InstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GET_INSTANCECOUNT_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* GetInstanceAt(::System::Int32 a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERPETITEM_GETINSTANCEAT_OFFSET))(this, a1);
		}
	};
}
