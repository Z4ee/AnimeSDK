#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5E9C16BFAA602EE3;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define STRUCT_2_3A335394524C9E44_METHOD_2_27653FB6B6B1E605_OFFSET UNITYSDK_OFFSET(0x159A0820)
#define STRUCT_2_3A335394524C9E44_METHOD_2_286318E3803E84AB_1_OFFSET UNITYSDK_OFFSET(0x3A41960)
#define STRUCT_2_3A335394524C9E44_METHOD_2_286318E3803E84AB_OFFSET UNITYSDK_OFFSET(0x3A41930)
#define STRUCT_2_3A335394524C9E44_METHOD_2_636FF97CF37B078B_OFFSET UNITYSDK_OFFSET(0x3A41920)
#define STRUCT_2_3A335394524C9E44_METHOD_2_925B6EF9634A264B_OFFSET UNITYSDK_OFFSET(0x3A41910)
#define STRUCT_2_3A335394524C9E44_METHOD_2_F08BDA898C1AE19E_OFFSET UNITYSDK_OFFSET(0x3A41900)

inline static constexpr unsigned int Struct_2_3A335394524C9E44_TypeDefinitionIndex = 54638;

struct alignas(8) Struct_2_3A335394524C9E44
{
	::RPG::GameCore::AttackType HIFKEKCELFB; // 0x10
	::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x14
	::System::Single MDKBODIBCDC; // 0x18
	::System::Single ELIFOHAHNHA; // 0x1C
	::System::Single GNJLNCCPFOG; // 0x20
	::RPG::MVector3 ACGINICEHML; // 0x24
	::RPG::MVector3 PMPIDAPFIHE; // 0x30
	::System::String* IFNAGLOMHBK; // 0x40
	::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x48
	::System::Single IEHPFADHJFD; // 0x4C
	::System::Single NEMDKBKDFDN; // 0x50
	::System::Boolean JECHCGIBKCH; // 0x54
	::RPG::Client::TextID ENNKPIBOJLE; // 0x58
	::System::Boolean GCMDDOMIPPH; // 0x68
	::System::Boolean CPFEDPAGDFF; // 0x69
	::System::String* HFLDHJHJNCF; // 0x70
	::RPG::MVector3 MCKNKIMMPCC; // 0x78
	::System::Nullable_1<::RPG::GameCore::FixPoint> PGANAAKKMOA; // 0x88
	::System::Nullable_1<::System::UInt32> LIHDDCJDALN; // 0x98
	::System::Single HFBFNLKGIDN; // 0xA0
	::System::String* MAOMFGBJACJ; // 0xA8
	::System::Nullable_1<::RPG::GameCore::ElementDamageType> DOGLPHFNGPK; // 0xB0
	::System::String* OCMJCIFFBHF; // 0xB8
	::System::Boolean PBOJPLGNLKD; // 0xC0
	::System::Boolean JAHAMKOPFHG; // 0xC1
	::System::Boolean EGGMAJKNIGC; // 0xC2

	::System::Void Method_2_F08BDA898C1AE19E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_F08BDA898C1AE19E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_925B6EF9634A264B(::Class_1_5E9C16BFAA602EE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E9C16BFAA602EE3*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_925B6EF9634A264B_OFFSET))(this, a1);
	}

	::System::Void Method_2_636FF97CF37B078B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_636FF97CF37B078B_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Method_2_286318E3803E84AB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_286318E3803E84AB_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::MVector3 Method_2_27653FB6B6B1E605(::RPG::GameCore::DamageDisplayData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_27653FB6B6B1E605_OFFSET))(a1, a2);
	}

	::RPG::MVector3 Method_2_286318E3803E84AB_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + STRUCT_2_3A335394524C9E44_METHOD_2_286318E3803E84AB_1_OFFSET))(this, a1, a2, a3);
	}
};
