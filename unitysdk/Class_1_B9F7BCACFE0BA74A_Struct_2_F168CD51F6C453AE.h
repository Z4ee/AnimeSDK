#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B9F7BCACFE0BA74A_STRUCT_2_F168CD51F6C453AE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15AB440)

inline static constexpr unsigned int Class_1_B9F7BCACFE0BA74A_Struct_2_F168CD51F6C453AE_TypeDefinitionIndex = 49961;

struct alignas(8) Class_1_B9F7BCACFE0BA74A_Struct_2_F168CD51F6C453AE
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Int32 CompareTo(::Class_1_B9F7BCACFE0BA74A_Struct_2_F168CD51F6C453AE a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B9F7BCACFE0BA74A_Struct_2_F168CD51F6C453AE))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_STRUCT_2_F168CD51F6C453AE_COMPARETO_OFFSET))(this, a1);
	}
};
