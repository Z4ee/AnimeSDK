#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_CharKind_TypeDefinitionIndex = 2266;

	enum class MiniParser_CharKind : ::System::Byte
	{
		LEFT_BR = 0x0,
		RIGHT_BR = 0x1,
		SLASH = 0x2,
		PI_MARK = 0x3,
		EQ = 0x4,
		AMP = 0x5,
		SQUOTE = 0x6,
		DQUOTE = 0x7,
		BANG = 0x8,
		LEFT_SQBR = 0x9,
		SPACE = 0xA,
		RIGHT_SQBR = 0xB,
		TAB = 0xC,
		CR = 0xD,
		EOL = 0xE,
		CHARS = 0xF,
		UNKNOWN = 0x1F,
	};
}
