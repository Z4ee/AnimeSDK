#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PropertyNumberUIData; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }

#define RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9B8B710)
#define RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9B8B590)
#define RPG_CLIENT_MEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B8B530)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTHP_OFFSET UNITYSDK_OFFSET(0x9B8BFB0)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTSP_OFFSET UNITYSDK_OFFSET(0x9B8C100)
#define RPG_CLIENT_MEMBERDATA_GETPROPERTYNUMBERUIDATA_OFFSET UNITYSDK_OFFSET(0x9B8C240)
#define RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET UNITYSDK_OFFSET(0x9B8B7D0)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x9B8AF90)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERROW_OFFSET UNITYSDK_OFFSET(0x9B8B0A0)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x9B8ACC0)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9B8AD20)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARKEYID_OFFSET UNITYSDK_OFFSET(0x9B8AED0)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0x9B8B170)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9B8AD00)
#define RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9B8ACA0)
#define RPG_CLIENT_MEMBERDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x9B8AFE0)
#define RPG_CLIENT_MEMBERDATA_GET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x9B8ADE0)
#define RPG_CLIENT_MEMBERDATA_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x9B8B320)
#define RPG_CLIENT_MEMBERDATA_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x9B8B030)
#define RPG_CLIENT_MEMBERDATA_GET_ISASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x9B8AEA0)
#define RPG_CLIENT_MEMBERDATA_GET_ISFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x9B8AEB0)
#define RPG_CLIENT_MEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x9B8B080)
#define RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x9B8AE40)
#define RPG_CLIENT_MEMBERDATA_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x9B8AEC0)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B480)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B4A0)
#define RPG_CLIENT_MEMBERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B8B1C0)
#define RPG_CLIENT_MEMBERDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0x9B8AD90)
#define RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B510)
#define RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0x9B8AE20)
#define RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x9B8AE00)
#define RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x9B8AD10)
#define RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9B8ACB0)
#define RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x9B8ADF0)
#define RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x9B8B090)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B490)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B500)
#define RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0x9B8B520)
#define RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0x9B8AE30)
#define RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x9B8AE10)
#define RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0x9B8BAC0)
#define RPG_CLIENT_MEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B6F0)
#define RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0x9B8BDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MemberData_TypeDefinitionIndex = 55595;

	class MemberData : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x10
		::RPG::GameCore::IAdventurePlayerCommonRowWrap* _AdventurePlayerRow; // 0x18
		::System::UInt32 _TrialPlayerID_k__BackingField; // 0x20
		::Enum_3_A35B38E5F9115A76 _AvatarType_k__BackingField; // 0x24
		::RPG::GameCore::FixPoint _LeftSPRatio; // 0x28
		::RPG::GameCore::FixPoint _SatietyRatio; // 0x30
		::RPG::GameCore::FixPoint _LeftHPRatio; // 0x38
		::System::Boolean _IsLeader_k__BackingField; // 0x40
		::System::Boolean _EntityCreated_k__BackingField; // 0x41
		::System::UInt32 _SpeicalAvtarID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET))(this, value);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARDATA_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76 get_AvatarType()
		{
			return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_A35B38E5F9115A76 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET))(this, value);
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

		::System::Void set_EntityCreated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET))(this, value);
		}

		::System::UInt32 get_TrialPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET))(this);
		}

		::System::Void set_TrialPlayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET))(this, value);
		}

		::System::UInt32 get_SpeicalAvtarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET))(this);
		}

		::System::Void set_SpeicalAvtarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET))(this, value);
		}

		::System::Boolean get_IsTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET))(this);
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

		::System::Void set_IsLeader(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET))(this, value);
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

		::System::Void set_LeftHPRatio(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_LeftSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET))(this);
		}

		::System::Void set_LeftSPRatio(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_SatietyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET))(this);
		}

		::System::Void set_SatietyRatio(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET))(this, value);
		}

		static ::RPG::Client::MemberData* Create(::RPG::Client::IAvatarInfoProvider* pAvatarData)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_OFFSET))(pAvatarData);
		}

		static ::RPG::Client::MemberData* Create_1(::RPG::Client::IAvatarInfoProvider* pAvatarData, ::RPG::GameCore::FixPoint hpRatio, ::RPG::GameCore::FixPoint spRatio, ::RPG::GameCore::FixPoint satietyRatio)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET))(pAvatarData, hpRatio, spRatio, satietyRatio);
		}

		static ::RPG::Client::MemberData* CreateSnapShot(::RPG::Client::MemberData* source)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET))(source);
		}

		static ::RPG::Client::TeamDataRefreshMask GetRefreshMask(::RPG::Client::MemberData* source, ::RPG::Client::MemberData* dest)
		{
			return ((::RPG::Client::TeamDataRefreshMask(*)(::RPG::Client::MemberData*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET))(source, dest);
		}

		::RPG::GameCore::FixPoint ToPermyriadPrecision(::RPG::GameCore::FixPoint inRatio)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET))(this, inRatio);
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

		::RPG::GameCore::FixPoint _TestPermyriadPrecision(::System::UInt32 iMyriad)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET))(this, iMyriad);
		}
	};
}
