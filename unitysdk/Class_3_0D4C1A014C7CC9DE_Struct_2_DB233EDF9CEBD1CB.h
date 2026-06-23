#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x80C610)
#define CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x80C620)
#define CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x80C590)
#define CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB__CTOR_OFFSET UNITYSDK_OFFSET(0x80C560)

inline static constexpr unsigned int Class_3_0D4C1A014C7CC9DE_Struct_2_DB233EDF9CEBD1CB_TypeDefinitionIndex = 67156;

struct alignas(8) Class_3_0D4C1A014C7CC9DE_Struct_2_DB233EDF9CEBD1CB
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::UnityEngine::AnimationCurve* Field_2_5; // 0x28
	::System::Single Field_2_6; // 0x30
	::UnityEngine::AnimationCurve* Field_2_7; // 0x38
	::System::Single Field_2_8; // 0x40

	::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D4C1A014C7CC9DE_STRUCT_2_DB233EDF9CEBD1CB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}
};
