#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkObstructionOcclusionValues;

#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1DA9EE60)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1DA9EDE0)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1DA9ED30)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1DA9EC80)
#define AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9EC40)

inline static constexpr unsigned int AkObstructionOcclusionValuesArray_TypeDefinitionIndex = 43677;

class AkObstructionOcclusionValuesArray : public ::AkBaseArray_1<::AkObstructionOcclusionValues*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
	}

	::AkObstructionOcclusionValues* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkObstructionOcclusionValues*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkObstructionOcclusionValues* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkObstructionOcclusionValues*))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSIONVALUESARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
