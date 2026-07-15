#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CrosshairLayoutType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace System { class String; }

#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x16CB1010)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_8B9DCFDAAAB0314E_OFFSET UNITYSDK_OFFSET(0x3947770)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x39476B0)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x39476A0)

inline static constexpr unsigned int Struct_2_E6EED6AD1AB6FE17_TypeDefinitionIndex = 54363;

struct alignas(8) Struct_2_E6EED6AD1AB6FE17
{
	::RPG::GameCore::ResilienceEnum Field_2_0; // 0x10
	::RPG::MVector3 Field_2_1; // 0x14
	::RPG::GameCore::LocationConfig* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::RPG::GameCore::HitBoxConfig* Field_2_4; // 0x30
	::Il2CppArray<::System::String*>* Field_2_5; // 0x38
	::System::String* Field_2_6; // 0x40
	::RPG::GameCore::CharacterSomatoType Field_2_7; // 0x48
	::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* Field_2_8; // 0x50
	::System::String* Field_2_9; // 0x58
	::RPG::MVector3 Field_2_10; // 0x60
	::System::String* Field_2_11; // 0x70
	::System::Single Field_2_12; // 0x78
	::System::Int32 Field_2_13; // 0x7C
	::RPG::GameCore::CrosshairType Field_2_14; // 0x80
	::RPG::GameCore::CrosshairLayoutType Field_2_15; // 0x84
	::RPG::GameCore::CrosshairType Field_2_16; // 0x88
	::RPG::GameCore::SpecialSkillButtonGroupType Field_2_17; // 0x8C
	::RPG::GameCore::CharacterHUDType Field_2_18; // 0x90

	static ::Struct_2_E6EED6AD1AB6FE17 Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_E6EED6AD1AB6FE17(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_895E6BF2EDCD95D0_OFFSET))();
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8B9DCFDAAAB0314E(::Struct_2_E6EED6AD1AB6FE17 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E6EED6AD1AB6FE17))((::PBYTE)hIl2Cpp + STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_8B9DCFDAAAB0314E_OFFSET))(this, a1);
	}
};
