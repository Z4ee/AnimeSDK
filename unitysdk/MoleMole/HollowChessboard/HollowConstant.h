#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowConstant_RenderPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCONSTANT_GETRENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x16E5AA90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_TypeDefinitionIndex = 81941;

	class HollowConstant : public ::System::Object
	{
	public:
		// static const ::System::String* TV_NORMAL_THEME_KEY; // 0x0
		// static const ::System::String* TV_BIG_WORLD_THEME_KEY; // 0x0
		// static const ::System::String* TV_HOLLOW_OUT_THEME_KEY; // 0x0
		// static const ::System::String* TV_HOLLOW_MULTI_OUT_THEME_KEY; // 0x0
		// static const ::System::Int32 GRID_DEFAULT_RENDER_PRIORITY = 0x64; // 0x0
		// static const ::System::Int32 NPC_EVENT_PRIORITY = 0xC8; // 0x0
		// static const ::System::Int32 PLAYER_RENDER_PRIORITY = 0x12C; // 0x0
		// static const ::System::Int32 GRID_EVENT_PRIORITY = 0x190; // 0x0
		// static const ::System::Int32 SHOW_NON_INTERACT_PRIORITY = 0x3E8; // 0x0
		// static const ::System::Int32 INTERACT_MOVIE_PRIORITY = 0x7D0; // 0x0
		// static const ::System::Int32 PLAYER_INTERACTBEHAVIOR = 0xBB8; // 0x0
		// static const ::System::Int32 OTHER_INTERACTBEHAVIOR = 0xBB8; // 0x0
		// static const ::System::Int32 INTERACT_SECONDARY_MOVIE_PRIORITY = 0x7D1; // 0x0
		// static const ::System::String* BEHAVIOR_KEY_TELEPORT_PREV_POSITION; // 0x0
		// static const ::System::String* BEHAVIOR_KEY_TELEPORT_NEW_POSITION; // 0x0
		// static const ::System::Int32 GRID_THEME_RENDER_PRIORITY = 0x65; // 0x0
		// static const ::System::String* HOLLOW_LIGHT; // 0x0
		// static const ::System::String* BEHAVIOR_KEY_TARGET_CAMERA_BOUND; // 0x0
		// static const ::System::String* NPC_DROP_PREV_CELL; // 0x0
		// static const ::System::String* NPC_DROP_CUR_CELL; // 0x0
		// static const ::System::String* NPC_DROP_TARGET_POSITION; // 0x0

		static ::System::Int32 GetRenderPriority(::MoleMole::HollowChessboard::HollowConstant_RenderPriority renderPriority)
		{
			return ((::System::Int32(*)(::MoleMole::HollowChessboard::HollowConstant_RenderPriority))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCONSTANT_GETRENDERPRIORITY_OFFSET))(renderPriority);
		}
	};
}
