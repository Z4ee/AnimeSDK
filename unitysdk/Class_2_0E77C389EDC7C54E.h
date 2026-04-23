#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F01FD2FEBF10FE40_1.h"

class Class_0_16E4307DCC419505_465;
class Class_1_05E595DC72CB83CA;

#define CLASS_2_0E77C389EDC7C54E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1187BBD0)
#define CLASS_2_0E77C389EDC7C54E_METHOD_2_13C23D899769D865_OFFSET UNITYSDK_OFFSET(0x1187BB30)
#define CLASS_2_0E77C389EDC7C54E__CTOR_OFFSET UNITYSDK_OFFSET(0x1187BC50)
#define CLASS_2_0E77C389EDC7C54E___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1187BC60)

inline static constexpr unsigned int Class_2_0E77C389EDC7C54E_TypeDefinitionIndex = 50024;

class Class_2_0E77C389EDC7C54E : public ::Class_1_F01FD2FEBF10FE40_1
{
public:
	::Class_1_05E595DC72CB83CA* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E77C389EDC7C54E__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_13C23D899769D865(::Class_0_16E4307DCC419505_465* a1, ::Class_1_05E595DC72CB83CA* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_465*, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_2_0E77C389EDC7C54E_METHOD_2_13C23D899769D865_OFFSET))(a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E77C389EDC7C54E_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E77C389EDC7C54E___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
