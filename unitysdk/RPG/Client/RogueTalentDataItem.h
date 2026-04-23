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

#define RPG_CLIENT_ROGUETALENTDATAITEM_ACTIVETALENT_OFFSET UNITYSDK_OFFSET(0xB09A6C0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CANACTIVE_OFFSET UNITYSDK_OFFSET(0xB09A1D0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB099F30)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET UNITYSDK_OFFSET(0xB099FC0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB0999F0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETACTIVECOST_OFFSET UNITYSDK_OFFSET(0xB09A3C0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB09A660)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xB09A5E0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTAG_OFFSET UNITYSDK_OFFSET(0xB09A4E0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETEFFECTTITLE_OFFSET UNITYSDK_OFFSET(0xB09A560)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xB09A420)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GETUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0xB09A870)
#define RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0xB099D10)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xB09A170)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xB09A0B0)
#define RPG_CLIENT_ROGUETALENTDATAITEM_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB09A110)
#define RPG_CLIENT_ROGUETALENTDATAITEM_NEXTTALENTIDS_OFFSET UNITYSDK_OFFSET(0xB09A480)
#define RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0xB099BA0)
#define RPG_CLIENT_ROGUETALENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB099DA0)
#define RPG_CLIENT_ROGUETALENTDATAITEM__INITUNLOCKDATALIST_OFFSET UNITYSDK_OFFSET(0xB099DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem_TypeDefinitionIndex = 62174;

	class RogueTalentDataItem : public ::System::Object
	{
	public:
		::Class_1_4078C96AB014182F* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentUnlockData*>* _UnlockDataList; // 0x18
		::Class_1_24F009C622EAE626_6* _Proto; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTalentDataItem* Create(::RPG::GameCore::RogueTalentRow* row)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_OFFSET))(row);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_1(::RPG::GameCore::RogueNousTalentRow* row)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_1_OFFSET))(row);
		}

		static ::RPG::Client::RogueTalentDataItem* Create_2(::RPG::GameCore::RogueTournPermanentTalentRow* row)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_CREATE_2_OFFSET))(row);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_GET_TALENTID_OFFSET))(this);
		}

		::System::Void UpdateSrvData(::Class_1_24F009C622EAE626_6* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM_UPDATESRVDATA_OFFSET))(this, proto);
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
