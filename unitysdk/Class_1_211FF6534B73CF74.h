#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_135;
class Class_1_48D56DACBE4271BC;
class Class_2_4BE21148C8967B21_1;

#define CLASS_1_211FF6534B73CF74_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x18DADF90)
#define CLASS_1_211FF6534B73CF74_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x18DADB90)
#define CLASS_1_211FF6534B73CF74__CTOR_OFFSET UNITYSDK_OFFSET(0x18DADB30)

inline static constexpr unsigned int Class_1_211FF6534B73CF74_TypeDefinitionIndex = 49588;

class Class_1_211FF6534B73CF74 : public ::System::Object
{
public:
	::Class_1_48D56DACBE4271BC* Field_1_7; // 0x10
	::Class_0_16E4307DCC419505_135* Field_1_6; // 0x18
	::Class_2_4BE21148C8967B21_1* Field_1_1; // 0x20
	::Class_2_4BE21148C8967B21_1* Field_1_2; // 0x28
	::Class_2_4BE21148C8967B21_1* Field_1_0; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + CLASS_1_211FF6534B73CF74__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_211FF6534B73CF74_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_211FF6534B73CF74_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
	}
};
