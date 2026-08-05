#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EA1FEF8121ADE963;
class Class_3_09C6D749A1B6BB3E;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define STRUCT_2_971FE1FD7A4EA745_METHOD_2_B191DE5F8AFB9D67_OFFSET UNITYSDK_OFFSET(0x18C756C0)
#define STRUCT_2_971FE1FD7A4EA745_METHOD_2_BE1FF0FA4CDAA876_OFFSET UNITYSDK_OFFSET(0x18C75E10)
#define STRUCT_2_971FE1FD7A4EA745__CTOR_OFFSET UNITYSDK_OFFSET(0x888500)

inline static constexpr unsigned int Struct_2_971FE1FD7A4EA745_TypeDefinitionIndex = 89374;

struct alignas(8) Struct_2_971FE1FD7A4EA745
{
	::MoleMole::Config::ConfigSoundActionGeneral* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::UnityEngine::Vector3 Field_2_6; // 0x20
	::System::UInt32 Field_2_5; // 0x2C
	::System::UInt32 Field_2_4; // 0x30
	::System::UInt32 Field_2_11; // 0x34
	::System::UInt32 Field_2_10; // 0x38
	::System::UInt32 Field_2_9; // 0x3C
	::System::UInt32 Field_2_8; // 0x40
	::System::UInt32 Field_2_15; // 0x44
	::System::UInt32 Field_2_14; // 0x48
	::System::Boolean Field_2_13; // 0x4C
	::System::String* Field_2_12; // 0x50
	::System::String* Field_2_19; // 0x58
	::System::Boolean Field_2_18; // 0x60
	::System::Boolean Field_2_17; // 0x61
	::Class_3_09C6D749A1B6BB3E* Field_2_16; // 0x68
	::UnityEngine::GameObject* Field_2_23; // 0x70

	::System::Void _ctor(::MoleMole::Config::ConfigSoundActionGeneral* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::UInt32 a11, ::System::UInt32 a12, ::System::Boolean a13, ::System::String* a14, ::System::String* a15, ::System::Boolean a16, ::Class_3_09C6D749A1B6BB3E* a17, ::UnityEngine::GameObject* a18)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionGeneral*, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::Class_3_09C6D749A1B6BB3E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_971FE1FD7A4EA745__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	static ::System::Void Method_2_B191DE5F8AFB9D67(::Struct_2_971FE1FD7A4EA745& a1)
	{
		return ((::System::Void(*)(::Struct_2_971FE1FD7A4EA745&))((::PBYTE)hIl2Cpp + STRUCT_2_971FE1FD7A4EA745_METHOD_2_B191DE5F8AFB9D67_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_BE1FF0FA4CDAA876(::Class_1_EA1FEF8121ADE963* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Config::ConfigEntityAttackEffect* a4, ::Struct_2_971FE1FD7A4EA745& a5)
	{
		return ((::System::Boolean(*)(::Class_1_EA1FEF8121ADE963*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*, ::Struct_2_971FE1FD7A4EA745&))((::PBYTE)hIl2Cpp + STRUCT_2_971FE1FD7A4EA745_METHOD_2_BE1FF0FA4CDAA876_OFFSET))(a1, a2, a3, a4, a5);
	}
};
