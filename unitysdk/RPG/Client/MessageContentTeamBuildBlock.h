#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

namespace RPG::Client { class ITeamBuildCalculator; }
namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xBFD9490)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ALLTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xBFD9770)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xBFD9640)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISSELECTEDRECOMMENDTAB_OFFSET UNITYSDK_OFFSET(0xBFD9660)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_MYTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xBFD9750)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_SHOWEXPLAIN_OFFSET UNITYSDK_OFFSET(0xBFD9680)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBFD9410)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_REFRESH_OFFSET UNITYSDK_OFFSET(0xBFD9560)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ALLTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xBFD9780)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xBFD9650)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISSELECTEDRECOMMENDTAB_OFFSET UNITYSDK_OFFSET(0xBFD9670)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_MYTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xBFD9760)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9420)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__FILLWITHCANDIDATEPOOL_OFFSET UNITYSDK_OFFSET(0xBFD9790)
#define RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__REFRESH_B__4_0_OFFSET UNITYSDK_OFFSET(0xBFD9890)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentTeamBuildBlock_TypeDefinitionIndex = 59204;

	class MessageContentTeamBuildBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		// static const ::System::Int32 _DesiredTeamBuildCount = 0x4; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* _MyTeamBuilds_k__BackingField; // 0x28
		::System::Collections::Generic::IList_1<::System::UInt32>* _AvatarIDs; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* _AllTeamBuilds_k__BackingField; // 0x38
		::RPG::Client::ITeamBuildCalculator* _TeamBuildCalculator; // 0x40
		::System::Collections::Generic::IList_1<::System::UInt32>* _ExcludedAvatarIDs; // 0x48
		::System::Boolean _IsSelectedRecommendTab_k__BackingField; // 0x50
		::System::Boolean _IsDataReady_k__BackingField; // 0x51

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_REFRESH_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelectedRecommendTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ISSELECTEDRECOMMENDTAB_OFFSET))(this);
		}

		::System::Void set_IsSelectedRecommendTab(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ISSELECTEDRECOMMENDTAB_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowExplain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_SHOWEXPLAIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* get_MyTeamBuilds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_MYTEAMBUILDS_OFFSET))(this);
		}

		::System::Void set_MyTeamBuilds(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_MYTEAMBUILDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* get_AllTeamBuilds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_GET_ALLTEAMBUILDS_OFFSET))(this);
		}

		::System::Void set_AllTeamBuilds(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK_SET_ALLTEAMBUILDS_OFFSET))(this, a1);
		}

		::System::Void _FillWithCandidatePool(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__FILLWITHCANDIDATEPOOL_OFFSET))(this, a1);
		}

		::System::Void _Refresh_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTTEAMBUILDBLOCK__REFRESH_B__4_0_OFFSET))(this);
		}
	};
}
