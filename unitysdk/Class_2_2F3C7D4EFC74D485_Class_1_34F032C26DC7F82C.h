#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_39D52E8F8694A2C7_OFFSET UNITYSDK_OFFSET(0x14CF6D00)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_634412D8B2E4DF6D_OFFSET UNITYSDK_OFFSET(0x14CF6DE0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_8FEF0F372530136D_OFFSET UNITYSDK_OFFSET(0x14CF7070)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF6CF0)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_34F032C26DC7F82C_TypeDefinitionIndex = 49441;

class Class_2_2F3C7D4EFC74D485_Class_1_34F032C26DC7F82C : public ::System::Object
{
public:
	::System::Func_2<::Class_1_BE6BF7909AD9D940*, ::System::Boolean>* Field_1_3; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_4; // 0x18
	::System::Action* Field_1_2; // 0x20
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_39D52E8F8694A2C7(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_39D52E8F8694A2C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_634412D8B2E4DF6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_634412D8B2E4DF6D_OFFSET))(this);
	}

	::System::Boolean Method_1_8FEF0F372530136D(::Class_1_BE6BF7909AD9D940* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_34F032C26DC7F82C_METHOD_1_8FEF0F372530136D_OFFSET))(this, a1);
	}
};
