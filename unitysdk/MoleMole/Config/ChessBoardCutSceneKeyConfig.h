#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDCUTSCENEKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2DAE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessBoardCutSceneKeyConfig_TypeDefinitionIndex = 39630;

	class ChessBoardCutSceneKeyConfig : public ::System::Object
	{
	public:
		::System::String* LargeSizeCameraShotKey; // 0x10
		::System::String* MediumSizeCameraShotKey; // 0x18
		::System::String* NomalSizeCameraShotKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCUTSCENEKEYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
