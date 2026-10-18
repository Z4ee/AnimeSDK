#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_CharacterEncoding_TypeDefinitionIndex = 40035;

	enum class CriAtomExAcf_CharacterEncoding : ::System::UInt32
	{
		utf8 = 0x0,
		sjis = 0x1,
	};
}
