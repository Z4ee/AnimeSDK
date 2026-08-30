#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRecommendAvatarState.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCEF76D0)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCEF76B0)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xCEF76F0)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCEF7710)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCEF7730)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCEF76E0)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCEF76C0)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xCEF7700)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCEF7720)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_STATE_OFFSET UNITYSDK_OFFSET(0xCEF7740)
#define RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF7750)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleDisplayAvatar_TypeDefinitionIndex = 64010;

	class ExpeditionBattleDisplayAvatar : public ::System::Object
	{
	public:
		::System::String* _HeadIconPath_k__BackingField; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x20
		::RPG::Client::ExpeditionBattleRecommendAvatarState _State_k__BackingField; // 0x24
		::System::UInt32 _Level_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::Void set_HeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_HEADICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRecommendAvatarState get_State()
		{
			return ((::RPG::Client::ExpeditionBattleRecommendAvatarState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ExpeditionBattleRecommendAvatarState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleRecommendAvatarState))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEDISPLAYAVATAR_SET_STATE_OFFSET))(this, a1);
		}
	};
}
