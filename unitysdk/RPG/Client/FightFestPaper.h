#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestPaperRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADDESC_OFFSET UNITYSDK_OFFSET(0xBA1BEE0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ADFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xBA1BEC0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONBGPATH_OFFSET UNITYSDK_OFFSET(0xBA1BEA0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_COLLECTIONFGPATH_OFFSET UNITYSDK_OFFSET(0xBA1BE80)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ID_OFFSET UNITYSDK_OFFSET(0xBA1BB20)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWBGPATH_OFFSET UNITYSDK_OFFSET(0xBA1BE60)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_INTERVIEWFGPATH_OFFSET UNITYSDK_OFFSET(0xBA1BE40)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xBA1BF70)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBERTEXT_OFFSET UNITYSDK_OFFSET(0xBA1BD70)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISSUENUMBER_OFFSET UNITYSDK_OFFSET(0xBA1BD40)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xBA1BA40)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINBGPATHS_OFFSET UNITYSDK_OFFSET(0xBA1BE20)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINFGPATHS_OFFSET UNITYSDK_OFFSET(0xBA1BE00)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGEDESC_OFFSET UNITYSDK_OFFSET(0xBA1BDD0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_MAINPAGETITLE_OFFSET UNITYSDK_OFFSET(0xBA1BDA0)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xBA1BF10)
#define RPG_CLIENT_FIGHTFESTPAPER_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xBA1B2B0)
#define RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xBA1C090)
#define RPG_CLIENT_FIGHTFESTPAPER__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1BD10)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPaper_TypeDefinitionIndex = 59972;

	class FightFestPaper : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPaperRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::FightFestPaperRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPaperRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER__CTOR_OFFSET))(this, a1);
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

		::System::Void set_IsClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPER_SET_ISCLICKED_OFFSET))(this, a1);
		}
	};
}
