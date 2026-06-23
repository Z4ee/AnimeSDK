#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B_METHOD_1_39D52E8F8694A2C7_OFFSET UNITYSDK_OFFSET(0x18B82020)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x18B82100)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82010)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_5BA1279412429F3B_TypeDefinitionIndex = 63040;

class Class_2_2F3C7D4EFC74D485_Class_1_5BA1279412429F3B : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_39D52E8F8694A2C7(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B_METHOD_1_39D52E8F8694A2C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_5BA1279412429F3B_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}
};
