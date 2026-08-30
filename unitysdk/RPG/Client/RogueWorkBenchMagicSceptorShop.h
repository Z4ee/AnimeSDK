#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_90;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchMagicScepterShopItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCID_OFFSET UNITYSDK_OFFSET(0x16A15100)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x16A150B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A152A0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_SHOPITEMLIST_OFFSET UNITYSDK_OFFSET(0x16A15020)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x16A15140)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_REFRESH_OFFSET UNITYSDK_OFFSET(0x16A14EF0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x16A152B0)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A14C90)
#define RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__GENERATESHOPDATA_OFFSET UNITYSDK_OFFSET(0x16A14CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchMagicSceptorShop_TypeDefinitionIndex = 67343;

	class RogueWorkBenchMagicSceptorShop : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>* _ShopItemList; // 0x10
		::System::Boolean _IsDisable_k__BackingField; // 0x18
		::System::UInt32 _FuncID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_90* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_90*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchMagicSceptorShop* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchMagicSceptorShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _GenerateShopData(::Class_1_D40936EF3BF54118_90* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP__GENERATESHOPDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>* get_ShopItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchMagicScepterShopItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHMAGICSCEPTORSHOP_GET_SHOPITEMLIST_OFFSET))(this);
		}
	};
}
