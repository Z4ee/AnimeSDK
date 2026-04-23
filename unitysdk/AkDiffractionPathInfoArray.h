#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkDiffractionPathInfo;

#define AKDIFFRACTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1A5E3B20)
#define AKDIFFRACTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1A5E3AA0)
#define AKDIFFRACTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1A5E39F0)
#define AKDIFFRACTIONPATHINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E39B0)

inline static constexpr unsigned int AkDiffractionPathInfoArray_TypeDefinitionIndex = 40420;

class AkDiffractionPathInfoArray : public ::AkBaseArray_1<::AkDiffractionPathInfo*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkDiffractionPathInfo* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkDiffractionPathInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkDiffractionPathInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
