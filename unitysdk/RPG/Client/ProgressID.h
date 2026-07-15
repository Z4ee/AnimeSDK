#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ProgressID_TypeDefinitionIndex = 56895;

	enum class ProgressID : ::System::Int32
	{
		None = 0,
		ApplyPredownload = 1,
		ClearForLocalVerify = 2,
		Version = 3,
		Manifest = 4,
		Download = 5,
		Verify = 6,
		Clear = 7,
		HPatchDownload = 8,
		HPatchUnpack = 9,
		HPatchApply = 10,
		LocalVerify = 11,
		Version2 = 12,
		Clear4LocalVerify = 13,
	};
}
