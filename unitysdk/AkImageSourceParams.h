#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKIMAGESOURCEPARAMS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D5A2380)
#define AKIMAGESOURCEPARAMS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5A2190)
#define AKIMAGESOURCEPARAMS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D5A22B0)
#define AKIMAGESOURCEPARAMS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D5A20E0)
#define AKIMAGESOURCEPARAMS_GET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1D5A2C10)
#define AKIMAGESOURCEPARAMS_GET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1D5A2930)
#define AKIMAGESOURCEPARAMS_GET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1D5A2AA0)
#define AKIMAGESOURCEPARAMS_GET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D5A27A0)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1D5A2D80)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1D5A2EF0)
#define AKIMAGESOURCEPARAMS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D5A2130)
#define AKIMAGESOURCEPARAMS_SET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1D5A2B50)
#define AKIMAGESOURCEPARAMS_SET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1D5A2870)
#define AKIMAGESOURCEPARAMS_SET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1D5A29E0)
#define AKIMAGESOURCEPARAMS_SET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D5A26B0)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1D5A2CC0)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1D5A2E30)
#define AKIMAGESOURCEPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5A2560)
#define AKIMAGESOURCEPARAMS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D5A25E0)
#define AKIMAGESOURCEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A20D0)

inline static constexpr unsigned int AkImageSourceParams_TypeDefinitionIndex = 43552;

class AkImageSourceParams : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	static ::System::IntPtr getCPtr(::AkImageSourceParams* a1)
	{
		return ((::System::IntPtr(*)(::AkImageSourceParams*))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_sourcePosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_SOURCEPOSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_sourcePosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_SOURCEPOSITION_OFFSET))(this);
	}

	::System::Void set_fDistanceScalingFactor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FDISTANCESCALINGFACTOR_OFFSET))(this, a1);
	}

	::System::Single get_fDistanceScalingFactor()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FDISTANCESCALINGFACTOR_OFFSET))(this);
	}

	::System::Void set_fLevel(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FLEVEL_OFFSET))(this, a1);
	}

	::System::Single get_fLevel()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FLEVEL_OFFSET))(this);
	}

	::System::Void set_fDiffraction(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FDIFFRACTION_OFFSET))(this, a1);
	}

	::System::Single get_fDiffraction()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FDIFFRACTION_OFFSET))(this);
	}

	::System::Void set_uDiffractionEmitterSide(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONEMITTERSIDE_OFFSET))(this, a1);
	}

	::System::Byte get_uDiffractionEmitterSide()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONEMITTERSIDE_OFFSET))(this);
	}

	::System::Void set_uDiffractionListenerSide(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONLISTENERSIDE_OFFSET))(this, a1);
	}

	::System::Byte get_uDiffractionListenerSide()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONLISTENERSIDE_OFFSET))(this);
	}
};
