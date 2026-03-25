#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKTRANSFORM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18C2DCF0)
#define AKTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C2DC00)
#define AKTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18C2DC80)
#define AKTRANSFORM_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18C2DAF0)
#define AKTRANSFORM_ORIENTATIONFRONT_OFFSET UNITYSDK_OFFSET(0x18C2E120)
#define AKTRANSFORM_ORIENTATIONTOP_OFFSET UNITYSDK_OFFSET(0x18C2E1F0)
#define AKTRANSFORM_POSITION_OFFSET UNITYSDK_OFFSET(0x18C2DE90)
#define AKTRANSFORM_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18C2DB40)
#define AKTRANSFORM_SETORIENTATION_1_OFFSET UNITYSDK_OFFSET(0x18C2F310)
#define AKTRANSFORM_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x18C2F020)
#define AKTRANSFORM_SETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x18C2ED60)
#define AKTRANSFORM_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x18C2EB00)
#define AKTRANSFORM_SET_1_OFFSET UNITYSDK_OFFSET(0x18C2E660)
#define AKTRANSFORM_SET_OFFSET UNITYSDK_OFFSET(0x18C2E2C0)
#define AKTRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C2F6B0)
#define AKTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C2DAE0)

inline static constexpr unsigned int AkTransform_TypeDefinitionIndex = 34529;

class AkTransform : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRANSFORM__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkTransform* obj)
	{
		return ((::System::IntPtr(*)(::AkTransform*))((::PBYTE)hIl2Cpp + AKTRANSFORM_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRANSFORM_DISPOSE_1_OFFSET))(this, disposing);
	}

	::UnityEngine::Vector3 Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_POSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 OrientationFront()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_ORIENTATIONFRONT_OFFSET))(this);
	}

	::UnityEngine::Vector3 OrientationTop()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_ORIENTATIONTOP_OFFSET))(this);
	}

	::System::Void Set(::UnityEngine::Vector3 in_position, ::UnityEngine::Vector3 in_orientationFront, ::UnityEngine::Vector3 in_orientationTop)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SET_OFFSET))(this, in_position, in_orientationFront, in_orientationTop);
	}

	::System::Void Set_1(::System::Single in_positionX, ::System::Single in_positionY, ::System::Single in_positionZ, ::System::Single in_orientFrontX, ::System::Single in_orientFrontY, ::System::Single in_orientFrontZ, ::System::Single in_orientTopX, ::System::Single in_orientTopY, ::System::Single in_orientTopZ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SET_1_OFFSET))(this, in_positionX, in_positionY, in_positionZ, in_orientFrontX, in_orientFrontY, in_orientFrontZ, in_orientTopX, in_orientTopY, in_orientTopZ);
	}

	::System::Void SetPosition(::UnityEngine::Vector3 in_position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETPOSITION_OFFSET))(this, in_position);
	}

	::System::Void SetPosition_1(::System::Single in_x, ::System::Single in_y, ::System::Single in_z)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETPOSITION_1_OFFSET))(this, in_x, in_y, in_z);
	}

	::System::Void SetOrientation(::UnityEngine::Vector3 in_orientationFront, ::UnityEngine::Vector3 in_orientationTop)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETORIENTATION_OFFSET))(this, in_orientationFront, in_orientationTop);
	}

	::System::Void SetOrientation_1(::System::Single in_orientFrontX, ::System::Single in_orientFrontY, ::System::Single in_orientFrontZ, ::System::Single in_orientTopX, ::System::Single in_orientTopY, ::System::Single in_orientTopZ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETORIENTATION_1_OFFSET))(this, in_orientFrontX, in_orientFrontY, in_orientFrontZ, in_orientTopX, in_orientTopY, in_orientTopZ);
	}
};
