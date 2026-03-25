#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93A6D50)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93A6D90)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x93A6DA0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x93A6DB0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x93A6E40)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_3_OFFSET UNITYSDK_OFFSET(0x93A6E50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallData___c_TypeDefinitionIndex = 51402;

	class ChimeraDuelGameShopStallData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>, ::System::UInt32>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameShopStallData___c_TypeDefinitionIndex)->GetStaticField(0x47070);
		}
		static ::RPG::Client::ChimeraDuelGameShopStallData___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelGameShopStallData___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameShopStallData___c_TypeDefinitionIndex)->GetStaticField(0x47078);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameShopStallData___c_TypeDefinitionIndex)->GetStaticField(0x47080);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>, ::RPG::Client::ChimeraDuelGameSessionShopItem*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>, ::RPG::Client::ChimeraDuelGameSessionShopItem*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameShopStallData___c_TypeDefinitionIndex)->GetStaticField(0x47088);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameShopStallData___c_TypeDefinitionIndex)->GetStaticField(0x47090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__6_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_0_OFFSET))(this, p);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* __ctor_b__6_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*> p)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_1_OFFSET))(this, p);
		}

		::System::UInt32 __ctor_b__6_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*> p)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_2_OFFSET))(this, p);
		}

		::RPG::Client::ChimeraDuelGameSessionShopItem* __ctor_b__6_3(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*> p)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C___CTOR_B__6_3_OFFSET))(this, p);
		}
	};
}
