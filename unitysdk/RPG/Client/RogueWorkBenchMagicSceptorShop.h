#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_75;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchMagicScepterShopItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xA3F12B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F1260)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_SHOPITEMLIST_OFFSET UNITYSDK_OFFSET(0xA3F11D0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3F12F0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0xA3F10B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F0EF0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__GENERATESHOPDATA_OFFSET UNITYSDK_OFFSET(0xA3F0F00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicSceptorShop_TypeDefinitionIndex = 54860;

	class RogueWorkBenchMagicSceptorShop : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>* _ShopItemList; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_E7C4009BCC22497A_75* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_E7C4009BCC22497A_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchMagicSceptorShop* shop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchMagicSceptorShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_REFRESH_OFFSET))(this, shop);
		}

		::System::Void _GenerateShopData(::Class_1_E7C4009BCC22497A_75* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__GENERATESHOPDATA_OFFSET))(this, proto);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>* get_ShopItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_SHOPITEMLIST_OFFSET))(this);
		}
	};
}
