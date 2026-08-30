#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_21.h"

class Class_0_16E4307DCC419505_915;
class Class_1_A0C0ADCC8A5FDABE;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define CLASS_2_8A577A4B8BACFE40_METHOD_2_216A287DCE48F88F_OFFSET UNITYSDK_OFFSET(0x188F6C60)
#define CLASS_2_8A577A4B8BACFE40_METHOD_2_3052F8DC88425CB0_OFFSET UNITYSDK_OFFSET(0x188F6CE0)
#define CLASS_2_8A577A4B8BACFE40__CTOR_OFFSET UNITYSDK_OFFSET(0x188F6CD0)

inline static constexpr unsigned int Class_2_8A577A4B8BACFE40_TypeDefinitionIndex = 74343;

class Class_2_8A577A4B8BACFE40 : public ::Class_1_F9FBCC956DFCF137_21
{
public:
	::System::Void _ctor(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40__CTOR_OFFSET))(this, a1);
	}

	static ::Class_0_16E4307DCC419505_915* Method_2_216A287DCE48F88F(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::Class_0_16E4307DCC419505_915*(*)(::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40_METHOD_2_216A287DCE48F88F_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_3052F8DC88425CB0()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40_METHOD_2_3052F8DC88425CB0_OFFSET))(this);
	}
};
