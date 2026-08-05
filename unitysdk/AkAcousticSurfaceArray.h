#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkAcousticSurface;

#define AKACOUSTICSURFACEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D4CBAE0)
#define AKACOUSTICSURFACEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D4CBAA0)
#define AKACOUSTICSURFACEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1D4CB9A0)
#define AKACOUSTICSURFACEARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1D4CB8A0)
#define AKACOUSTICSURFACEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CB860)

inline static constexpr unsigned int AkAcousticSurfaceArray_TypeDefinitionIndex = 33719;

class AkAcousticSurfaceArray : public ::AkBaseArray_1<::AkAcousticSurface*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkAcousticSurface* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkAcousticSurface*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkAcousticSurface* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkAcousticSurface*))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
