#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_699D4C3DCFF7F2D8.h"
#include "unitysdk/Enum_3_ABFC2C2AD6FA0905.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_2CC23FE9C9AEC1B7_METHOD_2_0768FBB1D95A9ECC_OFFSET UNITYSDK_OFFSET(0x1BC353F0)
#define STRUCT_2_2CC23FE9C9AEC1B7_METHOD_2_F9A93D24814FDC13_OFFSET UNITYSDK_OFFSET(0x8D7D90)

inline static constexpr unsigned int Struct_2_2CC23FE9C9AEC1B7_TypeDefinitionIndex = 74674;

struct alignas(8) Struct_2_2CC23FE9C9AEC1B7
{
	::Enum_3_699D4C3DCFF7F2D8 Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x14
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::MoleMole::Config::CampType Field_2_5; // 0x20
	::System::Single Field_2_4; // 0x24
	::Enum_3_ABFC2C2AD6FA0905 Field_2_11; // 0x28
	::System::Boolean Field_2_10; // 0x2C
	::System::Boolean Field_2_9; // 0x2D

	static ::Struct_2_2CC23FE9C9AEC1B7 Method_2_0768FBB1D95A9ECC(::System::UInt32 a1, ::Enum_3_699D4C3DCFF7F2D8 a2, ::MoleMole::Config::CampType a3, ::UnityEngine::GameObject* a4, ::System::Single a5, ::Enum_3_ABFC2C2AD6FA0905 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::Struct_2_2CC23FE9C9AEC1B7(*)(::System::UInt32, ::Enum_3_699D4C3DCFF7F2D8, ::MoleMole::Config::CampType, ::UnityEngine::GameObject*, ::System::Single, ::Enum_3_ABFC2C2AD6FA0905, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2CC23FE9C9AEC1B7_METHOD_2_0768FBB1D95A9ECC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_F9A93D24814FDC13(::Enum_3_699D4C3DCFF7F2D8 a1, ::System::UInt32 a2, ::MoleMole::Config::CampType a3, ::UnityEngine::GameObject* a4, ::System::Single a5, ::Enum_3_ABFC2C2AD6FA0905 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_699D4C3DCFF7F2D8, ::System::UInt32, ::MoleMole::Config::CampType, ::UnityEngine::GameObject*, ::System::Single, ::Enum_3_ABFC2C2AD6FA0905, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2CC23FE9C9AEC1B7_METHOD_2_F9A93D24814FDC13_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
