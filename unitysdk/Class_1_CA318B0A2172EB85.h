#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A28F8E73F7FE2B65.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_1_OFFSET UNITYSDK_OFFSET(0x13AED880)
#define CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_2_OFFSET UNITYSDK_OFFSET(0x13AEDA10)
#define CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x13AED820)
#define CLASS_1_CA318B0A2172EB85_METHOD_1_9703A99CA8852569_OFFSET UNITYSDK_OFFSET(0x13AED8E0)
#define CLASS_1_CA318B0A2172EB85_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13AED7E0)
#define CLASS_1_CA318B0A2172EB85__CTOR_OFFSET UNITYSDK_OFFSET(0x13AED7C0)

inline static constexpr unsigned int Class_1_CA318B0A2172EB85_TypeDefinitionIndex = 55469;

class Class_1_CA318B0A2172EB85 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_5; // 0x26
	::System::Boolean Field_1_6; // 0x27
	::System::Int32 Field_1_7; // 0x28
	::System::Single Field_1_8; // 0x2C
	::System::Int32 Field_1_9; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7_1(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9703A99CA8852569(::System::Single a1, ::Struct_2_A28F8E73F7FE2B65 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85_METHOD_1_9703A99CA8852569_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CE0803574BB66D7_2(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_CA318B0A2172EB85_METHOD_1_8CE0803574BB66D7_2_OFFSET))(this, a1);
	}
};
