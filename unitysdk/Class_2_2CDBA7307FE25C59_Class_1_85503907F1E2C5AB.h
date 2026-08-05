#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96232DA6A41AD866;

#define CLASS_2_2CDBA7307FE25C59_CLASS_1_85503907F1E2C5AB_COMPARE_OFFSET UNITYSDK_OFFSET(0x14DE1700)
#define CLASS_2_2CDBA7307FE25C59_CLASS_1_85503907F1E2C5AB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE1A80)

inline static constexpr unsigned int Class_2_2CDBA7307FE25C59_Class_1_85503907F1E2C5AB_TypeDefinitionIndex = 72995;

class Class_2_2CDBA7307FE25C59_Class_1_85503907F1E2C5AB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CDBA7307FE25C59_CLASS_1_85503907F1E2C5AB__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_96232DA6A41AD866* a1, ::Class_1_96232DA6A41AD866* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_96232DA6A41AD866*, ::Class_1_96232DA6A41AD866*))((::PBYTE)hIl2Cpp + CLASS_2_2CDBA7307FE25C59_CLASS_1_85503907F1E2C5AB_COMPARE_OFFSET))(this, a1, a2);
	}
};
