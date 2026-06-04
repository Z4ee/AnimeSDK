#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0xC6D1B40)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CHANGEAVATAR_OFFSET UNITYSDK_OFFSET(0xC6D1780)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xC6D1730)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6D19F0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_1_OFFSET UNITYSDK_OFFSET(0xC6D1A30)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0xC6D1990)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GET__AVATARID_OFFSET UNITYSDK_OFFSET(0xC6D18C0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0xC6D1910)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISSPECIALRELICMAINTYPE_OFFSET UNITYSDK_OFFSET(0xC6D1BA0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D1770)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RecommendationCalculator_TypeDefinitionIndex = 69528;

	class RecommendationCalculator : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::RPG::Client::RelicItemData* _RelicItemData; // 0x18
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicBox::RecommendationCalculator* Create()
		{
			return ((::RPG::Client::RelicBox::RecommendationCalculator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CREATE_OFFSET))();
		}

		::System::Void ChangeAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CHANGEAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchMainProperty(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISMATCHMAINPROPERTY_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubPropertyMatchCount(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::RelicRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETRECOMMENDDATA_OFFSET))(this);
		}

		::System::UInt32 GetSubPropertyMatchCount_1(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_1_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RankType CalculateRank(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CALCULATERANK_OFFSET))(this, a1);
		}

		static ::System::Boolean IsSpecialRelicMainType(::System::UInt32 a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISSPECIALRELICMAINTYPE_OFFSET))(a1, a2);
		}

		::System::UInt32 get__AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GET__AVATARID_OFFSET))(this);
		}
	};
}
