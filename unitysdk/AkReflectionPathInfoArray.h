#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkReflectionPathInfo;

#define AKREFLECTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E45FB40)
#define AKREFLECTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E45FB00)
#define AKREFLECTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1E45FA80)
#define AKREFLECTIONPATHINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E45FA40)

inline static constexpr unsigned int AkReflectionPathInfoArray_TypeDefinitionIndex = 33095;

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
