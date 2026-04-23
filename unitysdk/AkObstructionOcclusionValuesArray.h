#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkObstructionOcclusionValues;

#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1A6010D0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1A601050)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1A600FA0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1A600EF0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A600EB0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1A6011F0)

inline static constexpr unsigned int AkObstructionOcclusionValuesArray_TypeDefinitionIndex = 40424;

class AkObstructionOcclusionValuesArray : public ::AkBaseArray_1<::AkObstructionOcclusionValues*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::AkObstructionOcclusionValues* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkObstructionOcclusionValues*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkObstructionOcclusionValues* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}

	::System::Void __iFixBaseProxy_DefaultConstructAtIntPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, P0);
	}
};
