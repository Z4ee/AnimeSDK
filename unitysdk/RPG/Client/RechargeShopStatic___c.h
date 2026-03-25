#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RECHARGESHOPSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA28CFD0)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__18_0_OFFSET UNITYSDK_OFFSET(0xA28D010)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__18_1_OFFSET UNITYSDK_OFFSET(0xA28D040)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA28D000)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopStatic___c_TypeDefinitionIndex = 54354;

	class RechargeShopStatic___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x12290);
		}
		static ::RPG::Client::RechargeShopStatic___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeShopStatic___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x12298);
		}
		static ::System::Comparison_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__18_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x122A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* _CollectAndSortItems_b__18_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> pair)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__18_0_OFFSET))(this, pair);
		}

		::System::Int32 _CollectAndSortItems_b__18_1(::RPG::GameCore::ItemConfig* a, ::RPG::GameCore::ItemConfig* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__18_1_OFFSET))(this, a, b);
		}
	};
}
