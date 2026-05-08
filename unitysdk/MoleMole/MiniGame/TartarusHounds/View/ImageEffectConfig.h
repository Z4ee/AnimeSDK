#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_IMAGEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31830)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ImageEffectConfig_TypeDefinitionIndex = 39403;

	class ImageEffectConfig : public ::System::Object
	{
	public:
		::System::String* spawnMoveCurveKey; // 0x10
		::System::String* moveCurveKey; // 0x18
		::UnityEngine::Vector2 spawnTargetPos; // 0x20
		::UnityEngine::Vector2 spawnTargetPosRandomOffset; // 0x28
		::System::Single moveTime; // 0x30
		::UnityEngine::Vector2 effectImgSizeRandomOffset; // 0x34
		::UnityEngine::Vector2 effectImgSize; // 0x3C
		::System::Single spawnTime; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_IMAGEEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
