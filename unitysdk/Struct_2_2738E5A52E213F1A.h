#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace System { class String; }

#define STRUCT_2_2738E5A52E213F1A_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x14244A0)
#define STRUCT_2_2738E5A52E213F1A_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x10583F00)
#define STRUCT_2_2738E5A52E213F1A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1424400)
#define STRUCT_2_2738E5A52E213F1A_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x14243F0)

inline static constexpr unsigned int Struct_2_2738E5A52E213F1A_TypeDefinitionIndex = 45794;

struct alignas(8) Struct_2_2738E5A52E213F1A
{
	::RPG::GameCore::ResilienceEnum Field_2_0; // 0x10
	::RPG::MVector3 Field_2_1; // 0x14
	::RPG::GameCore::LocationConfig* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::RPG::GameCore::HitBoxConfig* Field_2_4; // 0x30
	::Il2CppArray<::System::String*>* Field_2_5; // 0x38
	::RPG::GameCore::CharacterSomatoType Field_2_6; // 0x40
	::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* Field_2_7; // 0x48
	::System::String* Field_2_8; // 0x50
	::RPG::MVector3 Field_2_9; // 0x58
	::System::Single Field_2_10; // 0x64
	::System::Int32 Field_2_11; // 0x68

	static ::Struct_2_2738E5A52E213F1A Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_2738E5A52E213F1A(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2738E5A52E213F1A_METHOD_2_895E6BF2EDCD95D0_OFFSET))();
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2738E5A52E213F1A_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2738E5A52E213F1A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_2738E5A52E213F1A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2738E5A52E213F1A))((::PBYTE)hIl2Cpp + STRUCT_2_2738E5A52E213F1A_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}
};
