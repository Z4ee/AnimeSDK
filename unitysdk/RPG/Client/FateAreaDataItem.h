#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_970473F02CD5F0AB;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET UNITYSDK_OFFSET(0xA32B0C0)
#define RPG_CLIENT_FATEAREADATAITEM_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xA32B110)
#define RPG_CLIENT_FATEAREADATAITEM_GETMINSCORE_OFFSET UNITYSDK_OFFSET(0xA32B520)
#define RPG_CLIENT_FATEAREADATAITEM_GETSCORERULETEXT_OFFSET UNITYSDK_OFFSET(0xA32B8D0)
#define RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xA32BA50)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA32BD40)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xA32BD60)
#define RPG_CLIENT_FATEAREADATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA32BE50)
#define RPG_CLIENT_FATEAREADATAITEM_GET_FIRSTPASSREWARD_OFFSET UNITYSDK_OFFSET(0xA32BF50)
#define RPG_CLIENT_FATEAREADATAITEM_GET_HINT_OFFSET UNITYSDK_OFFSET(0xA32BED0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA32BDD0)
#define RPG_CLIENT_FATEAREADATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA32B4C0)
#define RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA32BD50)
#define RPG_CLIENT_FATEAREADATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA32B0B0)
#define RPG_CLIENT_FATEAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA32B090)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAreaDataItem_TypeDefinitionIndex = 58852;

	class FateAreaDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _AreaID_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_970473F02CD5F0AB* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_970473F02CD5F0AB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM__CTOR_1_OFFSET))(this, areaID);
		}

		static ::RPG::Client::FateAreaDataItem* CreateByID(::System::UInt32 areaID)
		{
			return ((::RPG::Client::FateAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET))(areaID);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 GetMinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETMINSCORE_OFFSET))(this);
		}

		::System::String* GetScoreRuleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETSCORERULETEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_AREATYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Hint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_HINT_OFFSET))(this);
		}

		::System::UInt32 get_FirstPassReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_FIRSTPASSREWARD_OFFSET))(this);
		}

		::Class_1_970473F02CD5F0AB* get__Row()
		{
			return ((::Class_1_970473F02CD5F0AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
