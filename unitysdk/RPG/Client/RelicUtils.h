#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICUTILS_DEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xA2BE590)
#define RPG_CLIENT_RELICUTILS_GETALLRELICSETID_OFFSET UNITYSDK_OFFSET(0xA2BE1D0)
#define RPG_CLIENT_RELICUTILS_GETCOMPAREVALUE_OFFSET UNITYSDK_OFFSET(0xA2BE320)
#define RPG_CLIENT_RELICUTILS_GETMAINAFFIXIDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xA2A50D0)
#define RPG_CLIENT_RELICUTILS_ISRARERELICMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2BE6D0)
#define RPG_CLIENT_RELICUTILS_NUMBERTORELICTYPE_OFFSET UNITYSDK_OFFSET(0xA2BE990)
#define RPG_CLIENT_RELICUTILS_REPLACEDEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xA2BE720)
#define RPG_CLIENT_RELICUTILS_SELLDEFAULTCOMPARE_OFFSET UNITYSDK_OFFSET(0xA2BE850)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicUtils_TypeDefinitionIndex = 59967;

	class RelicUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllRelicSetID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETALLRELICSETID_OFFSET))();
		}

		static ::System::Single GetCompareValue(::RPG::GameCore::InventorySortType type, ::RPG::Client::RelicItemData* relicItem)
		{
			return ((::System::Single(*)(::RPG::GameCore::InventorySortType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETCOMPAREVALUE_OFFSET))(type, relicItem);
		}

		static ::System::Boolean DefaultCompare(::RPG::Client::RelicItemData* relicItemA, ::RPG::Client::RelicItemData* relicItemB)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_DEFAULTCOMPARE_OFFSET))(relicItemA, relicItemB);
		}

		static ::System::Boolean IsRareRelicMainProperty(::RPG::GameCore::AvatarPropertyType property)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_ISRARERELICMAINPROPERTY_OFFSET))(property);
		}

		static ::System::Boolean ReplaceDefaultCompare(::RPG::Client::RelicItemData* relicItemA, ::RPG::Client::RelicItemData* relicItemB)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_REPLACEDEFAULTCOMPARE_OFFSET))(relicItemA, relicItemB);
		}

		static ::System::Boolean SellDefaultCompare(::RPG::Client::RelicItemData* relicItemA, ::RPG::Client::RelicItemData* relicItemB, ::RPG::GameCore::InventorySortType sortType, ::System::Boolean isDescend)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*, ::RPG::GameCore::InventorySortType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_SELLDEFAULTCOMPARE_OFFSET))(relicItemA, relicItemB, sortType, isDescend);
		}

		static ::RPG::GameCore::RelicType NumberToRelicType(::System::Int32 number)
		{
			return ((::RPG::GameCore::RelicType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_NUMBERTORELICTYPE_OFFSET))(number);
		}

		static ::System::UInt32 GetMainAffixIDPropertyType(::RPG::GameCore::AvatarPropertyType mainProperty, ::System::UInt32 mainAffixGroup)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICUTILS_GETMAINAFFIXIDPROPERTYTYPE_OFFSET))(mainProperty, mainAffixGroup);
		}
	};
}
