#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5BD3EF046502B972_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16F5E910)
#define CLASS_1_5BD3EF046502B972_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x16F5E940)
#define CLASS_1_5BD3EF046502B972_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16F5E990)
#define CLASS_1_5BD3EF046502B972_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16F5E920)
#define CLASS_1_5BD3EF046502B972_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16F5E930)
#define CLASS_1_5BD3EF046502B972_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16F5E900)
#define CLASS_1_5BD3EF046502B972__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5E8F0)

inline static constexpr unsigned int Class_1_5BD3EF046502B972_TypeDefinitionIndex = 85150;

class Class_1_5BD3EF046502B972 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x14
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5BD3EF046502B972_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}
};
