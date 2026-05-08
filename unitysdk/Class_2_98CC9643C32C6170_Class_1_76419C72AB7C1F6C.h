#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_76419C72AB7C1F6C_METHOD_1_985C50024C555FF6_OFFSET UNITYSDK_OFFSET(0x104B83F0)
#define CLASS_2_98CC9643C32C6170_CLASS_1_76419C72AB7C1F6C__CTOR_OFFSET UNITYSDK_OFFSET(0x104B83E0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_76419C72AB7C1F6C_TypeDefinitionIndex = 66460;

class Class_2_98CC9643C32C6170_Class_1_76419C72AB7C1F6C : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_76419C72AB7C1F6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_985C50024C555FF6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_76419C72AB7C1F6C_METHOD_1_985C50024C555FF6_OFFSET))(this, a1);
	}
};
