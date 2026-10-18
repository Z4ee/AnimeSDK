#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class FightFestAvatarInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCFF5FB0)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0xCFF6000)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FIGUREOFFSET_OFFSET UNITYSDK_OFFSET(0xCFF61A0)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_FULLFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCFF6080)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_HALFFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCFF60E0)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCFF6140)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO_GET_VSIMGPATH_OFFSET UNITYSDK_OFFSET(0xCFF6220)
#define RPG_CLIENT_FIGHTFESTPLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE5360)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPlayerInfo_TypeDefinitionIndex = 64183;

	class FightFestPlayerInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestAvatarInfoRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPLAYERINFO__CTOR_OFFSET))(this, a1);
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
