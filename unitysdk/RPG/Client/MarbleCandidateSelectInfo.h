#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9B19650)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GETSKILLDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x9B19790)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x9B19D10)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLEID_OFFSET UNITYSDK_OFFSET(0x9B19CD0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLELEVEL_OFFSET UNITYSDK_OFFSET(0x9B19CF0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALICONPATH_OFFSET UNITYSDK_OFFSET(0x9B19A90)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALNAME_OFFSET UNITYSDK_OFFSET(0x9B19B70)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x9B19CB0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0x9B19AB0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x9B19B10)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLTITLE_OFFSET UNITYSDK_OFFSET(0x9B19C00)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x9B19D20)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLEID_OFFSET UNITYSDK_OFFSET(0x9B19CE0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLELEVEL_OFFSET UNITYSDK_OFFSET(0x9B19D00)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x9B19CC0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B19640)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleCandidateSelectInfo_TypeDefinitionIndex = 53442;

	class MarbleCandidateSelectInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleSealSkillConfigRow* _NextLevelSkillRow; // 0x10
		::RPG::GameCore::MarbleSealRow* _MarbleSealRow; // 0x18
		::RPG::GameCore::MarbleSealLevelConfigRow* _LevelRow; // 0x20
		::System::UInt32 _MarbleLevel_k__BackingField; // 0x28
		::System::UInt32 _PlayerId_k__BackingField; // 0x2C
		::System::UInt32 _EntityID_k__BackingField; // 0x30
		::System::UInt32 _MarbleId_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleCandidateSelectInfo* Create(::System::UInt32 playerId, ::System::UInt32 marbleID, ::System::UInt32 level, ::System::UInt32 entityID)
		{
			return ((::RPG::Client::MarbleCandidateSelectInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_CREATE_OFFSET))(playerId, marbleID, level, entityID);
		}

		::System::String* GetSkillDescContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GETSKILLDESCCONTENT_OFFSET))(this);
		}

		::System::String* get_MarbleSealIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALICONPATH_OFFSET))(this);
		}

		::System::String* get_SkillIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_SkillLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLLEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_MarbleSealName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLTITLE_OFFSET))(this);
		}

		::System::UInt32 get_PlayerId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_PLAYERID_OFFSET))(this);
		}

		::System::Void set_PlayerId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_PLAYERID_OFFSET))(this, value);
		}

		::System::UInt32 get_MarbleId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLEID_OFFSET))(this);
		}

		::System::Void set_MarbleId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLEID_OFFSET))(this, value);
		}

		::System::UInt32 get_MarbleLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLELEVEL_OFFSET))(this);
		}

		::System::Void set_MarbleLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLELEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_ENTITYID_OFFSET))(this, value);
		}
	};
}
