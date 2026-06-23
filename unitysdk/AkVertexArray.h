#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkVertex;

#define AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E63FD60)
#define AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E63FD50)
#define AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1E63FD40)
#define AKVERTEXARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E63FD00)

inline static constexpr unsigned int AkVertexArray_TypeDefinitionIndex = 33080;

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
