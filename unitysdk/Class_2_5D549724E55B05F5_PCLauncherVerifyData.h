#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Class_2_5D549724E55B05F5_PCLauncherVerifyData_TypeDefinitionIndex = 57326;

struct alignas(8) Class_2_5D549724E55B05F5_PCLauncherVerifyData
{
	::System::String* game_version; // 0x10
	::System::String* verify_result; // 0x18
	::System::String* verify_time; // 0x20
};
