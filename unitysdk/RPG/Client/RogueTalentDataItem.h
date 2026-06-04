#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_24F009C622EAE626_6;
class Class_1_4078C96AB014182F;
namespace RPG::Client { class RogueTalentUnlockData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueNousTalentRow; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETALENTDATAITEM_ACTIVETALENT_OFFSET UNITYSDK_OFFSET(0xC7EB530)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CANACTIVE_OFFSET UNITYSDK_OFFSET(0xC7EB050)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC7EADB0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0xC7EAE40)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xC7EA750)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETACTIVECOST_OFFSET UNITYSDK_OFFSET(0xC7EB230)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xC7EB4D0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xC7EB450)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTAG_OFFSET UNITYSDK_OFFSET(0xC7EB350)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTITLE_OFFSET UNITYSDK_OFFSET(0xC7EB3D0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC7EB290)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0xC7EB6E0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0xC7EAB20)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xC7EAFF0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xC7EAF30)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7EAF90)
#define RPG_CLIENT_ROGUETALENTDATAITEM_NEXTTALENTIDS_OFFSET UNITYSDK_OFFSET(0xC7EB2F0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0xC7EA930)
#define RPG_CLIENT_ROGUETALENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC7EABB0)
#define RPG_CLIENT_ROGUETALENTDATAITEM__INITUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0xC7EABF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem_TypeDefinitionIndex = 63107;

	class RogueTalentDataItem : public ::System::Object
	{
	public:
		::Class_1_4078C96AB014182F* _Meta; // 0x10
		::Class_1_24F009C622EAE626_6* _Proto; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>* _UnlockDataList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTalentDataItem* Create(::RPG::GameCore::RogueTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_1(::RPG::GameCore::RogueNousTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_2(::RPG::GameCore::RogueTournPermanentTalentRow* a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET))(a1);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET))(this);
		}

		::System::Void UpdateSrvData(::Class_1_24F009C622EAE626_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CANACTIVE_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NextTalentIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_NEXTTALENTIDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* GetActiveCost()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETACTIVECOST_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTAG_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID GetEffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetEffectDescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESCPARAMLIST_OFFSET))(this);
		}

		::System::Void ActiveTalent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_ACTIVETALENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>* GetUnlockDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GETUNLOCKDATALIST_OFFSET))(this);
		}

		::System::Void _InitUnlockDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM__INITUNLOCKDATALIST_OFFSET))(this);
		}
	};
}
