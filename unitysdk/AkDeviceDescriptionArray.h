#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkDeviceDescription;

#define AKDEVICEDESCRIPTIONARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F9D3320)
#define AKDEVICEDESCRIPTIONARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F9D32E0)
#define AKDEVICEDESCRIPTIONARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1F9D3260)
#define AKDEVICEDESCRIPTIONARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F9D31E0)
#define AKDEVICEDESCRIPTIONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D31A0)

inline static constexpr unsigned int AkDeviceDescriptionArray_TypeDefinitionIndex = 33723;

class AkDeviceDescriptionArray : public ::AkBaseArray_1<::AkDeviceDescription*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkDeviceDescription* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkDeviceDescription*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkDeviceDescription* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
