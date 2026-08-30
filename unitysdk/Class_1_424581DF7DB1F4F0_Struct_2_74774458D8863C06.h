#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

inline static constexpr unsigned int Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06_TypeDefinitionIndex = 55198;

struct alignas(8) Class_1_424581DF7DB1F4F0_Struct_2_74774458D8863C06
{
	::System::String* AABNPBGMOFN; // 0x10
	::RPG::GameCore::DynamicFloat* GBGDCCKEBBP; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Nullable_1<::RPG::GameCore::DynamicValueContextScope> KPGCMKJMDHP; // 0x28
};
