#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueReadType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FE2F3633A1F5C7E0_METHOD_2_8301D05FF30D67F1_OFFSET UNITYSDK_OFFSET(0x191EB190)

inline static constexpr unsigned int Struct_2_FE2F3633A1F5C7E0_TypeDefinitionIndex = 10439;

struct alignas(8) Struct_2_FE2F3633A1F5C7E0
{
	::RPG::GameCore::DynamicValueReadType Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	static ::Struct_2_FE2F3633A1F5C7E0 Method_2_8301D05FF30D67F1(::System::String* a1)
	{
		return ((::Struct_2_FE2F3633A1F5C7E0(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_FE2F3633A1F5C7E0_METHOD_2_8301D05FF30D67F1_OFFSET))(a1);
	}
};
