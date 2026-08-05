#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x13E493B0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407_METHOD_1_A8AD38E351B4E3BA_OFFSET UNITYSDK_OFFSET(0x13E492D0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407__CTOR_OFFSET UNITYSDK_OFFSET(0x13E492C0)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_A7E5B7621D5B6407_TypeDefinitionIndex = 43438;

class Class_2_2F3C7D4EFC74D485_Class_1_A7E5B7621D5B6407 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_6; // 0x10
	::Class_2_2F3C7D4EFC74D485* Field_1_1; // 0x18
	::System::Action* Field_1_7; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8AD38E351B4E3BA(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407_METHOD_1_A8AD38E351B4E3BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_A7E5B7621D5B6407_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}
};
