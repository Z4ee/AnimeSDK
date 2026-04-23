#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestPaperRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADDESC_OFFSET UNITYSDK_OFFSET(0xA380710)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA3806F0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONBGPATH_OFFSET UNITYSDK_OFFSET(0xA3806D0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONFGPATH_OFFSET UNITYSDK_OFFSET(0xA3806B0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3782A0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWBGPATH_OFFSET UNITYSDK_OFFSET(0xA380690)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWFGPATH_OFFSET UNITYSDK_OFFSET(0xA380670)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xA3807A0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0xA3805A0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBER_OFFSET UNITYSDK_OFFSET(0xA380570)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA3782C0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINBGPATHS_OFFSET UNITYSDK_OFFSET(0xA380650)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINFGPATHS_OFFSET UNITYSDK_OFFSET(0xA380630)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGEDESC_OFFSET UNITYSDK_OFFSET(0xA380600)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGETITLE_OFFSET UNITYSDK_OFFSET(0xA3805D0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xA380740)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA37FC40)
#define RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xA3808C0)
#define RPG_CLIENT_FIGHTFESTPAPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA377E90)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPaper_TypeDefinitionIndex = 59042;

	class FightFestPaper : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPaperRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::FightFestPaperRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPaperRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_IssueNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_IssueNumberText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBERTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainPageTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MainPageDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MainFgPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINFGPATHS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_MainBgPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_MAINBGPATHS_OFFSET))(this);
		}

		::System::String* get_InterviewFgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWFGPATH_OFFSET))(this);
		}

		::System::String* get_InterviewBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWBGPATH_OFFSET))(this);
		}

		::System::String* get_CollectionFgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONFGPATH_OFFSET))(this);
		}

		::System::String* get_CollectionBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONBGPATH_OFFSET))(this);
		}

		::System::String* get_AdFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ADFIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AdDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ADDESC_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET))(this, value);
		}
	};
}
