#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ParkourRailBallSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURSKILL_CREATE_OFFSET UNITYSDK_OFFSET(0x9F0EE40)
#define RPG_CLIENT_PARKOURSKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9F0EC30)
#define RPG_CLIENT_PARKOURSKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9F0ECE0)
#define RPG_CLIENT_PARKOURSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F0EEF0)
#define RPG_CLIENT_PARKOURSKILL_GET_MINIICONBGPATH_OFFSET UNITYSDK_OFFSET(0x9F0EE20)
#define RPG_CLIENT_PARKOURSKILL_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9F0ED80)
#define RPG_CLIENT_PARKOURSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F0EB70)
#define RPG_CLIENT_PARKOURSKILL_GET_TUTORIALID_OFFSET UNITYSDK_OFFSET(0x9F11B20)
#define RPG_CLIENT_PARKOURSKILL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x9F11B00)
#define RPG_CLIENT_PARKOURSKILL_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x9F11AF0)
#define RPG_CLIENT_PARKOURSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x9F11B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSkill_TypeDefinitionIndex = 50218;

	class ParkourSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::ParkourRailBallSkillConfigRow* _Meta; // 0x10

		::System::Void _ctor(::RPG::GameCore::ParkourRailBallSkillConfigRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourRailBallSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_ID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_MINIICONBGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_VideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_VIDEOPATH_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_VIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_TutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_GET_TUTORIALID_OFFSET))(this);
		}

		static ::RPG::Client::ParkourSkill* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ParkourSkill*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSKILL_CREATE_OFFSET))(id);
		}
	};
}
