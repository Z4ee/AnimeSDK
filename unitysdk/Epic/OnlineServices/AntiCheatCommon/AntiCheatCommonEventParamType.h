#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonEventParamType_TypeDefinitionIndex = 44127;

	enum class AntiCheatCommonEventParamType : ::System::Int32
	{
		Invalid = 0,
		ClientHandle = 1,
		String = 2,
		UInt32 = 3,
		Int32 = 4,
		UInt64 = 5,
		Int64 = 6,
		Vector3f = 7,
		Quat = 8,
	};
}
