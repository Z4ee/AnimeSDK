#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkVertex;

#define AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B4B9FA0)
#define AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B4B9F50)
#define AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1B4B9EE0)
#define AKVERTEXARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B9EA0)

inline static constexpr unsigned int AkVertexArray_TypeDefinitionIndex = 41238;

class AkVertexArray : public ::AkBaseArray_1<::AkVertex*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKVERTEXARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkVertex* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkVertex*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkVertex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEXARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
