#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F1D60)
#define RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194F1D90)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_0_OFFSET UNITYSDK_OFFSET(0x194F1E20)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_1_OFFSET UNITYSDK_OFFSET(0x194F1E60)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_0_OFFSET UNITYSDK_OFFSET(0x194F1DA0)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_1_OFFSET UNITYSDK_OFFSET(0x194F1DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory___c_TypeDefinitionIndex = 65780;

	class ItemFactory___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x58950);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x58958);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__12_1()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x58960);
		}
		static ::RPG::Client::ItemFactory___c** StaticGet___9()
		{
			return (::RPG::Client::ItemFactory___c**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x58968);
		}
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__10_1()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x58970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__10_0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_0_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__10_1(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_1_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__12_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_0_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__12_1(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_1_OFFSET))(this, a1);
		}
	};
}
