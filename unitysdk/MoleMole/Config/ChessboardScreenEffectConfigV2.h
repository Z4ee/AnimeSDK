#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ChessboardGlitchConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDSCREENEFFECTCONFIGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x186AAB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardScreenEffectConfigV2_TypeDefinitionIndex = 52537;

	class ChessboardScreenEffectConfigV2 : public ::System::Object
	{
	public:
		::System::String* StopAudioAction; // 0x10
		::System::String* AccelerationFilterKey; // 0x18
		::System::String* StartAudioAction; // 0x20
		::MoleMole::Config::ChessboardGlitchConfig* GlitchConfig; // 0x28
		::System::String* AccelerationClickFilterKey; // 0x30
		::System::Single VoiceSpeedMax; // 0x38
		::System::Single GlobalSpeedMax; // 0x3C
		::System::Single VideoSpeedMax; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDSCREENEFFECTCONFIGV2__CTOR_OFFSET))(this);
		}
	};
}
