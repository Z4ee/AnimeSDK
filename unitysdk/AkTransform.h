#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKTRANSFORM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B4B45A0)
#define AKTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4B4480)
#define AKTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4B4530)
#define AKTRANSFORM_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4B4340)
#define AKTRANSFORM_ORIENTATIONFRONT_OFFSET UNITYSDK_OFFSET(0x1B4B49D0)
#define AKTRANSFORM_ORIENTATIONTOP_OFFSET UNITYSDK_OFFSET(0x1B4B4AA0)
#define AKTRANSFORM_POSITION_OFFSET UNITYSDK_OFFSET(0x1B4B4780)
#define AKTRANSFORM_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4B4390)
#define AKTRANSFORM_SETORIENTATION_1_OFFSET UNITYSDK_OFFSET(0x1B4B5BC0)
#define AKTRANSFORM_SETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B4B58D0)
#define AKTRANSFORM_SETPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B4B5610)
#define AKTRANSFORM_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4B53B0)
#define AKTRANSFORM_SET_1_OFFSET UNITYSDK_OFFSET(0x1B4B4F10)
#define AKTRANSFORM_SET_OFFSET UNITYSDK_OFFSET(0x1B4B4B70)
#define AKTRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4B5F60)
#define AKTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B4330)

inline static constexpr unsigned int AkTransform_TypeDefinitionIndex = 41175;

class AkTransform : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRANSFORM__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkTransform* a1)
	{
		return ((::System::IntPtr(*)(::AkTransform*))((::PBYTE)hIl2Cpp + AKTRANSFORM_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRANSFORM_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRANSFORM_DISPOSE_1_OFFSET))(this, a1);
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

	::System::Void Set(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SET_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Set_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SET_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void SetPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETPOSITION_OFFSET))(this, a1);
	}

	::System::Void SetPosition_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETPOSITION_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetOrientation(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETORIENTATION_OFFSET))(this, a1, a2);
	}

	::System::Void SetOrientation_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKTRANSFORM_SETORIENTATION_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
