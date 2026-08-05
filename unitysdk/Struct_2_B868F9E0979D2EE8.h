#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_19E41487AE482B1E_OFFSET UNITYSDK_OFFSET(0x8B8F10)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_1_OFFSET UNITYSDK_OFFSET(0x8B8CC0)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_2_OFFSET UNITYSDK_OFFSET(0x8B8E90)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x8B8C30)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_D437D090E63BE8A7_1_OFFSET UNITYSDK_OFFSET(0x8B8DF0)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x8B8D50)
#define STRUCT_2_B868F9E0979D2EE8_METHOD_2_F1D9E8598A40B322_OFFSET UNITYSDK_OFFSET(0x8B8DE0)
#define STRUCT_2_B868F9E0979D2EE8__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8C20)

inline static constexpr unsigned int Struct_2_B868F9E0979D2EE8_TypeDefinitionIndex = 89264;

struct alignas(8) Struct_2_B868F9E0979D2EE8
{
	// static const ::System::Int32 Field_2_2 = 0x14; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_0; // 0x0
	::System::Single Field_2_7; // 0x10
	::System::Single Field_2_6; // 0x14
	::System::Single Field_2_5; // 0x18
	::System::Single Field_2_4; // 0x1C
	::System::Single Field_2_11; // 0x20
	::System::Single Field_2_10; // 0x24
	::Il2CppArray<::System::Single>* Field_2_9; // 0x28
	::UnityEngine::AnimationCurve* Field_2_8; // 0x30
	::UnityEngine::AnimationCurve* Field_2_15; // 0x38

	::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_43E290A0B26B39F6_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_2_F1D9E8598A40B322(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_F1D9E8598A40B322_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_D437D090E63BE8A7_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_D437D090E63BE8A7_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_43E290A0B26B39F6_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_43E290A0B26B39F6_2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_19E41487AE482B1E(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B868F9E0979D2EE8_METHOD_2_19E41487AE482B1E_OFFSET))(this, a1, a2, a3, a4);
	}
};
