#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHESSBOARDCOINSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F14F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardCoinSoundConfig_TypeDefinitionIndex = 88045;

	class ChessboardCoinSoundConfig : public ::System::Object
	{
	public:
		::System::String* soundTrigger; // 0x10
		::System::Int32 value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHESSBOARDCOINSOUNDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
