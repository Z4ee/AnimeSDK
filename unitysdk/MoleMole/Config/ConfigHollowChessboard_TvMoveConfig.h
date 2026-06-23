#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBaseList; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F35BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvMoveConfig_TypeDefinitionIndex = 64403;

	class ConfigHollowChessboard_TvMoveConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* frontChessEffectList; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* backChessEffectList; // 0x18
		::UnityEngine::AnimationCurve* selfMoveCurve; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* effectList; // 0x28
		::System::Single eventModificationDelay; // 0x30
		::System::Single selfMoveDuration; // 0x34
		::System::Single selfMoveDelay; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
