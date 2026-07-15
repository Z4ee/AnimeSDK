#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2D4CFA76DB950A9A_METHOD_2_F760D2EA6769CA5F_OFFSET UNITYSDK_OFFSET(0x38CC740)

inline static constexpr unsigned int Struct_2_2D4CFA76DB950A9A_TypeDefinitionIndex = 54368;

struct alignas(8) Struct_2_2D4CFA76DB950A9A
{
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_0; // 0x10
	::System::Nullable_1<::RPG::GameCore::AvatarBaseType> Field_2_1; // 0x20
	::System::Nullable_1<::RPG::GameCore::AvatarBaseType> Field_2_2; // 0x28
	::System::Nullable_1<::RPG::GameCore::AttackDamageType> Field_2_3; // 0x30

	::System::Void Method_2_F760D2EA6769CA5F(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + STRUCT_2_2D4CFA76DB950A9A_METHOD_2_F760D2EA6769CA5F_OFFSET))(this, a1);
	}
};
