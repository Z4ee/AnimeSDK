#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E07782907E11788E__CTOR_OFFSET UNITYSDK_OFFSET(0x18D38B40)

inline static constexpr unsigned int Class_1_E07782907E11788E_TypeDefinitionIndex = 35385;

class Class_1_E07782907E11788E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::DateTime Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E07782907E11788E__CTOR_OFFSET))(this);
	}
};
