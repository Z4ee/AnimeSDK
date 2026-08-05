#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07_METHOD_1_2DA90F020EB3A373_OFFSET UNITYSDK_OFFSET(0xF225DE0)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07_METHOD_1_43AACAA17BE2C6A2_OFFSET UNITYSDK_OFFSET(0xF225D90)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07__CTOR_OFFSET UNITYSDK_OFFSET(0xF225D80)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_F274819C1B143D07_TypeDefinitionIndex = 56868;

class Class_2_A7165A858F83C5DB_Class_1_F274819C1B143D07 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_36*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::MoleMole::ELocalPlayType Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_43AACAA17BE2C6A2(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07_METHOD_1_43AACAA17BE2C6A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DA90F020EB3A373(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_F274819C1B143D07_METHOD_1_2DA90F020EB3A373_OFFSET))(this, a1);
	}
};
