#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_970473F02CD5F0AB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET UNITYSDK_OFFSET(0xCF28F20)
#define RPG_CLIENT_FATEAREADATAITEM_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xCF28F70)
#define RPG_CLIENT_FATEAREADATAITEM_GETMINSCORE_OFFSET UNITYSDK_OFFSET(0xCF29370)
#define RPG_CLIENT_FATEAREADATAITEM_GETSCORERULETEXT_OFFSET UNITYSDK_OFFSET(0xCF29710)
#define RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xCF29890)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCF29AC0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xCF29AE0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCF29C40)
#define RPG_CLIENT_FATEAREADATAITEM_GET_FIRSTPASSREWARD_OFFSET UNITYSDK_OFFSET(0xCF29DC0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_HINT_OFFSET UNITYSDK_OFFSET(0xCF29D00)
#define RPG_CLIENT_FATEAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCF29B80)
#define RPG_CLIENT_FATEAREADATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCF29310)
#define RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xCF29AD0)
#define RPG_CLIENT_FATEAREADATAITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCF28F10)
#define RPG_CLIENT_FATEAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF28EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAreaDataItem_TypeDefinitionIndex = 64048;

	class FateAreaDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _AreaID_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_970473F02CD5F0AB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_970473F02CD5F0AB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateAreaDataItem* CreateByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET))(a1);
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

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET))(this, a1);
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
