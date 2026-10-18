#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RANKCHANGE_GETCOMMENTS_OFFSET UNITYSDK_OFFSET(0xDE492D0)
#define RPG_CLIENT_RANKCHANGE_GET_DESCAFTER_OFFSET UNITYSDK_OFFSET(0xDE491A0)
#define RPG_CLIENT_RANKCHANGE_GET_DESCBEFORE_OFFSET UNITYSDK_OFFSET(0xDE49070)
#define RPG_CLIENT_RANKCHANGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE48F80)
#define RPG_CLIENT_RANKCHANGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDE48FD0)
#define RPG_CLIENT_RANKCHANGE_GET_RANK_OFFSET UNITYSDK_OFFSET(0xDE48F30)
#define RPG_CLIENT_RANKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xDE48F20)

namespace RPG::Client
{
	inline static constexpr unsigned int RankChange_TypeDefinitionIndex = 62492;

	class RankChange : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarRankConfigRow* BeforeRank; // 0x10
		::RPG::GameCore::AvatarRankConfigRow* AfterRank; // 0x18

		::System::Void _ctor(::RPG::GameCore::AvatarRankConfigRow* a1, ::RPG::GameCore::AvatarRankConfigRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRankConfigRow*, ::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GET_RANK_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescBefore()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GET_DESCBEFORE_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescAfter()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GET_DESCAFTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetComments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANKCHANGE_GETCOMMENTS_OFFSET))(this);
		}
	};
}
