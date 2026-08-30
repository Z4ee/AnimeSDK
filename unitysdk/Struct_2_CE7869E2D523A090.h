#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

namespace RPG::Client { class BAPartVariantRef; }

#define STRUCT_2_CE7869E2D523A090_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x3AE9DE0)

inline static constexpr unsigned int Struct_2_CE7869E2D523A090_TypeDefinitionIndex = 69485;

struct alignas(8) Struct_2_CE7869E2D523A090
{
	::UnityEngine::Rendering::BAVariantKey FJFOPHFLGKG; // 0x10
	::System::Int32 NOIEMNLMACN; // 0x20
	::RPG::Client::BAPartVariantRef* AJHEFIIPFFK; // 0x28
	::System::Boolean KFJDMBPBOBP; // 0x30

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CE7869E2D523A090_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
