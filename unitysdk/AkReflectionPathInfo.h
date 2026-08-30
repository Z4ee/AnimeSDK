#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAcousticSurface;

#define AKREFLECTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DAA9D30)
#define AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DAA9080)
#define AKREFLECTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAA8E90)
#define AKREFLECTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DAA8FB0)
#define AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET UNITYSDK_OFFSET(0x1DAA9B70)
#define AKREFLECTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DAA8DE0)
#define AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x1DAA9C70)
#define AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x1DAA9A90)
#define AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1DAA99E0)
#define AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x1DAA9350)
#define AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x1DAA9930)
#define AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DAA97C0)
#define AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAA94E0)
#define AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x1DAA9650)
#define AKREFLECTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DAA8E30)
#define AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x1DAA9260)
#define AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x1DAA9870)
#define AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DAA9700)
#define AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAA9420)
#define AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x1DAA9590)
#define AKREFLECTIONPATHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAA9E50)
#define AKREFLECTIONPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8DD0)

inline static constexpr unsigned int AkReflectionPathInfo_TypeDefinitionIndex = 43590;

class AkReflectionPathInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkReflectionPathInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_imageSource(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_imageSource()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET))(this);
	}

	::System::Void set_numPathPoints(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET))(this, a1);
	}

	::System::UInt32 get_numPathPoints()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET))(this);
	}

	::System::Void set_numReflections(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET))(this, a1);
	}

	::System::UInt32 get_numReflections()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET))(this);
	}

	::System::Void set_level(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::Single get_level()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_isOccluded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET))(this, a1);
	}

	::System::Boolean get_isOccluded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET))();
	}

	::UnityEngine::Vector3 GetPathPoint(::System::UInt32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET))(this, a1);
	}

	::AkAcousticSurface* GetAcousticSurface(::System::UInt32 a1)
	{
		return ((::AkAcousticSurface*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET))(this, a1);
	}

	::System::Single GetDiffraction(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET))(this, a1);
	}

	::System::Void Clone(::AkReflectionPathInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_CLONE_OFFSET))(this, a1);
	}
};
