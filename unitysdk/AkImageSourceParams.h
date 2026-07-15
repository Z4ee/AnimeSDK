#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKIMAGESOURCEPARAMS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B9727E0)
#define AKIMAGESOURCEPARAMS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9725F0)
#define AKIMAGESOURCEPARAMS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B972710)
#define AKIMAGESOURCEPARAMS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B972540)
#define AKIMAGESOURCEPARAMS_GET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1B973070)
#define AKIMAGESOURCEPARAMS_GET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1B972D90)
#define AKIMAGESOURCEPARAMS_GET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1B972F00)
#define AKIMAGESOURCEPARAMS_GET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B972C00)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1B9731E0)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1B973350)
#define AKIMAGESOURCEPARAMS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B972590)
#define AKIMAGESOURCEPARAMS_SET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1B972FB0)
#define AKIMAGESOURCEPARAMS_SET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1B972CD0)
#define AKIMAGESOURCEPARAMS_SET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1B972E40)
#define AKIMAGESOURCEPARAMS_SET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B972B10)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1B973120)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1B973290)
#define AKIMAGESOURCEPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9729C0)
#define AKIMAGESOURCEPARAMS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B972A40)
#define AKIMAGESOURCEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B972530)

inline static constexpr unsigned int AkImageSourceParams_TypeDefinitionIndex = 41941;

class AkImageSourceParams : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

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
