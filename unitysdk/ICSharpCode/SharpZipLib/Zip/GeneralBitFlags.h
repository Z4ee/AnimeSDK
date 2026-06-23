#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int GeneralBitFlags_TypeDefinitionIndex = 6845;

	enum class GeneralBitFlags : ::System::Int32
	{
		Encrypted = 1,
		Method = 6,
		Descriptor = 8,
		ReservedPKware4 = 16,
		Patched = 32,
		StrongEncryption = 64,
		Unused7 = 128,
		Unused8 = 256,
		Unused9 = 512,
		Unused10 = 1024,
		UnicodeText = 2048,
		EnhancedCompress = 4096,
		HeaderMasked = 8192,
		ReservedPkware14 = 16384,
		ReservedPkware15 = 32768,
	};
}
