#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PlatformWin_RegSAM_TypeDefinitionIndex = 38282;

	enum class HEU_PlatformWin_RegSAM : ::System::Int32
	{
		QueryValue = 1,
		SetValue = 2,
		CreateSubKey = 4,
		EnumerateSubKeys = 8,
		Notify = 16,
		CreateLink = 32,
		WOW64_32Key = 512,
		WOW64_64Key = 256,
		WOW64_Res = 768,
		Read = 131097,
		Write = 131078,
		Execute = 131097,
		AllAccess = 983103,
	};
}
