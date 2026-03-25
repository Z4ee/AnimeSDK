#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9970280)
#define RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99702B0)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_0_OFFSET UNITYSDK_OFFSET(0x9970340)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_1_OFFSET UNITYSDK_OFFSET(0x9970380)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_0_OFFSET UNITYSDK_OFFSET(0x99702C0)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_1_OFFSET UNITYSDK_OFFSET(0x9970300)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory___c_TypeDefinitionIndex = 53379;

	class ItemFactory___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x22250);
		}
		static ::RPG::Client::ItemFactory___c** StaticGet___9()
		{
			return (::RPG::Client::ItemFactory___c**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x22258);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__12_1()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x22260);
		}
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__10_1()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x22268);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x22270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__10_0(::RPG::Client::ItemDisplayData* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_0_OFFSET))(this, c);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__10_1(::RPG::Client::ItemDisplayData* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__10_1_OFFSET))(this, c);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__12_0(::RPG::GameCore::ItemConfig* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_0_OFFSET))(this, c);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__12_1(::RPG::GameCore::ItemConfig* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__12_1_OFFSET))(this, c);
		}
	};
}
