#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMaterialEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class CharacterEffect; }

#define STRUCT_2_2AE38597B7CA5E0B_METHOD_2_1F7A4C686676397F_OFFSET UNITYSDK_OFFSET(0x83E70)
#define STRUCT_2_2AE38597B7CA5E0B_METHOD_2_8746198DF3FAFC85_OFFSET UNITYSDK_OFFSET(0x83ED0)
#define STRUCT_2_2AE38597B7CA5E0B_METHOD_2_E2D99963F861EA97_OFFSET UNITYSDK_OFFSET(0x83E50)
#define STRUCT_2_2AE38597B7CA5E0B_METHOD_2_EE0B7926FA855928_OFFSET UNITYSDK_OFFSET(0x83E60)

inline static constexpr unsigned int Struct_2_2AE38597B7CA5E0B_TypeDefinitionIndex = 46053;

struct alignas(4) Struct_2_2AE38597B7CA5E0B
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::RPG::GameCore::CharacterMaterialEffectType Field_2_2; // 0x18
	::RPG::GameCore::CharacterMaterialEffectType Field_2_3; // 0x1C

	::System::Void Method_2_E2D99963F861EA97(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2AE38597B7CA5E0B_METHOD_2_E2D99963F861EA97_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EE0B7926FA855928(::RPG::Client::CharacterEffect* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2AE38597B7CA5E0B_METHOD_2_EE0B7926FA855928_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F7A4C686676397F(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2AE38597B7CA5E0B_METHOD_2_1F7A4C686676397F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8746198DF3FAFC85(::RPG::Client::CharacterEffect* a1, ::RPG::GameCore::CharacterMaterialEffectType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*, ::RPG::GameCore::CharacterMaterialEffectType, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2AE38597B7CA5E0B_METHOD_2_8746198DF3FAFC85_OFFSET))(this, a1, a2, a3);
	}
};
