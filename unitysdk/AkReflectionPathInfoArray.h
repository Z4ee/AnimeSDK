#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkReflectionPathInfo;

#define AKREFLECTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1BD773B0)
#define AKREFLECTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1BD77330)
#define AKREFLECTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1BD77280)
#define AKREFLECTIONPATHINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD77240)

inline static constexpr unsigned int AkReflectionPathInfoArray_TypeDefinitionIndex = 42068;

class AkReflectionPathInfoArray : public ::AkBaseArray_1<::AkReflectionPathInfo*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkReflectionPathInfo* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkReflectionPathInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkReflectionPathInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
