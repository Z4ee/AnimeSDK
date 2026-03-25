#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkAcousticSurface;

#define AKACOUSTICSURFACEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18B8A1A0)
#define AKACOUSTICSURFACEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18B8A120)
#define AKACOUSTICSURFACEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x18B8A070)
#define AKACOUSTICSURFACEARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x18B89FC0)
#define AKACOUSTICSURFACEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B89F80)
#define AKACOUSTICSURFACEARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x18B8A2C0)

inline static constexpr unsigned int AkAcousticSurfaceArray_TypeDefinitionIndex = 34596;

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

	::System::Void __iFixBaseProxy_DefaultConstructAtIntPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKACOUSTICSURFACEARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, P0);
	}
};
