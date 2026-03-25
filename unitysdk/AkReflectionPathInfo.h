#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAcousticSurface;

#define AKREFLECTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x18BD02D0)
#define AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18BCF660)
#define AKREFLECTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BCF570)
#define AKREFLECTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BCF5F0)
#define AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET UNITYSDK_OFFSET(0x18BD0110)
#define AKREFLECTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18BCF460)
#define AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x18BD0210)
#define AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x18BD0030)
#define AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x18BCFF80)
#define AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x18BCF8F0)
#define AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x18BCFED0)
#define AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18BCFD60)
#define AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x18BCFA80)
#define AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x18BCFBF0)
#define AKREFLECTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18BCF4B0)
#define AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x18BCF800)
#define AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x18BCFE10)
#define AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18BCFCA0)
#define AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x18BCF9C0)
#define AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x18BCFB30)
#define AKREFLECTIONPATHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BD03F0)
#define AKREFLECTIONPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCF450)

inline static constexpr unsigned int AkReflectionPathInfo_TypeDefinitionIndex = 34518;

class AkReflectionPathInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkReflectionPathInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_imageSource(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_imageSource()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET))(this);
	}

	::System::Void set_numPathPoints(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET))(this, value);
	}

	::System::UInt32 get_numPathPoints()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET))(this);
	}

	::System::Void set_numReflections(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET))(this, value);
	}

	::System::UInt32 get_numReflections()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET))(this);
	}

	::System::Void set_level(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET))(this, value);
	}

	::System::Single get_level()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_isOccluded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET))(this, value);
	}

	::System::Boolean get_isOccluded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET))();
	}

	::UnityEngine::Vector3 GetPathPoint(::System::UInt32 idx)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET))(this, idx);
	}

	::AkAcousticSurface* GetAcousticSurface(::System::UInt32 idx)
	{
		return ((::AkAcousticSurface*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET))(this, idx);
	}

	::System::Single GetDiffraction(::System::UInt32 idx)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET))(this, idx);
	}

	::System::Void Clone(::AkReflectionPathInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_CLONE_OFFSET))(this, other);
	}
};
