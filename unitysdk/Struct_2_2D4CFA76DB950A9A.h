#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2D4CFA76DB950A9A_METHOD_2_F760D2EA6769CA5F_OFFSET UNITYSDK_OFFSET(0x2DF1FF0)

inline static constexpr unsigned int Struct_2_2D4CFA76DB950A9A_TypeDefinitionIndex = 57089;

struct alignas(8) Struct_2_2D4CFA76DB950A9A
{
	::System::Nullable_1<::RPG::GameCore::FixPoint> BIFBJDKMKDL; // 0x10
	::System::Nullable_1<::RPG::GameCore::AvatarBaseType> DHCIDINJEJM; // 0x20
	::System::Nullable_1<::RPG::GameCore::AvatarBaseType> HKNIHAILDNE; // 0x28
	::System::Nullable_1<::RPG::GameCore::AttackDamageType> PAIECOBACKB; // 0x30

	::System::Void Method_2_F760D2EA6769CA5F(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + STRUCT_2_2D4CFA76DB950A9A_METHOD_2_F760D2EA6769CA5F_OFFSET))(this, a1);
	}
};
