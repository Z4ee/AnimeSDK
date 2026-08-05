#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace System { class String; }

#define CLASS_3_A1A8840B8D273722_CLASS_1_0E9AE39C3B1058BF_METHOD_1_EF9F1B49F5281F39_OFFSET UNITYSDK_OFFSET(0xF7A5D10)
#define CLASS_3_A1A8840B8D273722_CLASS_1_0E9AE39C3B1058BF__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A5D00)

inline static constexpr unsigned int Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF_TypeDefinitionIndex = 48964;

class Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_19; // 0x10
	::MoleMole::Config::ConfigEntityAttackPattern* Field_1_12; // 0x20
	::MoleMole::EntityHandle Field_1_7; // 0x28
	::Il2CppArray<::System::String*>* Field_1_11; // 0x38
	::Class_1_1CDA382D823F8E80* Field_1_0; // 0x40
	::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 Field_1_5; // 0x48
	::UnityEngine::Vector3 Field_1_8; // 0x4C
	::System::Boolean Field_1_9; // 0x58
	::System::Boolean Field_1_14; // 0x59
	::System::Boolean Field_1_4; // 0x5A
	::System::Int32 Field_1_1; // 0x5C
	::UnityEngine::Quaternion Field_1_15; // 0x60
	::System::UInt32 Field_1_13; // 0x70
	::Struct_2_057163E12A7F6FF0 Field_1_10; // 0x74
	::UnityEngine::LayerMask Field_1_6; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_CLASS_1_0E9AE39C3B1058BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF9F1B49F5281F39(::System::Int32 a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::Class_1_1CDA382D823F8E80* a3, ::MoleMole::EntityHandle a4, ::UnityEngine::LayerMask a5, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a6, ::System::Boolean a7, ::Il2CppArray<::System::String*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::System::Boolean a13, ::System::UInt32 a14)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::EntityHandle, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A1A8840B8D273722_CLASS_1_0E9AE39C3B1058BF_METHOD_1_EF9F1B49F5281F39_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}
};
