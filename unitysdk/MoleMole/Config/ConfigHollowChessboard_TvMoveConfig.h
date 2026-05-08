#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBaseList; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1102B7C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvMoveConfig_TypeDefinitionIndex = 43476;

	class ConfigHollowChessboard_TvMoveConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* selfMoveCurve; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* backChessEffectList; // 0x18
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* frontChessEffectList; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBaseList* effectList; // 0x28
		::System::Single selfMoveDuration; // 0x30
		::System::Single selfMoveDelay; // 0x34
		::System::Single eventModificationDelay; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_TVMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
