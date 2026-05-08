#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C_METHOD_1_43AACAA17BE2C6A2_OFFSET UNITYSDK_OFFSET(0x11258F50)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x11258E30)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C__CTOR_OFFSET UNITYSDK_OFFSET(0x11258E20)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_87C24CA77D7D073C_TypeDefinitionIndex = 50078;

class Class_2_A7165A858F83C5DB_Class_1_87C24CA77D7D073C : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_11*>* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::MoleMole::ELocalPlayType Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}

	::System::Void Method_1_43AACAA17BE2C6A2(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_87C24CA77D7D073C_METHOD_1_43AACAA17BE2C6A2_OFFSET))(this, a1);
	}
};
