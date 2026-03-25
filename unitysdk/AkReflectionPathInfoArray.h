#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkReflectionPathInfo;

#define AKREFLECTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18BD05E0)
#define AKREFLECTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18BD0560)
#define AKREFLECTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x18BD04B0)
#define AKREFLECTIONPATHINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0470)

inline static constexpr unsigned int AkReflectionPathInfoArray_TypeDefinitionIndex = 34607;

class AkReflectionPathInfoArray : public ::AkBaseArray_1<::AkReflectionPathInfo*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkReflectionPathInfo* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkReflectionPathInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkReflectionPathInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
