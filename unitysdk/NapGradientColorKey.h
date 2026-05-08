#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define NAPGRADIENTCOLORKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x50CA00)
#define NAPGRADIENTCOLORKEY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xBDFA3D0)
#define NAPGRADIENTCOLORKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x50C9E0)
#define NAPGRADIENTCOLORKEY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x50C9E0)
#define NAPGRADIENTCOLORKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x39F290)

inline static constexpr unsigned int NapGradientColorKey_TypeDefinitionIndex = 68996;

struct alignas(4) NapGradientColorKey
{
	::UnityEngine::Color color; // 0x10
	::System::Single time; // 0x20

	::System::Void _ctor(::UnityEngine::Color color, ::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + NAPGRADIENTCOLORKEY__CTOR_OFFSET))(this, color, time);
	}

	/*
	::System::Void _ctor_1(::UnityEngine::GradientColorKey key)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GradientColorKey))((::PBYTE)hIl2Cpp + NAPGRADIENTCOLORKEY__CTOR_1_OFFSET))(this, key);
	}
	*/

	::System::Void _ctor_2(::NapGradientColorKey key)
	{
		return ((::System::Void(*)(::PVOID, ::NapGradientColorKey))((::PBYTE)hIl2Cpp + NAPGRADIENTCOLORKEY__CTOR_2_OFFSET))(this, key);
	}

	/*
	static ::NapGradientColorKey op_Implicit(::UnityEngine::GradientColorKey key)
	{
		return ((::NapGradientColorKey(*)(::UnityEngine::GradientColorKey))((::PBYTE)hIl2Cpp + NAPGRADIENTCOLORKEY_OP_IMPLICIT_OFFSET))(key);
	}
	*/

	::System::Int32 CompareTo(::NapGradientColorKey other)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientColorKey))((::PBYTE)hIl2Cpp + NAPGRADIENTCOLORKEY_COMPARETO_OFFSET))(this, other);
	}
};
