#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PropertyNumberUIData; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }

#define RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xBFD0790)
#define RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBFD0680)
#define RPG_CLIENT_MEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFD0620)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTHP_OFFSET UNITYSDK_OFFSET(0xBFD1950)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTSP_OFFSET UNITYSDK_OFFSET(0xBFD19B0)
#define RPG_CLIENT_MEMBERDATA_GETPROPERTYNUMBERUIDATA_OFFSET UNITYSDK_OFFSET(0xBFD1A00)
#define RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET UNITYSDK_OFFSET(0xBFD0850)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0xBFCFEE0)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERROW_OFFSET UNITYSDK_OFFSET(0xBFD0010)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBFCFBF0)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARKEYID_OFFSET UNITYSDK_OFFSET(0xBFCFE20)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0xBFD0120)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xBFCFBD0)
#define RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFBB0)
#define RPG_CLIENT_MEMBERDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xBFCFF30)
#define RPG_CLIENT_MEMBERDATA_GET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xBFCFCB0)
#define RPG_CLIENT_MEMBERDATA_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0xBFD03A0)
#define RPG_CLIENT_MEMBERDATA_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0xBFCFF80)
#define RPG_CLIENT_MEMBERDATA_GET_ISASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFD70)
#define RPG_CLIENT_MEMBERDATA_GET_ISFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFE00)
#define RPG_CLIENT_MEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0xBFCFFF0)
#define RPG_CLIENT_MEMBERDATA_GET_ISPLAYERRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFD80)
#define RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0xBFCFD10)
#define RPG_CLIENT_MEMBERDATA_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFE10)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xBFD0570)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0xBFD0590)
#define RPG_CLIENT_MEMBERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBFD01D0)
#define RPG_CLIENT_MEMBERDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0xBFCFC60)
#define RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0xBFD0600)
#define RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0xBFCFCF0)
#define RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0xBFCFCD0)
#define RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0xBFCFBE0)
#define RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xBFCFBC0)
#define RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xBFCFCC0)
#define RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET UNITYSDK_OFFSET(0xBFD0000)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0xBFD0580)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0xBFD05F0)
#define RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0xBFD0610)
#define RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0xBFCFD00)
#define RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0xBFCFCE0)
#define RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0xBFD0DE0)
#define RPG_CLIENT_MEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0770)
#define RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0xBFD18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MemberData_TypeDefinitionIndex = 63724;

	class MemberData : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::RPG::GameCore::IAdventurePlayerCommonRowWrap* _AdventurePlayerRow; // 0x18
		::RPG::GameCore::FixPoint _SatietyRatio; // 0x20
		::RPG::GameCore::FixPoint _LeftHPRatio; // 0x28
		::RPG::GameCore::FixPoint _LeftSPRatio; // 0x30
		::Enum_3_01618AD0437C8486 _AvatarType_k__BackingField; // 0x38
		::System::UInt32 _SpeicalAvtarID_k__BackingField; // 0x3C
		::System::Boolean _IsLeader_k__BackingField; // 0x40
		::System::Boolean _EntityCreated_k__BackingField; // 0x41
		::System::UInt32 _TrialPlayerID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET))(this, a1);
		}

		::Enum_3_01618AD0437C8486 get_AvatarType()
		{
			return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_RealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_REALID_OFFSET))(this);
		}

		::System::Boolean get_EntityCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ENTITYCREATED_OFFSET))(this);
		}

		::System::Void set_EntityCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrialPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET))(this);
		}

		::System::Void set_TrialPlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpeicalAvtarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET))(this);
		}

		::System::Void set_SpeicalAvtarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerReturnTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISPLAYERRETURNTRIALAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAssistAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISASSISTAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsFixedPathAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISFIXEDPATHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarKeyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARKEYID_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISALIVE_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::Void set_IsLeader(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAdventurePlayerCommonRowWrap* get_AdventurePlayerRow()
		{
			return ((::RPG::GameCore::IAdventurePlayerCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERROW_OFFSET))(this);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_AvatarRow()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARROW_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_FULLNAME_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LeftHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_LEFTHPRATIO_OFFSET))(this);
		}

		::System::Void set_LeftHPRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_LeftSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET))(this);
		}

		::System::Void set_LeftSPRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SatietyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET))(this);
		}

		::System::Void set_SatietyRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET))(this, a1);
		}

		static ::RPG::Client::MemberData* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MemberData* Create_1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MemberData* CreateSnapShot(::RPG::Client::MemberData* a1)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET))(a1);
		}

		static ::RPG::Client::TeamDataRefreshMask GetRefreshMask(::RPG::Client::MemberData* a1, ::RPG::Client::MemberData* a2)
		{
			return ((::RPG::Client::TeamDataRefreshMask(*)(::RPG::Client::MemberData*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint ToPermyriadPrecision(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetCurrentHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETCURRENTHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCurrentSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETCURRENTSP_OFFSET))(this);
		}

		::RPG::Client::PropertyNumberUIData* GetPropertyNumberUIData()
		{
			return ((::RPG::Client::PropertyNumberUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETPROPERTYNUMBERUIDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _TestPermyriadPrecision(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET))(this, a1);
		}
	};
}
