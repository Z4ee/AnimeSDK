#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkVertex;

#define AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1C2EE500)
#define AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1C2EE4F0)
#define AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1C2EE4E0)
#define AKVERTEXARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EE4A0)

inline static constexpr unsigned int AkVertexArray_TypeDefinitionIndex = 31529;

class AkVertexArray : public ::AkBaseArray_1<::AkVertex*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKVERTEXARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkVertex* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkVertex*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkVertex* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
