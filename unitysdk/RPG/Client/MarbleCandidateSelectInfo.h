#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C24EC90)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GETSKILLDESCCONTENT_OFFSET UNITYSDK_OFFSET(0x1C24EDD0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C24F370)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLEID_OFFSET UNITYSDK_OFFSET(0x1C24F330)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLELEVEL_OFFSET UNITYSDK_OFFSET(0x1C24F350)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALICONPATH_OFFSET UNITYSDK_OFFSET(0x1C24F090)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLESEALNAME_OFFSET UNITYSDK_OFFSET(0x1C24F1B0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1C24F310)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C24F0E0)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C24F150)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_SKILLTITLE_OFFSET UNITYSDK_OFFSET(0x1C24F250)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C24F380)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLEID_OFFSET UNITYSDK_OFFSET(0x1C24F340)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLELEVEL_OFFSET UNITYSDK_OFFSET(0x1C24F360)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1C24F320)
#define RPG_CLIENT_MARBLECANDIDATESELECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24EC80)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleCandidateSelectInfo_TypeDefinitionIndex = 65867;

	class MarbleCandidateSelectInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleSealRow* _MarbleSealRow; // 0x10
		::RPG::GameCore::MarbleSealLevelConfigRow* _LevelRow; // 0x18
		::RPG::GameCore::MarbleSealSkillConfigRow* _NextLevelSkillRow; // 0x20
		::System::UInt32 _EntityID_k__BackingField; // 0x28
		::System::UInt32 _MarbleId_k__BackingField; // 0x2C
		::System::UInt32 _PlayerId_k__BackingField; // 0x30
		::System::UInt32 _MarbleLevel_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleCandidateSelectInfo* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MarbleCandidateSelectInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_CREATE_OFFSET))(a1, a2, a3, a4);
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

		::System::Void set_PlayerId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_PLAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MarbleId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLEID_OFFSET))(this);
		}

		::System::Void set_MarbleId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MarbleLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_MARBLELEVEL_OFFSET))(this);
		}

		::System::Void set_MarbleLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_MARBLELEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLECANDIDATESELECTINFO_SET_ENTITYID_OFFSET))(this, a1);
		}
	};
}
