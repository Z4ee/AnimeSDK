#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkSourceSettings;

#define AKSOURCESETTINGSARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18C20000)
#define AKSOURCESETTINGSARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x18C1FE10)
#define AKSOURCESETTINGSARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x18C1FD60)
#define AKSOURCESETTINGSARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x18C1FB70)
#define AKSOURCESETTINGSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1FB30)
#define AKSOURCESETTINGSARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x18C202A0)

inline static constexpr unsigned int AkSourceSettingsArray_TypeDefinitionIndex = 34608;

class AkSourceSettingsArray : public ::AkBaseArray_1<::AkSourceSettings*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkSourceSettings* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkSourceSettings*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkSourceSettings* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}

	::System::Void __iFixBaseProxy_DefaultConstructAtIntPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, P0);
	}
};
