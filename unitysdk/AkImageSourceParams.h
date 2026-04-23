#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKIMAGESOURCEPARAMS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5EE940)
#define AKIMAGESOURCEPARAMS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5EE850)
#define AKIMAGESOURCEPARAMS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5EE8D0)
#define AKIMAGESOURCEPARAMS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5EE740)
#define AKIMAGESOURCEPARAMS_GET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1A5EF190)
#define AKIMAGESOURCEPARAMS_GET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1A5EEEB0)
#define AKIMAGESOURCEPARAMS_GET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1A5EF020)
#define AKIMAGESOURCEPARAMS_GET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A5EED20)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1A5EF300)
#define AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1A5EF470)
#define AKIMAGESOURCEPARAMS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5EE790)
#define AKIMAGESOURCEPARAMS_SET_FDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1A5EF0D0)
#define AKIMAGESOURCEPARAMS_SET_FDISTANCESCALINGFACTOR_OFFSET UNITYSDK_OFFSET(0x1A5EEDF0)
#define AKIMAGESOURCEPARAMS_SET_FLEVEL_OFFSET UNITYSDK_OFFSET(0x1A5EEF60)
#define AKIMAGESOURCEPARAMS_SET_SOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A5EEC30)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONEMITTERSIDE_OFFSET UNITYSDK_OFFSET(0x1A5EF240)
#define AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONLISTENERSIDE_OFFSET UNITYSDK_OFFSET(0x1A5EF3B0)
#define AKIMAGESOURCEPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5EEAE0)
#define AKIMAGESOURCEPARAMS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A5EEB60)
#define AKIMAGESOURCEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EE730)

inline static constexpr unsigned int AkImageSourceParams_TypeDefinitionIndex = 40299;

class AkImageSourceParams : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 in_sourcePosition, ::System::Single in_fDistanceScalingFactor, ::System::Single in_fLevel)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS__CTOR_2_OFFSET))(this, in_sourcePosition, in_fDistanceScalingFactor, in_fLevel);
	}

	static ::System::IntPtr getCPtr(::AkImageSourceParams* obj)
	{
		return ((::System::IntPtr(*)(::AkImageSourceParams*))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_sourcePosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_SOURCEPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_sourcePosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_SOURCEPOSITION_OFFSET))(this);
	}

	::System::Void set_fDistanceScalingFactor(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FDISTANCESCALINGFACTOR_OFFSET))(this, value);
	}

	::System::Single get_fDistanceScalingFactor()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FDISTANCESCALINGFACTOR_OFFSET))(this);
	}

	::System::Void set_fLevel(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FLEVEL_OFFSET))(this, value);
	}

	::System::Single get_fLevel()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FLEVEL_OFFSET))(this);
	}

	::System::Void set_fDiffraction(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_FDIFFRACTION_OFFSET))(this, value);
	}

	::System::Single get_fDiffraction()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_FDIFFRACTION_OFFSET))(this);
	}

	::System::Void set_uDiffractionEmitterSide(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONEMITTERSIDE_OFFSET))(this, value);
	}

	::System::Byte get_uDiffractionEmitterSide()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONEMITTERSIDE_OFFSET))(this);
	}

	::System::Void set_uDiffractionListenerSide(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_SET_UDIFFRACTIONLISTENERSIDE_OFFSET))(this, value);
	}

	::System::Byte get_uDiffractionListenerSide()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIMAGESOURCEPARAMS_GET_UDIFFRACTIONLISTENERSIDE_OFFSET))(this);
	}
};
