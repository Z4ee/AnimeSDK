#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class FightFestAvatarInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA381430)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xA381480)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FIGUREOFFSET_OFFSET UNITYSDK_OFFSET(0xA381620)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FULLFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA381500)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_HALFFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA381560)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3815C0)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_VSIMGPATH_OFFSET UNITYSDK_OFFSET(0xA3816C0)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3724C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPlayerInfo_TypeDefinitionIndex = 59049;

	class FightFestPlayerInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestAvatarInfoRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO__CTOR_OFFSET))(this, avatarID);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARNAME_OFFSET))(this);
		}

		::System::String* get_FullFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FULLFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_HalfFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_HALFFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_ICONPATH_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_FigureOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FIGUREOFFSET_OFFSET))(this);
		}

		::System::String* get_VSImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_VSIMGPATH_OFFSET))(this);
		}
	};
}
