#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CURVEPOINT_GET_T_OFFSET UNITYSDK_OFFSET(0x846960)
#define CURVEPOINT_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define CURVEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x846980)

inline static constexpr unsigned int CurvePoint_TypeDefinitionIndex = 75572;

struct alignas(8) CurvePoint
{
	::System::Single t; // 0x10
	::Il2CppArray<::UnityEngine::Vector2>* vector; // 0x18

	::System::Void _ctor(::System::Single _theta, ::Il2CppArray<::UnityEngine::Vector2>* _vector)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CURVEPOINT__CTOR_OFFSET))(this, _theta, _vector);
	}

	::System::Single get_T()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEPOINT_GET_T_OFFSET))(this);
	}

	/*
	::LargeVector get_Vector()
	{
		return ((::LargeVector(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVEPOINT_GET_VECTOR_OFFSET))(this);
	}
	*/
};
