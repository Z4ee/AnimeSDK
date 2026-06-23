#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkSourceSettings;

#define AKSOURCESETTINGSARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E7811F0)
#define AKSOURCESETTINGSARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E7811B0)
#define AKSOURCESETTINGSARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1E781130)
#define AKSOURCESETTINGSARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1E7810B0)
#define AKSOURCESETTINGSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E781070)

inline static constexpr unsigned int AkSourceSettingsArray_TypeDefinitionIndex = 33096;

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
};
