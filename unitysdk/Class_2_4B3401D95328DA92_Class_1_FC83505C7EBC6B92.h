#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/Struct_2_ABF9DCB0C904F609.h"
#include "unitysdk/System/Object.h"

class Class_2_4B3401D95328DA92;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_FC83505C7EBC6B92__CTOR_OFFSET UNITYSDK_OFFSET(0x1120A850)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_FC83505C7EBC6B92_TypeDefinitionIndex = 68312;

class Class_2_4B3401D95328DA92_Class_1_FC83505C7EBC6B92 : public ::System::Object
{
public:
	::Struct_2_76CCAEE20B3AE57C Field_1_6; // 0x10
	::System::Action_1<::Struct_2_ABF9DCB0C904F609>* Field_1_1; // 0x28
	::Class_2_4B3401D95328DA92* Field_1_7; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_FC83505C7EBC6B92__CTOR_OFFSET))(this);
	}
};
