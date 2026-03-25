#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardDefinitionByIndexOptions; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardDefinitionByLeaderboardIdOptions; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardRecordByIndexOptions; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardRecordByUserIdOptions; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardUserScoreByIndexOptions; }
namespace Epic::OnlineServices::Leaderboards { class CopyLeaderboardUserScoreByUserIdOptions; }
namespace Epic::OnlineServices::Leaderboards { class Definition; }
namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardDefinitionCountOptions; }
namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardRecordCountOptions; }
namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardUserScoreCountOptions; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardRecord; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardUserScore; }
namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardDefinitionsCompleteCallback; }
namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardRanksCompleteCallback; }
namespace Epic::OnlineServices::Leaderboards { class OnQueryLeaderboardUserScoresCompleteCallback; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardDefinitionsOptions; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardRanksOptions; }
namespace Epic::OnlineServices::Leaderboards { class QueryLeaderboardUserScoresOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDDEFINITIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x86691F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_OFFSET UNITYSDK_OFFSET(0x86693F0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDRECORDBYINDEX_OFFSET UNITYSDK_OFFSET(0x8669680)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDRECORDBYUSERID_OFFSET UNITYSDK_OFFSET(0x8669880)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDUSERSCOREBYINDEX_OFFSET UNITYSDK_OFFSET(0x8669AF0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDUSERSCOREBYUSERID_OFFSET UNITYSDK_OFFSET(0x8669D80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDDEFINITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8669F80)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDRECORDCOUNT_OFFSET UNITYSDK_OFFSET(0x866A1A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDUSERSCORECOUNT_OFFSET UNITYSDK_OFFSET(0x866A3C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8669020)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x86690B0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8669140)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x866A5C0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDRANKS_OFFSET UNITYSDK_OFFSET(0x866A7A0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDUSERSCORES_OFFSET UNITYSDK_OFFSET(0x866A980)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x86691E0)
#define EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x86691D0)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int LeaderboardsInterface_TypeDefinitionIndex = 36203;

	class LeaderboardsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyleaderboarddefinitionbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyleaderboarddefinitionbyleaderboardidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyleaderboardrecordbyindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyleaderboardrecordbyuseridApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyleaderboarduserscorebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyleaderboarduserscorebyuseridApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DefinitionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetleaderboarddefinitioncountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetleaderboardrecordcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetleaderboarduserscorecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LeaderboardrecordApiLatest = 0x2; // 0x0
		// static const ::System::Int32 LeaderboarduserscoreApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryleaderboarddefinitionsApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryleaderboardranksApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryleaderboarduserscoresApiLatest = 0x2; // 0x0
		// static const ::System::Int32 TimeUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 UserscoresquerystatinfoApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyLeaderboardDefinitionByIndex(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions* options, ::Epic::OnlineServices::Leaderboards::Definition*& outLeaderboardDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions*, ::Epic::OnlineServices::Leaderboards::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDDEFINITIONBYINDEX_OFFSET))(this, options, outLeaderboardDefinition);
		}

		::Epic::OnlineServices::Result CopyLeaderboardDefinitionByLeaderboardId(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions* options, ::Epic::OnlineServices::Leaderboards::Definition*& outLeaderboardDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions*, ::Epic::OnlineServices::Leaderboards::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_OFFSET))(this, options, outLeaderboardDefinition);
		}

		::Epic::OnlineServices::Result CopyLeaderboardRecordByIndex(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions* options, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*& outLeaderboardRecord)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions*, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDRECORDBYINDEX_OFFSET))(this, options, outLeaderboardRecord);
		}

		::Epic::OnlineServices::Result CopyLeaderboardRecordByUserId(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions* options, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*& outLeaderboardRecord)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions*, ::Epic::OnlineServices::Leaderboards::LeaderboardRecord*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDRECORDBYUSERID_OFFSET))(this, options, outLeaderboardRecord);
		}

		::Epic::OnlineServices::Result CopyLeaderboardUserScoreByIndex(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions* options, ::Epic::OnlineServices::Leaderboards::LeaderboardUserScore*& outLeaderboardUserScore)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions*, ::Epic::OnlineServices::Leaderboards::LeaderboardUserScore*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDUSERSCOREBYINDEX_OFFSET))(this, options, outLeaderboardUserScore);
		}

		::Epic::OnlineServices::Result CopyLeaderboardUserScoreByUserId(::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions* options, ::Epic::OnlineServices::Leaderboards::LeaderboardUserScore*& outLeaderboardUserScore)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions*, ::Epic::OnlineServices::Leaderboards::LeaderboardUserScore*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_COPYLEADERBOARDUSERSCOREBYUSERID_OFFSET))(this, options, outLeaderboardUserScore);
		}

		::System::UInt32 GetLeaderboardDefinitionCount(::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDDEFINITIONCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetLeaderboardRecordCount(::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDRECORDCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetLeaderboardUserScoreCount(::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_GETLEADERBOARDUSERSCORECOUNT_OFFSET))(this, options);
		}

		::System::Void QueryLeaderboardDefinitions(::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions*, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDDEFINITIONS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryLeaderboardRanks(::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions*, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDRANKS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryLeaderboardUserScores(::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions*, ::System::Object*, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_QUERYLEADERBOARDUSERSCORES_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnQueryLeaderboardDefinitionsCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryLeaderboardRanksCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDRANKSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryLeaderboardUserScoresCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_LEADERBOARDSINTERFACE_ONQUERYLEADERBOARDUSERSCORESCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
