#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkTriangle;

#define AKTRIANGLEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D930A80)
#define AKTRIANGLEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D930A40)
#define AKTRIANGLEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1D9309C0)
#define AKTRIANGLEARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1D930940)
#define AKTRIANGLEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D930900)

inline static constexpr unsigned int AkTriangleArray_TypeDefinitionIndex = 33097;

class AkTriangleArray : public ::AkBaseArray_1<::AkTriangle*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkTriangle* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkTriangle*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkTriangle* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
