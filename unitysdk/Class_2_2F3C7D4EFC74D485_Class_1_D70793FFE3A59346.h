#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
class Class_3_48C7D152812F0173;
class Class_3_5B0D01C92C1E671E_10;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346_METHOD_1_E2FF15FEB8A840D7_OFFSET UNITYSDK_OFFSET(0x134F9660)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346__CTOR_OFFSET UNITYSDK_OFFSET(0x134F9650)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_D70793FFE3A59346_TypeDefinitionIndex = 49435;

class Class_2_2F3C7D4EFC74D485_Class_1_D70793FFE3A59346 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_DD0DD411D84DAED3<::Class_3_48C7D152812F0173*>*>* Field_1_2; // 0x10
	::Class_2_2F3C7D4EFC74D485* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_3_5B0D01C92C1E671E_10*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2FF15FEB8A840D7(::Class_1_DD0DD411D84DAED3<::Class_3_48C7D152812F0173*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD0DD411D84DAED3<::Class_3_48C7D152812F0173*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346_METHOD_1_E2FF15FEB8A840D7_OFFSET))(this, a1);
	}
};
