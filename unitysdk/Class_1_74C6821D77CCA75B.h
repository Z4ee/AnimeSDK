#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/BindingMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_276;
namespace System { class String; }

#define CLASS_1_74C6821D77CCA75B__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC3FB0)

inline static constexpr unsigned int Class_1_74C6821D77CCA75B_TypeDefinitionIndex = 39775;

class Class_1_74C6821D77CCA75B : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_276* Field_1_6; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::Object* Field_1_2; // 0x30
	::System::String* Field_1_3; // 0x38
	::Sofa::Core::BindingMode Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74C6821D77CCA75B__CTOR_OFFSET))(this);
	}
};
