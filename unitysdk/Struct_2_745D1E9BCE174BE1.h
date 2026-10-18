#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_745D1E9BCE174BE1_METHOD_2_34E015E8658F7193_OFFSET UNITYSDK_OFFSET(0x2E81550)

inline static constexpr unsigned int Struct_2_745D1E9BCE174BE1_TypeDefinitionIndex = 56920;

struct alignas(8) Struct_2_745D1E9BCE174BE1
{
	::System::Nullable_1<::RPG::GameCore::FixPoint> BIFBJDKMKDL; // 0x10
	::System::Nullable_1<::RPG::GameCore::AttackDamageType> PAIECOBACKB; // 0x20

	::System::Void Method_2_34E015E8658F7193(::Struct_2_745D1E9BCE174BE1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_745D1E9BCE174BE1))((::PBYTE)hIl2Cpp + STRUCT_2_745D1E9BCE174BE1_METHOD_2_34E015E8658F7193_OFFSET))(this, a1);
	}
};
