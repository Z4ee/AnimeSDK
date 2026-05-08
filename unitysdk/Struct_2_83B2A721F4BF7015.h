#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FixedArray7_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_83B2A721F4BF7015_METHOD_2_30C8640C4A833B5C_OFFSET UNITYSDK_OFFSET(0x5B08F0)
#define STRUCT_2_83B2A721F4BF7015_METHOD_2_89CAEAD9DF810BDA_OFFSET UNITYSDK_OFFSET(0x5B0990)
#define STRUCT_2_83B2A721F4BF7015_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define STRUCT_2_83B2A721F4BF7015_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0x5B0830)
#define STRUCT_2_83B2A721F4BF7015_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x5B0870)
#define STRUCT_2_83B2A721F4BF7015__CTOR_OFFSET UNITYSDK_OFFSET(0x5B0980)

inline static constexpr unsigned int Struct_2_83B2A721F4BF7015_TypeDefinitionIndex = 45280;

struct alignas(4) Struct_2_83B2A721F4BF7015
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::Foundation::FixedArray7_1<::System::Single> Field_2_2; // 0x18

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	/*
	::System::Void Method_2_30C8640C4A833B5C(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015_METHOD_2_30C8640C4A833B5C_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Void Method_2_89CAEAD9DF810BDA(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + STRUCT_2_83B2A721F4BF7015_METHOD_2_89CAEAD9DF810BDA_OFFSET))(this, a1, a2);
	}
	*/
};
