#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A28F8E73F7FE2B65.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1EDBB1A8571EAC0C_METHOD_1_22F5E8FAA9DE0A72_OFFSET UNITYSDK_OFFSET(0x16F7D780)
#define CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_1_OFFSET UNITYSDK_OFFSET(0x16F7D720)
#define CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_2_OFFSET UNITYSDK_OFFSET(0x16F7D9D0)
#define CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16F7D6C0)
#define CLASS_1_1EDBB1A8571EAC0C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F7D680)
#define CLASS_1_1EDBB1A8571EAC0C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7D660)

inline static constexpr unsigned int Class_1_1EDBB1A8571EAC0C_TypeDefinitionIndex = 56706;

class Class_1_1EDBB1A8571EAC0C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22
	::System::Boolean Field_1_5; // 0x23
	::System::Int32 Field_1_6; // 0x24
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_8; // 0x2C
	::System::Int32 Field_1_9; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CE0803574BB66D7_1(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_22F5E8FAA9DE0A72(::System::Single a1, ::Struct_2_A28F8E73F7FE2B65 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C_METHOD_1_22F5E8FAA9DE0A72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8CE0803574BB66D7_2(::Struct_2_A28F8E73F7FE2B65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A28F8E73F7FE2B65))((::PBYTE)hIl2Cpp + CLASS_1_1EDBB1A8571EAC0C_METHOD_1_8CE0803574BB66D7_2_OFFSET))(this, a1);
	}
};
