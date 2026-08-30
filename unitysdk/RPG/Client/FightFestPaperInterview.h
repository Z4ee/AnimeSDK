#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestPaperInterviewRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1AE5CF20)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x1AE5CF90)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE5CDF0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1AE5CEB0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE5CE40)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_PAPERID_OFFSET UNITYSDK_OFFSET(0x1AE54150)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1AE5C1F0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0x1AE541A0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE534B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPaperInterview_TypeDefinitionIndex = 64239;

	class FightFestPaperInterview : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPaperInterviewRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::FightFestPaperInterviewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPaperInterviewRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PaperID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_PAPERID_OFFSET))(this);
		}

		::System::UInt32 get_TextJoinItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_TEXTJOINITEMID_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Info()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_INFO_OFFSET))(this);
		}

		::RPG::Client::TextID get_Comment()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_COMMENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_DETAIL_OFFSET))(this);
		}
	};
}
