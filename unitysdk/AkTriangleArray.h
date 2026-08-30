#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkTriangle;

#define AKTRIANGLEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D2D5430)
#define AKTRIANGLEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1D2D53B0)
#define AKTRIANGLEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1D2D5300)
#define AKTRIANGLEARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1D2D5250)
#define AKTRIANGLEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CB430)

inline static constexpr unsigned int AkTriangleArray_TypeDefinitionIndex = 43681;

class AkTriangleArray : public ::AkBaseArray_1<::AkTriangle*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}

	::AkTriangle* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkTriangle*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkTriangle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLEARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
