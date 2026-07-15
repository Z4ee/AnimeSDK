#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkExternalSourceInfo;

#define AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B96E1E0)
#define AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B96E180)
#define AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B96E020)
#define AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1B96DF70)
#define AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B96E0D0)
#define AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96DF60)

inline static constexpr unsigned int AkExternalSourceInfoArray_TypeDefinitionIndex = 42063;

class AkExternalSourceInfoArray : public ::AkBaseArray_1<::AkExternalSourceInfo*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}

	::System::Void ReleaseAllocatedMemoryFromReferenceAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET))(this, a1);
	}

	::AkExternalSourceInfo* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkExternalSourceInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkExternalSourceInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
