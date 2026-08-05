#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDSWITCHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1485C070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardSwitchEffect_TypeDefinitionIndex = 61540;

	class ChessboardSwitchEffect : public ::System::Object
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* TextureSheetKey; // 0x18
		::MoleMole::ScreenSwitchType HollowScreenSwitchType; // 0x20
		::System::Int32 AudioID; // 0x24
		::System::Boolean IsTextureSheet; // 0x28
		::System::Boolean IsSkip; // 0x29
		::System::Boolean UseDefaultEffectPath; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDSWITCHEFFECT__CTOR_OFFSET))(this);
		}
	};
}
