#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0E2740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GETEXTRAPOWERADDEDBYSTAR_OFFSET UNITYSDK_OFFSET(0x1C0E3690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_CURLEVELUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E37D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_ISMAX_OFFSET UNITYSDK_OFFSET(0x1C0E3820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_NEXTUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E37B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_PIECECOUNT_OFFSET UNITYSDK_OFFSET(0x1C0E3770)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_STAR_OFFSET UNITYSDK_OFFSET(0x1C0E3750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_UPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E3790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0x1C0E2AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SETSTARBYPIECECOUNT_OFFSET UNITYSDK_OFFSET(0x1C0E3070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_ISMAX_OFFSET UNITYSDK_OFFSET(0x1C0E3830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_NEXTUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E37C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_PIECECOUNT_OFFSET UNITYSDK_OFFSET(0x1C0E3780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_STAR_OFFSET UNITYSDK_OFFSET(0x1C0E3760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_UPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E37A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0E3840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E2A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__GETCURLEVELUPGRADEPIECE_OFFSET UNITYSDK_OFFSET(0x1C0E3380)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaAvatarConfig_TypeDefinitionIndex = 74949;

	class IdleLiveGachaAvatarConfig : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>** StaticGet__StarToExtraPowerDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x595D0);
		}
		static ::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__starToPieceCountDic()
		{
			return (::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x595D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*>** StaticGet__starToConfigDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaAvatarConfig_TypeDefinitionIndex)->GetStaticField(0x595E0);
		}
		::System::Boolean _IsMax_k__BackingField; // 0x10
		::System::UInt32 _PieceCount_k__BackingField; // 0x14
		::System::UInt32 _Star_k__BackingField; // 0x18
		::System::UInt32 _NextUpgradePiece_k__BackingField; // 0x1C
		::System::UInt32 _UpgradePiece_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaAvatarConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_CREATE_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_INIT_OFFSET))();
		}

		::System::Void SetStarByPieceCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SETSTARBYPIECECOUNT_OFFSET))(this, a1);
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

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PieceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_PIECECOUNT_OFFSET))(this);
		}

		::System::Void set_PieceCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_PIECECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_UPGRADEPIECE_OFFSET))(this);
		}

		::System::Void set_UpgradePiece(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_UPGRADEPIECE_OFFSET))(this, a1);
		}

		::System::UInt32 get_NextUpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_NEXTUPGRADEPIECE_OFFSET))(this);
		}

		::System::Void set_NextUpgradePiece(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_NEXTUPGRADEPIECE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevelUpgradePiece()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_CURLEVELUPGRADEPIECE_OFFSET))(this);
		}

		::System::Boolean get_IsMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_GET_ISMAX_OFFSET))(this);
		}

		::System::Void set_IsMax(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAAVATARCONFIG_SET_ISMAX_OFFSET))(this, a1);
		}
	};
}
