#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkObjectInfo;

#define AKOBJECTINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1FBD88C0)
#define AKOBJECTINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1FBD8880)
#define AKOBJECTINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1FBD8800)
#define AKOBJECTINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1FBD8780)
#define AKOBJECTINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD8740)

inline static constexpr unsigned int AkObjectInfoArray_TypeDefinitionIndex = 33727;

class AkObjectInfoArray : public ::AkBaseArray_1<::AkObjectInfo*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkObjectInfo* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkObjectInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkObjectInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
