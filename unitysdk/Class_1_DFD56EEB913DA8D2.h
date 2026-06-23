#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_32F1A149203B6F1A;

#define CLASS_1_DFD56EEB913DA8D2_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1A165CC0)
#define CLASS_1_DFD56EEB913DA8D2_METHOD_1_C6E189DB7C68A13E_OFFSET UNITYSDK_OFFSET(0x1A1658A0)
#define CLASS_1_DFD56EEB913DA8D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A165890)

inline static constexpr unsigned int Class_1_DFD56EEB913DA8D2_TypeDefinitionIndex = 62942;

class Class_1_DFD56EEB913DA8D2 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::Class_3_32F1A149203B6F1A* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6E189DB7C68A13E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2_METHOD_1_C6E189DB7C68A13E_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFD56EEB913DA8D2_METHOD_1_367B9590522079D1_OFFSET))(this);
	}
};
