#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD389F60)
#define RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD389F90)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__15_0_OFFSET UNITYSDK_OFFSET(0xD38A020)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__15_1_OFFSET UNITYSDK_OFFSET(0xD38A060)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__13_0_OFFSET UNITYSDK_OFFSET(0xD389FA0)
#define RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__13_1_OFFSET UNITYSDK_OFFSET(0xD389FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemFactory___c_TypeDefinitionIndex = 65716;

	class ItemFactory___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__13_1()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x1B8B0);
		}
		static ::System::Predicate_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__13_0()
		{
			return (::System::Predicate_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x1B8B8);
		}
		static ::RPG::Client::ItemFactory___c** StaticGet___9()
		{
			return (::RPG::Client::ItemFactory___c**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x1B8C0);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__15_1()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x1B8C8);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__15_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ItemFactory___c_TypeDefinitionIndex)->GetStaticField(0x1B8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__13_0(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemDisplayDatasIfPlayerMaxLevel_b__13_1(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMDISPLAYDATASIFPLAYERMAXLEVEL_B__13_1_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__15_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _MergeItemConfigListIfPlayerMaxLevel_b__15_1(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMFACTORY___C__MERGEITEMCONFIGLISTIFPLAYERMAXLEVEL_B__15_1_OFFSET))(this, a1);
		}
	};
}
