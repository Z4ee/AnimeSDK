#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D6B720)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6B760)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0x18D6B7D0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTPRODUCINGPRODUCTIDS_B__21_1_OFFSET UNITYSDK_OFFSET(0x18D6B7E0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_0_OFFSET UNITYSDK_OFFSET(0x18D6B770)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETBESTSELLINGRECIPEIDS_B__16_1_OFFSET UNITYSDK_OFFSET(0x18D6B780)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_0_OFFSET UNITYSDK_OFFSET(0x18D6B7B0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETHIGHESTSELLPRICERECIPEIDS_B__19_1_OFFSET UNITYSDK_OFFSET(0x18D6B7C0)
#define RPG_CLIENT_ELFRESTAURANTMANAGESTATISTICS___C__GETTOTALRECIPECOUNT_B__17_0_OFFSET UNITYSDK_OFFSET(0x18D6B790)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantManageStatistics___c_TypeDefinitionIndex = 60954;

	class ElfRestaurantManageStatistics___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ElfRestaurantManageStatistics___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantManageStatistics___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD60);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD68);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD70);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD78);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ElfRestaurantRecipeData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD80);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD88);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD90);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantManageStatistics___c_TypeDefinitionIndex)->GetStaticField(0x6BD98);
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
