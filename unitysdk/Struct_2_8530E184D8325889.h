#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_018E10D1FF758986.h"
#include "unitysdk/Enum_3_9B96ACE49506217C.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EA1FEF8121ADE963;
class Class_2_F6579EDC26D1BFF1;
class Class_3_E2819F45333A39BF;
namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_8530E184D8325889_METHOD_2_D15FB2A8EB711313_OFFSET UNITYSDK_OFFSET(0x15F0C140)
#define STRUCT_2_8530E184D8325889__CTOR_OFFSET UNITYSDK_OFFSET(0x836F90)

inline static constexpr unsigned int Struct_2_8530E184D8325889_TypeDefinitionIndex = 47430;

struct alignas(8) Struct_2_8530E184D8325889
{
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x14
	::MoleMole::EntityHandle Field_2_7; // 0x18
	::MoleMole::Config::EntityType Field_2_6; // 0x28
	::UnityEngine::Vector3 Field_2_5; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x38
	::System::Single Field_2_11; // 0x44
	::Enum_3_9B96ACE49506217C Field_2_10; // 0x48
	::System::Boolean Field_2_9; // 0x4C
	::MoleMole::Config::DamageElementType Field_2_8; // 0x50
	::System::Boolean Field_2_15; // 0x54
	::Enum_3_018E10D1FF758986 Field_2_14; // 0x58
	::System::Single Field_2_13; // 0x5C
	::MoleMole::Config::SpecialDamageTextType Field_2_12; // 0x60
	::System::Boolean Field_2_19; // 0x64
	::System::Boolean Field_2_18; // 0x65
	::System::Boolean Field_2_17; // 0x66
	::System::Boolean Field_2_16; // 0x67
	::System::Boolean Field_2_23; // 0x68
	::System::Boolean Field_2_22; // 0x69
	::System::Boolean Field_2_21; // 0x6A
	::System::Boolean Field_2_20; // 0x6B
	::System::Single Field_2_27; // 0x6C
	::System::Int32 Field_2_26; // 0x70
	::System::Boolean Field_2_25; // 0x74

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::MoleMole::EntityHandle a3, ::MoleMole::Config::EntityType a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::Enum_3_9B96ACE49506217C a8, ::System::Boolean a9, ::MoleMole::Config::DamageElementType a10, ::System::Boolean a11, ::Enum_3_018E10D1FF758986 a12, ::System::Single a13, ::MoleMole::Config::SpecialDamageTextType a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Boolean a18, ::System::Boolean a19, ::System::Boolean a20, ::System::Boolean a21, ::System::Boolean a22, ::System::Single a23, ::System::Int32 a24, ::System::Boolean a25)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::EntityHandle, ::MoleMole::Config::EntityType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Enum_3_9B96ACE49506217C, ::System::Boolean, ::MoleMole::Config::DamageElementType, ::System::Boolean, ::Enum_3_018E10D1FF758986, ::System::Single, ::MoleMole::Config::SpecialDamageTextType, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_8530E184D8325889__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
	}

	static ::System::Boolean Method_2_D15FB2A8EB711313(::Class_2_F6579EDC26D1BFF1* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_EA1FEF8121ADE963* a4, ::Class_3_E2819F45333A39BF* a5, ::Struct_2_8530E184D8325889& a6)
	{
		return ((::System::Boolean(*)(::Class_2_F6579EDC26D1BFF1*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::Class_3_E2819F45333A39BF*, ::Struct_2_8530E184D8325889&))((::PBYTE)hIl2Cpp + STRUCT_2_8530E184D8325889_METHOD_2_D15FB2A8EB711313_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
