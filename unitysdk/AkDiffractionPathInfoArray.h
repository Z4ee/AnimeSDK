#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkDiffractionPathInfo;

#define AKDIFFRACTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1EEC5EA0)
#define AKDIFFRACTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1EEC5E20)
#define AKDIFFRACTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1EEC5D70)
#define AKDIFFRACTIONPATHINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC5D30)

inline static constexpr unsigned int AkDiffractionPathInfoArray_TypeDefinitionIndex = 43673;

class AkDiffractionPathInfoArray : public ::AkBaseArray_1<::AkDiffractionPathInfo*>
{
public:
	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::AkDiffractionPathInfo* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
	{
		return ((::AkDiffractionPathInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkDiffractionPathInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
	}
};
