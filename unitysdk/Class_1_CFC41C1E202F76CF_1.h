#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CFC41C1E202F76CF_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C29D5E0)
#define CLASS_1_CFC41C1E202F76CF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29D580)

inline static constexpr unsigned int Class_1_CFC41C1E202F76CF_1_TypeDefinitionIndex = 35601;

class Class_1_CFC41C1E202F76CF_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* NNKOBJCMGFK; // 0x10
	::System::UInt32 ACINAKNBFOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFC41C1E202F76CF_1__CTOR_OFFSET))(this);
	}

	::System::Object* Clone()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFC41C1E202F76CF_1_CLONE_OFFSET))(this);
	}
};
