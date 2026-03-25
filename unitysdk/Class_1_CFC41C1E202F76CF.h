#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CFC41C1E202F76CF_CLONE_OFFSET UNITYSDK_OFFSET(0x165F14D0)
#define CLASS_1_CFC41C1E202F76CF__CTOR_OFFSET UNITYSDK_OFFSET(0x165F1470)

inline static constexpr unsigned int Class_1_CFC41C1E202F76CF_TypeDefinitionIndex = 28412;

class Class_1_CFC41C1E202F76CF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFC41C1E202F76CF__CTOR_OFFSET))(this);
	}

	::System::Object* Clone()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFC41C1E202F76CF_CLONE_OFFSET))(this);
	}
};
