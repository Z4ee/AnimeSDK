#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_CENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0x1D10)
#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_HALFHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D20)
#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1D00)
#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_AD9F071724804EBE_1_OFFSET UNITYSDK_OFFSET(0x14D50)
#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_AD9F071724804EBE_OFFSET UNITYSDK_OFFSET(0x14CD0)
#define CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC0)

inline static constexpr unsigned int Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA_TypeDefinitionIndex = 53090;

struct alignas(4) Class_2_3D203C82F08F6855_Struct_2_1C0D1D514F9A1CCA
{
	::System::Single _Radius_k__BackingField; // 0x10
	::System::Single _CenterOffsetY_k__BackingField; // 0x14
	::System::Single _HalfHeight_k__BackingField; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_RADIUS_OFFSET))(this);
	}

	::System::Single get_CenterOffsetY()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_CENTEROFFSETY_OFFSET))(this);
	}

	::System::Single get_HalfHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_GET_HALFHEIGHT_OFFSET))(this);
	}

	/*
	::System::Single Method_2_AD9F071724804EBE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_AD9F071724804EBE_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Single Method_2_AD9F071724804EBE_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_3D203C82F08F6855_STRUCT_2_1C0D1D514F9A1CCA_METHOD_2_AD9F071724804EBE_1_OFFSET))(this, a1);
	}
	*/
};
