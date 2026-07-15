#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CALCULATERANK_OFFSET UNITYSDK_OFFSET(0x1986CDB0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CHANGEAVATAR_OFFSET UNITYSDK_OFFSET(0x1986C8D0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1986C880)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1986CC60)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1986CCA0)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GETSUBPROPERTYMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1986CB00)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_GET__AVATARID_OFFSET UNITYSDK_OFFSET(0x1986CA10)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISMATCHMAINPROPERTY_OFFSET UNITYSDK_OFFSET(0x1986CA60)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR_ISSPECIALRELICMAINTYPE_OFFSET UNITYSDK_OFFSET(0x1986CE10)
#define RPG_CLIENT_RELICBOX_RECOMMENDATIONCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1986C8C0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RecommendationCalculator_TypeDefinitionIndex = 71051;

	class RecommendationCalculator : public ::System::Object
	{
	public:
		::RPG::Client::RelicItemData* _RelicItemData; // 0x10
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x18
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x20

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
