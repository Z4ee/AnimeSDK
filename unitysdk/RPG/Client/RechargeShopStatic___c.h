#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_RECHARGESHOPSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1985D400)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1985D440)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1985D470)
#define RPG_CLIENT_RECHARGESHOPSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1985D430)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopStatic___c_TypeDefinitionIndex = 63816;

	class RechargeShopStatic___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RechargeShopStatic___c** StaticGet___9()
		{
			return (::RPG::Client::RechargeShopStatic___c**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x1BCF0);
		}
		static ::System::Comparison_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x1BCF8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic___c_TypeDefinitionIndex)->GetStaticField(0x1BD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* _CollectAndSortItems_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_0_OFFSET))(this, a1);
		}

		::System::Int32 _CollectAndSortItems_b__16_1(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC___C__COLLECTANDSORTITEMS_B__16_1_OFFSET))(this, a1, a2);
		}
	};
}
