#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_3_4666E61F66433B1E;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_151E7C0141B26258_METHOD_1_44CCF0A4F0ACA63A_OFFSET UNITYSDK_OFFSET(0x14787490)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_151E7C0141B26258__CTOR_OFFSET UNITYSDK_OFFSET(0x14787480)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_151E7C0141B26258_TypeDefinitionIndex = 49455;

class Class_2_2F3C7D4EFC74D485_Class_1_151E7C0141B26258 : public ::System::Object
{
public:
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_151E7C0141B26258__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_44CCF0A4F0ACA63A(::Class_1_DD0DD411D84DAED3<::Class_3_4666E61F66433B1E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD0DD411D84DAED3<::Class_3_4666E61F66433B1E*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_151E7C0141B26258_METHOD_1_44CCF0A4F0ACA63A_OFFSET))(this, a1);
	}
};
