#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkDeviceDescription;

#define AKDEVICEDESCRIPTIONARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1EEC3800)
#define AKDEVICEDESCRIPTIONARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1EEC3780)
#define AKDEVICEDESCRIPTIONARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1EEC36D0)
#define AKDEVICEDESCRIPTIONARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1EEC3620)
#define AKDEVICEDESCRIPTIONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC35E0)

inline static constexpr unsigned int AkDeviceDescriptionArray_TypeDefinitionIndex = 43672;

class AkDeviceDescriptionArray : public ::AkBaseArray_1<::AkDeviceDescription*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}

	::AkDeviceDescription* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkDeviceDescription*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkDeviceDescription* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkDeviceDescription*))((::PBYTE)hIl2Cpp + AKDEVICEDESCRIPTIONARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
