#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_68;
class Class_1_FA4F4A67B1C04320_518;
namespace RPG::Client { class MatchThreeSkillData; }
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBIRDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B22100)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_BIRDNAME_OFFSET UNITYSDK_OFFSET(0x9B22400)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DEFAULTEMO_OFFSET UNITYSDK_OFFSET(0x9B22640)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DRAWEMO_OFFSET UNITYSDK_OFFSET(0x9B22720)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_FACEMAT_OFFSET UNITYSDK_OFFSET(0x9B225D0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x9B22800)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B22480)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B22370)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9B224F0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9B22390)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B22AC0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_LOSEEMO_OFFSET UNITYSDK_OFFSET(0x9B22790)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x9B22890)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9B22560)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9B22250)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x9B228B0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_UNLOCKORDER_OFFSET UNITYSDK_OFFSET(0x9B228D0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9B22870)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_GET_WINEMO_OFFSET UNITYSDK_OFFSET(0x9B226B0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B22380)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x9B228A0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_SKILL_OFFSET UNITYSDK_OFFSET(0x9B228C0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9B22880)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_1_OFFSET UNITYSDK_OFFSET(0x9B22310)
#define RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_OFFSET UNITYSDK_OFFSET(0x9B222B0)
#define RPG_CLIENT_MATCHTHREEBIRDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B22240)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBirdData_TypeDefinitionIndex = 53467;

	class MatchThreeBirdData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeSkillData* _Skill_k__BackingField; // 0x10
		::System::UInt32 _UseCount_k__BackingField; // 0x18
		::System::UInt32 _MaxPower_k__BackingField; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeBirdData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MatchThreeBirdData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_CREATE_OFFSET))(id);
		}

		::System::Void SyncBirdInfo(::Class_1_FA4F4A67B1C04320_518* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_518*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_OFFSET))(this, info);
		}

		::System::Void SyncBirdInfo_1(::Class_1_120319518E6F6581_68* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_68*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SYNCBIRDINFO_1_OFFSET))(this, info);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::Client::TextID get_BirdName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_BIRDNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_FaceMat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_FACEMAT_OFFSET))(this);
		}

		::System::UInt32 get_DefaultEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DEFAULTEMO_OFFSET))(this);
		}

		::System::UInt32 get_WinEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_WINEMO_OFFSET))(this);
		}

		::System::UInt32 get_DrawEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_DRAWEMO_OFFSET))(this);
		}

		::System::UInt32 get_LoseEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_LOSEEMO_OFFSET))(this);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_GUIDEID_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_USECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_MAXPOWER_OFFSET))(this);
		}

		::System::Void set_MaxPower(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_MAXPOWER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeSkillData* get_Skill()
		{
			return ((::RPG::Client::MatchThreeSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::MatchThreeSkillData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_SET_SKILL_OFFSET))(this, value);
		}

		::System::Int32 get_UnlockOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_UNLOCKORDER_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeBirdRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeBirdRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBIRDDATA_GET_ROW_OFFSET))(this);
		}
	};
}
