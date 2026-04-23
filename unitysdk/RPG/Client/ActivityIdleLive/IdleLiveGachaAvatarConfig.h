#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9B561C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GETEXTRAPOWERADDEDBYSTAR_OFFSET UNITYSDK_OFFSET(0x9B56F80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_CURLEVELUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B57170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_ISMAX_OFFSET UNITYSDK_OFFSET(0x9B57180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_NEXTUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B57150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_PIECECOUNT_OFFSET UNITYSDK_OFFSET(0x9B57110)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_STAR_OFFSET UNITYSDK_OFFSET(0x9B570F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_UPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B57130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x9B56520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SETSTARBYPIECECOUNT_OFFSET UNITYSDK_OFFSET(0x9B56960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_ISMAX_OFFSET UNITYSDK_OFFSET(0x9B57190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_NEXTUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B57160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_PIECECOUNT_OFFSET UNITYSDK_OFFSET(0x9B57120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_STAR_OFFSET UNITYSDK_OFFSET(0x9B57100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_UPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B57140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B571A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B56510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__GETCURLEVELUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x9B56C70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaAvatarConfig_TypeDefinitionIndex = 69308;

	class IdleLiveGachaAvatarConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*>** StaticGet__starToConfigDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x2EFA0);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__starToPieceCountDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x2EFA8);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>** StaticGet__StarToExtraPowerDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x2EFB0);
		}
		::System::UInt32 _UpgradePiece_k__BackingField; // 0x10
		::System::Boolean _IsMax_k__BackingField; // 0x14
		::System::UInt32 _NextUpgradePiece_k__BackingField; // 0x18
		::System::UInt32 _PieceCount_k__BackingField; // 0x1C
		::System::UInt32 _Star_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* Create(::System::UInt32 pieceCount)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_CREATE_OFFSET))(pieceCount);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_INIT_OFFSET))();
		}

		::System::Void SetStarByPieceCount(::System::UInt32 pieceCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SETSTARBYPIECECOUNT_OFFSET))(this, pieceCount);
		}

		::System::UInt32 _GetCurLevelUpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__GETCURLEVELUPGRADEPIECE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPowerAddedByStar()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GETEXTRAPOWERADDEDBYSTAR_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_STAR_OFFSET))(this, value);
		}

		::System::UInt32 get_PieceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_PIECECOUNT_OFFSET))(this);
		}

		::System::Void set_PieceCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_PIECECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_UpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_UPGRADEPIECE_OFFSET))(this);
		}

		::System::Void set_UpgradePiece(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_UPGRADEPIECE_OFFSET))(this, value);
		}

		::System::UInt32 get_NextUpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_NEXTUPGRADEPIECE_OFFSET))(this);
		}

		::System::Void set_NextUpgradePiece(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_NEXTUPGRADEPIECE_OFFSET))(this, value);
		}

		::System::UInt32 get_CurLevelUpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_CURLEVELUPGRADEPIECE_OFFSET))(this);
		}

		::System::Boolean get_IsMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_ISMAX_OFFSET))(this);
		}

		::System::Void set_IsMax(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_ISMAX_OFFSET))(this, value);
		}
	};
}
