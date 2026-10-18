#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICUTILS_DEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xDE91C50)
#define RPG_CLIENT_RELICUTILS_GETALLRELICSETID_OFFSET UNITYSDK_OFFSET(0xDE91790)
#define RPG_CLIENT_RELICUTILS_GETCOMPAREVALUE_OFFSET UNITYSDK_OFFSET(0xDE91970)
#define RPG_CLIENT_RELICUTILS_GETMAINAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xDE92510)
#define RPG_CLIENT_RELICUTILS_ISRARERELICMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xDE91EB0)
#define RPG_CLIENT_RELICUTILS_NUMBERTORELICTYPE_OFFSET UNITYSDK_OFFSET(0xDE92400)
#define RPG_CLIENT_RELICUTILS_REPLACEDEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xDE91F00)
#define RPG_CLIENT_RELICUTILS_SELLDEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xDE921C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicUtils_TypeDefinitionIndex = 73159;

	class RelicUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllRelicSetID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETALLRELICSETID_OFFSET))();
		}

		static ::System::Single GetCompareValue(::RPG::GameCore::InventorySortType a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::InventorySortType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETCOMPAREVALUE_OFFSET))(a1, a2);
		}

		static ::System::Boolean DefaultCompare(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_DEFAULTCOMPARE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsRareRelicMainProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_ISRARERELICMAINPROPERTY_OFFSET))(a1);
		}

		static ::System::Boolean ReplaceDefaultCompare(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_REPLACEDEFAULTCOMPARE_OFFSET))(a1, a2);
		}

		static ::System::Boolean SellDefaultCompare(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2, ::RPG::GameCore::InventorySortType a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*, ::RPG::GameCore::InventorySortType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_SELLDEFAULTCOMPARE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::RelicType NumberToRelicType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::RelicType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_NUMBERTORELICTYPE_OFFSET))(a1);
		}

		static ::System::UInt32 GetMainAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETMAINAFFIXIDPROPERTYTYPE_OFFSET))(a1, a2);
		}
	};
}
