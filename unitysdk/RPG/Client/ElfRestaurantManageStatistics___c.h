#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDCB410)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCB450)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0xCDCB4C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET UNITYSDK_OFFSET(0xCDCB4D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET UNITYSDK_OFFSET(0xCDCB460)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET UNITYSDK_OFFSET(0xCDCB470)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET UNITYSDK_OFFSET(0xCDCB4A0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET UNITYSDK_OFFSET(0xCDCB4B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET UNITYSDK_OFFSET(0xCDCB480)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics___c_TypeDefinitionIndex = 63745;

	class ElfRestaurantManageStatistics___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489A0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489A8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489B0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489B8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489C0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489C8);
		}
		static ::RPG::Client::ElfRestaurantManageStatistics___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantManageStatistics___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489D0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x489D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBestSellingRecipeIDs_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetBestSellingRecipeIDs_b__16_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetTotalRecipeCount_b__17_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetHighestSellPriceRecipeIDs_b__19_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHighestSellPriceRecipeIDs_b__19_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetBestProducingProductIDs_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetBestProducingProductIDs_b__21_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET))(this, a1);
		}
	};
}
