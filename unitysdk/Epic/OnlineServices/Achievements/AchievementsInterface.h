#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Achievements { class AddNotifyAchievementsUnlockedOptions; }
namespace Epic::OnlineServices::Achievements { class AddNotifyAchievementsUnlockedV2Options; }
namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionByAchievementIdOptions; }
namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionByIndexOptions; }
namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionV2ByAchievementIdOptions; }
namespace Epic::OnlineServices::Achievements { class CopyAchievementDefinitionV2ByIndexOptions; }
namespace Epic::OnlineServices::Achievements { class CopyPlayerAchievementByAchievementIdOptions; }
namespace Epic::OnlineServices::Achievements { class CopyPlayerAchievementByIndexOptions; }
namespace Epic::OnlineServices::Achievements { class CopyUnlockedAchievementByAchievementIdOptions; }
namespace Epic::OnlineServices::Achievements { class CopyUnlockedAchievementByIndexOptions; }
namespace Epic::OnlineServices::Achievements { class Definition; }
namespace Epic::OnlineServices::Achievements { class DefinitionV2; }
namespace Epic::OnlineServices::Achievements { class GetAchievementDefinitionCountOptions; }
namespace Epic::OnlineServices::Achievements { class GetPlayerAchievementCountOptions; }
namespace Epic::OnlineServices::Achievements { class GetUnlockedAchievementCountOptions; }
namespace Epic::OnlineServices::Achievements { class OnAchievementsUnlockedCallback; }
namespace Epic::OnlineServices::Achievements { class OnAchievementsUnlockedCallbackV2; }
namespace Epic::OnlineServices::Achievements { class OnQueryDefinitionsCompleteCallback; }
namespace Epic::OnlineServices::Achievements { class OnQueryPlayerAchievementsCompleteCallback; }
namespace Epic::OnlineServices::Achievements { class OnUnlockAchievementsCompleteCallback; }
namespace Epic::OnlineServices::Achievements { class PlayerAchievement; }
namespace Epic::OnlineServices::Achievements { class QueryDefinitionsOptions; }
namespace Epic::OnlineServices::Achievements { class QueryPlayerAchievementsOptions; }
namespace Epic::OnlineServices::Achievements { class UnlockAchievementsOptions; }
namespace Epic::OnlineServices::Achievements { class UnlockedAchievement; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_OFFSET UNITYSDK_OFFSET(0x18CCD420)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18CCD1A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x18CCD6A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x18CCD930)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x18CCDB30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYINDEX_OFFSET UNITYSDK_OFFSET(0x18CCDDC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x18CCDFC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18CCE1C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x18CCE3C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18CCE5C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETACHIEVEMENTDEFINITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x18CCE870)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETPLAYERACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x18CCEA90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETUNLOCKEDACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x18CCEC90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x18CCCEB0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x18CCCF40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x18CCCFD0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x18CCD060)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x18CCD0F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x18CCEE90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYPLAYERACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x18CCF050)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_REMOVENOTIFYACHIEVEMENTSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x18CCF210)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_UNLOCKACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x18CCF2F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18CCD190)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCD180)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int AchievementsInterface_TypeDefinitionIndex = 34801;

	class AchievementsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AchievementUnlocktimeUndefined = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 AddnotifyachievementsunlockedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 Addnotifyachievementsunlockedv2ApiLatest = 0x2; // 0x0
		// static const ::System::Int32 Copyachievementdefinitionv2ByachievementidApiLatest = 0x2; // 0x0
		// static const ::System::Int32 Copyachievementdefinitionv2ByindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopydefinitionbyachievementidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopydefinitionbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 Copydefinitionv2ByachievementidApiLatest = 0x2; // 0x0
		// static const ::System::Int32 Copydefinitionv2ByindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyplayerachievementbyachievementidApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyplayerachievementbyindexApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CopyunlockedachievementbyachievementidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyunlockedachievementbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DefinitionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 Definitionv2ApiLatest = 0x2; // 0x0
		// static const ::System::Int32 GetachievementdefinitioncountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetplayerachievementcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetunlockedachievementcountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PlayerachievementApiLatest = 0x2; // 0x0
		// static const ::System::Int32 PlayerstatinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QuerydefinitionsApiLatest = 0x3; // 0x0
		// static const ::System::Int32 QueryplayerachievementsApiLatest = 0x2; // 0x0
		// static const ::System::Int32 StatthresholdApiLatest = 0x1; // 0x0
		// static const ::System::Int32 StatthresholdsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnlockachievementsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnlockedachievementApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyAchievementsUnlocked(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyAchievementsUnlockedV2(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options* options, ::System::Object* clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionByAchievementId(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions* options, ::Epic::OnlineServices::Achievements::Definition*& outDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTID_OFFSET))(this, options, outDefinition);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionByIndex(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions* options, ::Epic::OnlineServices::Achievements::Definition*& outDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions*, ::Epic::OnlineServices::Achievements::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYINDEX_OFFSET))(this, options, outDefinition);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByAchievementId(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions* options, ::Epic::OnlineServices::Achievements::DefinitionV2*& outDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::DefinitionV2*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_OFFSET))(this, options, outDefinition);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByIndex(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions* options, ::Epic::OnlineServices::Achievements::DefinitionV2*& outDefinition)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions*, ::Epic::OnlineServices::Achievements::DefinitionV2*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYINDEX_OFFSET))(this, options, outDefinition);
		}

		::Epic::OnlineServices::Result CopyPlayerAchievementByAchievementId(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions* options, ::Epic::OnlineServices::Achievements::PlayerAchievement*& outAchievement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::PlayerAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_OFFSET))(this, options, outAchievement);
		}

		::Epic::OnlineServices::Result CopyPlayerAchievementByIndex(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions* options, ::Epic::OnlineServices::Achievements::PlayerAchievement*& outAchievement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions*, ::Epic::OnlineServices::Achievements::PlayerAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYINDEX_OFFSET))(this, options, outAchievement);
		}

		::Epic::OnlineServices::Result CopyUnlockedAchievementByAchievementId(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions* options, ::Epic::OnlineServices::Achievements::UnlockedAchievement*& outAchievement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::UnlockedAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_OFFSET))(this, options, outAchievement);
		}

		::Epic::OnlineServices::Result CopyUnlockedAchievementByIndex(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions* options, ::Epic::OnlineServices::Achievements::UnlockedAchievement*& outAchievement)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions*, ::Epic::OnlineServices::Achievements::UnlockedAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYINDEX_OFFSET))(this, options, outAchievement);
		}

		::System::UInt32 GetAchievementDefinitionCount(::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETACHIEVEMENTDEFINITIONCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetPlayerAchievementCount(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETPLAYERACHIEVEMENTCOUNT_OFFSET))(this, options);
		}

		::System::UInt32 GetUnlockedAchievementCount(::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETUNLOCKEDACHIEVEMENTCOUNT_OFFSET))(this, options);
		}

		::System::Void QueryDefinitions(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryDefinitionsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYDEFINITIONS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryPlayerAchievements(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYPLAYERACHIEVEMENTS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyAchievementsUnlocked(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_REMOVENOTIFYACHIEVEMENTSUNLOCKED_OFFSET))(this, inId);
		}

		::System::Void UnlockAchievements(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::UnlockAchievementsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_UNLOCKACHIEVEMENTS_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnAchievementsUnlockedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnAchievementsUnlockedCallbackV2InternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryDefinitionsCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryPlayerAchievementsCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUnlockAchievementsCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
