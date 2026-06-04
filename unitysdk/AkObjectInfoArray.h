#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkObjectInfo;

#define AKOBJECTINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B449A90)
#define AKOBJECTINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B449A10)
#define AKOBJECTINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B449960)
#define AKOBJECTINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1B4498B0)
#define AKOBJECTINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B449870)
#define AKOBJECTINFOARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B449BB0)

inline static constexpr unsigned int AkObjectInfoArray_TypeDefinitionIndex = 41250;

class AkObjectInfoArray : public ::AkBaseArray_1<::AkObjectInfo*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}

	::AkObjectInfo* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkObjectInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkObjectInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFOARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}
};
