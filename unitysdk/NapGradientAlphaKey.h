#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NAPGRADIENTALPHAKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x5EE990)
#define NAPGRADIENTALPHAKEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xE585270)
#define NAPGRADIENTALPHAKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x324D50)
#define NAPGRADIENTALPHAKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x324D50)
#define NAPGRADIENTALPHAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x4E4210)

inline static constexpr unsigned int NapGradientAlphaKey_TypeDefinitionIndex = 65608;

struct alignas(4) NapGradientAlphaKey
{
	::System::Single alpha; // 0x10
	::System::Single time; // 0x14

	::System::Void _ctor(::System::Single alpha, ::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NAPGRADIENTALPHAKEY__CTOR_OFFSET))(this, alpha, time);
	}

	/*
	::System::Void _ctor_1(::UnityEngine::GradientAlphaKey key)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientAlphaKey))((::PBYTE)hIl2Cpp + NAPGRADIENTALPHAKEY__CTOR_1_OFFSET))(this, key);
	}
	*/

	::System::Void _ctor_2(::NapGradientAlphaKey key)
	{
		return ((::System::Void(*)(::PVOID, ::NapGradientAlphaKey))((::PBYTE)hIl2Cpp + NAPGRADIENTALPHAKEY__CTOR_2_OFFSET))(this, key);
	}

	/*
	static ::NapGradientAlphaKey op_Implicit(::UnityEngine::GradientAlphaKey key)
	{
		return ((::NapGradientAlphaKey(*)(::UnityEngine::GradientAlphaKey))((::PBYTE)hIl2Cpp + NAPGRADIENTALPHAKEY_OP_IMPLICIT_OFFSET))(key);
	}
	*/

	::System::Int32 CompareTo(::NapGradientAlphaKey other)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientAlphaKey))((::PBYTE)hIl2Cpp + NAPGRADIENTALPHAKEY_COMPARETO_OFFSET))(this, other);
	}
};
