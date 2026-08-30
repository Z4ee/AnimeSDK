#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_91;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchMagicUnitShopItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xDFCF760)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xDFCF710)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xDFCF900)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET UNITYSDK_OFFSET(0xDFCF4D0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xDFCF7A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0xDFCF3A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xDFCF910)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xDFCF150)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET UNITYSDK_OFFSET(0xDFCF180)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicUnitShop_TypeDefinitionIndex = 67344;

	class RogueWorkBenchMagicUnitShop : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* _ShopItemList; // 0x10
		::System::UInt32 _FuncID; // 0x18
		::System::Boolean _IsDisable_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_91* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_91*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchMagicUnitShop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchMagicUnitShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _GenerateShopData(::Class_1_D40936EF3BF54118_91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP__GENERATESHOPDATA_OFFSET))(this, a1);
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

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>* get_ShopItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicUnitShopItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICUNITSHOP_GET_SHOPITEMLIST_OFFSET))(this);
		}
	};
}
