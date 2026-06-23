#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_ActionCode_TypeDefinitionIndex = 2267;

	enum class MiniParser_ActionCode : ::System::Byte
	{
		START_ELEM = 0x0,
		END_ELEM = 0x1,
		END_NAME = 0x2,
		SET_ATTR_NAME = 0x3,
		SET_ATTR_VAL = 0x4,
		SEND_CHARS = 0x5,
		START_CDATA = 0x6,
		END_CDATA = 0x7,
		ERROR = 0x8,
		STATE_CHANGE = 0x9,
		FLUSH_CHARS_STATE_CHANGE = 0xA,
		ACC_CHARS_STATE_CHANGE = 0xB,
		ACC_CDATA = 0xC,
		PROC_CHAR_REF = 0xD,
		UNKNOWN = 0xF,
	};
}
