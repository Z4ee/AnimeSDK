#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PopText;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_0090B9E35698F573_METHOD_1_04349BAD038A876C_OFFSET UNITYSDK_OFFSET(0x10D110F0)
#define CLASS_1_0090B9E35698F573_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x10D10DD0)
#define CLASS_1_0090B9E35698F573_METHOD_1_14C041293D62EA4F_OFFSET UNITYSDK_OFFSET(0x10D11220)
#define CLASS_1_0090B9E35698F573_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x10D10E20)
#define CLASS_1_0090B9E35698F573_METHOD_1_CB8CF89038C44C8A_1_OFFSET UNITYSDK_OFFSET(0x10D10D70)
#define CLASS_1_0090B9E35698F573_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x10D10CF0)
#define CLASS_1_0090B9E35698F573_METHOD_1_F573CA5C1ACC3010_OFFSET UNITYSDK_OFFSET(0x10D111D0)
#define CLASS_1_0090B9E35698F573__CTOR_OFFSET UNITYSDK_OFFSET(0x10D10CE0)

inline static constexpr unsigned int Class_1_0090B9E35698F573_TypeDefinitionIndex = 90958;

class Class_1_0090B9E35698F573 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Action* Field_1_11; // 0x20
	::PopText* Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_04349BAD038A876C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_04349BAD038A876C_OFFSET))(this);
	}

	::System::Void Method_1_F573CA5C1ACC3010(::PopText* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PopText*))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_F573CA5C1ACC3010_OFFSET))(this, a1);
	}

	::System::Void Method_1_14C041293D62EA4F(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_14C041293D62EA4F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CB8CF89038C44C8A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0090B9E35698F573_METHOD_1_CB8CF89038C44C8A_1_OFFSET))(this);
	}
};
