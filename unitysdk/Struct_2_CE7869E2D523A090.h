#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"

namespace RPG::Client { class BAPartVariantRef; }

#define STRUCT_2_CE7869E2D523A090_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x161DBB0)

inline static constexpr unsigned int Struct_2_CE7869E2D523A090_TypeDefinitionIndex = 64066;

struct alignas(8) Struct_2_CE7869E2D523A090
{
	::UnityEngine::Rendering::BAVariantKey Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x20
	::RPG::Client::BAPartVariantRef* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CE7869E2D523A090_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
