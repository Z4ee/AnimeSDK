#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_76;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchMagicUnitShopItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xA3F19F0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F19A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET UNITYSDK_OFFSET(0xA3F1760)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3F1A30)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0xA3F1640)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F1490)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET UNITYSDK_OFFSET(0xA3F14A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicUnitShop_TypeDefinitionIndex = 54861;

	class RogueWorkBenchMagicUnitShop : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* _ShopItemList; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_E7C4009BCC22497A_76* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E7C4009BCC22497A_76*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchMagicUnitShop* shop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchMagicUnitShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET))(this, shop);
		}

		::System::Void _GenerateShopData(::Class_1_E7C4009BCC22497A_76* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_76*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET))(this, proto);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* get_ShopItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET))(this);
		}
	};
}
