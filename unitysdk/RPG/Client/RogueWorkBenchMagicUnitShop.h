#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_88;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchMagicUnitShopItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x184E25D0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x184E2580)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET UNITYSDK_OFFSET(0x184E2340)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x184E2610)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0x184E2230)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x184E2000)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET UNITYSDK_OFFSET(0x184E2010)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicUnitShop_TypeDefinitionIndex = 64349;

	class RogueWorkBenchMagicUnitShop : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* _ShopItemList; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_88* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchMagicUnitShop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchMagicUnitShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _GenerateShopData(::Class_1_D40936EF3BF54118_88* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* get_ShopItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET))(this);
		}
	};
}
