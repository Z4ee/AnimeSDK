#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_658A057C873E8FC8_METHOD_1_EA45D8A57EFC91C2_OFFSET UNITYSDK_OFFSET(0x11CE0BF0)
#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_658A057C873E8FC8__CTOR_OFFSET UNITYSDK_OFFSET(0x11CE0BE0)

inline static constexpr unsigned int Class_2_0CF4D4D2C441CE5C_Class_1_658A057C873E8FC8_TypeDefinitionIndex = 82101;

class Class_2_0CF4D4D2C441CE5C_Class_1_658A057C873E8FC8 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_658A057C873E8FC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA45D8A57EFC91C2(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_658A057C873E8FC8_METHOD_1_EA45D8A57EFC91C2_OFFSET))(this, a1);
	}
};
