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

#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x18B862B0)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_8B9DCFDAAAB0314E_OFFSET UNITYSDK_OFFSET(0x3AE98B0)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AE97F0)
#define STRUCT_2_E6EED6AD1AB6FE17_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x3AE97E0)

inline static constexpr unsigned int Struct_2_E6EED6AD1AB6FE17_TypeDefinitionIndex = 57084;

struct alignas(8) Struct_2_E6EED6AD1AB6FE17
{
	::RPG::GameCore::ResilienceEnum MFMEANEANHD; // 0x10
	::RPG::MVector3 IGGMLDDDBNH; // 0x14
	::RPG::GameCore::LocationConfig* LHMHCFLAHFE; // 0x20
	::System::Single FODJBMIDEIN; // 0x28
	::RPG::GameCore::HitBoxConfig* BKNFNKPDNPP; // 0x30
	::Il2CppArray<::System::String*>* JNAGOECIKPA; // 0x38
	::System::String* NCDLJACPCHF; // 0x40
	::RPG::GameCore::CharacterSomatoType JPHDDEFGPFF; // 0x48
	::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* CJGPKMIFMDK; // 0x50
	::System::String* JBGDOLEAOHK; // 0x58
	::RPG::MVector3 HBPAFDLOKHP; // 0x60
	::System::String* IJLGCECKGFP; // 0x70
	::System::Single EKCPEOEBIMN; // 0x78
	::System::Int32 OOEJIDFLLIL; // 0x7C
	::RPG::GameCore::CrosshairType CPEDPDIMAOL; // 0x80
	::RPG::GameCore::CrosshairLayoutType DHEAFOAIBLN; // 0x84
	::RPG::GameCore::CrosshairType KLPPIOJNDHL; // 0x88
	::RPG::GameCore::SpecialSkillButtonGroupType CCMLOLKKDLJ; // 0x8C
	::RPG::GameCore::CharacterHUDType HLKALNJLEIE; // 0x90

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
