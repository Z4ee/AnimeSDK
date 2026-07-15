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

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_OFFSET UNITYSDK_OFFSET(0x1BDA8380)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BDA80D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1BDA8630)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BDA88C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1BDA8AC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYINDEX_OFFSET UNITYSDK_OFFSET(0x1BDA8D50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1BDA8F50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BDA9150)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1BDA9350)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BDA9550)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETACHIEVEMENTDEFINITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDA97E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETPLAYERACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDA9A20)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETUNLOCKEDACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDA9C10)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDA7D90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDA7E30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDA7ED0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDA7F70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDA8010)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1BDA9E00)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYPLAYERACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1BDA9FE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_REMOVENOTIFYACHIEVEMENTSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BDAA1C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_UNLOCKACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1BDAA2A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDA80C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA80B0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int AchievementsInterface_TypeDefinitionIndex = 44246;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyAchievementsUnlocked(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyAchievementsUnlockedV2(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options* a1, ::System::Object* a2, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionByAchievementId(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions* a1, ::Epic::OnlineServices::Achievements::Definition*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYACHIEVEMENTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionByIndex(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions* a1, ::Epic::OnlineServices::Achievements::Definition*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions*, ::Epic::OnlineServices::Achievements::Definition*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByAchievementId(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions* a1, ::Epic::OnlineServices::Achievements::DefinitionV2*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::DefinitionV2*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByIndex(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions* a1, ::Epic::OnlineServices::Achievements::DefinitionV2*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions*, ::Epic::OnlineServices::Achievements::DefinitionV2*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYACHIEVEMENTDEFINITIONV2BYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyPlayerAchievementByAchievementId(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions* a1, ::Epic::OnlineServices::Achievements::PlayerAchievement*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::PlayerAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyPlayerAchievementByIndex(::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions* a1, ::Epic::OnlineServices::Achievements::PlayerAchievement*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions*, ::Epic::OnlineServices::Achievements::PlayerAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYPLAYERACHIEVEMENTBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyUnlockedAchievementByAchievementId(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions* a1, ::Epic::OnlineServices::Achievements::UnlockedAchievement*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions*, ::Epic::OnlineServices::Achievements::UnlockedAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyUnlockedAchievementByIndex(::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions* a1, ::Epic::OnlineServices::Achievements::UnlockedAchievement*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions*, ::Epic::OnlineServices::Achievements::UnlockedAchievement*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_COPYUNLOCKEDACHIEVEMENTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetAchievementDefinitionCount(::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETACHIEVEMENTDEFINITIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayerAchievementCount(::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETPLAYERACHIEVEMENTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetUnlockedAchievementCount(::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_GETUNLOCKEDACHIEVEMENTCOUNT_OFFSET))(this, a1);
		}

		::System::Void QueryDefinitions(::Epic::OnlineServices::Achievements::QueryDefinitionsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryDefinitionsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYDEFINITIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryPlayerAchievements(::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_QUERYPLAYERACHIEVEMENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyAchievementsUnlocked(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_REMOVENOTIFYACHIEVEMENTSUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void UnlockAchievements(::Epic::OnlineServices::Achievements::UnlockAchievementsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::UnlockAchievementsOptions*, ::System::Object*, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_UNLOCKACHIEVEMENTS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnAchievementsUnlockedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnAchievementsUnlockedCallbackV2InternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONACHIEVEMENTSUNLOCKEDCALLBACKV2INTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryDefinitionsCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYDEFINITIONSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryPlayerAchievementsCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONQUERYPLAYERACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUnlockAchievementsCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_ACHIEVEMENTSINTERFACE_ONUNLOCKACHIEVEMENTSCOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
