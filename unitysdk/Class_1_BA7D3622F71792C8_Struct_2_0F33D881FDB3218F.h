#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/InterpCurve_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0x7FD150)
#define CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x7FD3E0)
#define CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x7FD350)
#define CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_F268ECD9F98A9FD1_OFFSET UNITYSDK_OFFSET(0x7FD240)
#define CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD040)

inline static constexpr unsigned int Class_1_BA7D3622F71792C8_Struct_2_0F33D881FDB3218F_TypeDefinitionIndex = 50728;

struct alignas(8) Class_1_BA7D3622F71792C8_Struct_2_0F33D881FDB3218F
{
	::UnityEngine::Vector2 Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x18
	::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2> Field_2_0; // 0x20
	::PipelineCamera::InterpCurve_1<::System::Single> Field_2_7; // 0xB8

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2> a3, ::PipelineCamera::InterpCurve_1<::System::Single> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::PipelineCamera::InterpCurve_1<::UnityEngine::Vector2>, ::PipelineCamera::InterpCurve_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	/*
	::UnityEngine::Vector3 Method_2_7ABAA176B11E9110(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_7ABAA176B11E9110_OFFSET))(this, a1);
	}
	*/

	::UnityEngine::Vector2 Method_2_F268ECD9F98A9FD1(::System::Single a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_F268ECD9F98A9FD1_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
	*/

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA7D3622F71792C8_STRUCT_2_0F33D881FDB3218F_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
