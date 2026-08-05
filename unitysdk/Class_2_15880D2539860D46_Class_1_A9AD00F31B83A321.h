#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19440480)
#define CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_CF0080D9D0A33EA9_OFFSET UNITYSDK_OFFSET(0x19440490)
#define CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x19440470)
#define CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321__CTOR_OFFSET UNITYSDK_OFFSET(0x19440460)

inline static constexpr unsigned int Class_2_15880D2539860D46_Class_1_A9AD00F31B83A321_TypeDefinitionIndex = 83990;

class Class_2_15880D2539860D46_Class_1_A9AD00F31B83A321 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x14
	::System::Single Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_CF0080D9D0A33EA9(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15880D2539860D46_CLASS_1_A9AD00F31B83A321_METHOD_1_CF0080D9D0A33EA9_OFFSET))(this, a1, a2, a3);
	}
};
