#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16EF45480D36329B;
namespace System { class Action; }

#define CLASS_1_16EF45480D36329B_CLASS_1_ACD0971464970EF0_1_METHOD_1_5D2EEBAF48B01F0D_OFFSET UNITYSDK_OFFSET(0x179A6590)
#define CLASS_1_16EF45480D36329B_CLASS_1_ACD0971464970EF0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179A6580)

inline static constexpr unsigned int Class_1_16EF45480D36329B_Class_1_ACD0971464970EF0_1_TypeDefinitionIndex = 10588;

class Class_1_16EF45480D36329B_Class_1_ACD0971464970EF0_1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_16EF45480D36329B* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16EF45480D36329B_CLASS_1_ACD0971464970EF0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5D2EEBAF48B01F0D(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_16EF45480D36329B_CLASS_1_ACD0971464970EF0_1_METHOD_1_5D2EEBAF48B01F0D_OFFSET))(this, a1);
	}
};
