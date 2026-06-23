#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A52FBC3F77FB1B3.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_03F4D9B3111E6159_CLASS_1_FD2FB73FA2FF6528__CTOR_OFFSET UNITYSDK_OFFSET(0x17738460)

inline static constexpr unsigned int Class_2_03F4D9B3111E6159_Class_1_FD2FB73FA2FF6528_TypeDefinitionIndex = 62039;

class Class_2_03F4D9B3111E6159_Class_1_FD2FB73FA2FF6528 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_1; // 0x10
	::Enum_3_4A52FBC3F77FB1B3 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03F4D9B3111E6159_CLASS_1_FD2FB73FA2FF6528__CTOR_OFFSET))(this);
	}
};
