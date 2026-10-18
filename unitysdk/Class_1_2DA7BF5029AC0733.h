#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1277;
namespace RPG::Client { class UIController; }

#define CLASS_1_2DA7BF5029AC0733_METHOD_1_76FFA2EFAF6EF83C_1_OFFSET UNITYSDK_OFFSET(0x1647A450)
#define CLASS_1_2DA7BF5029AC0733_METHOD_1_76FFA2EFAF6EF83C_OFFSET UNITYSDK_OFFSET(0x1647A360)
#define CLASS_1_2DA7BF5029AC0733__CTOR_OFFSET UNITYSDK_OFFSET(0x1647A540)

inline static constexpr unsigned int Class_1_2DA7BF5029AC0733_TypeDefinitionIndex = 73125;

class Class_1_2DA7BF5029AC0733 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DA7BF5029AC0733__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1277* Method_1_76FFA2EFAF6EF83C(::RPG::Client::UIController* a1)
	{
		return ((::Class_0_16E4307DCC419505_1277*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2DA7BF5029AC0733_METHOD_1_76FFA2EFAF6EF83C_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1277* Method_1_76FFA2EFAF6EF83C_1(::RPG::Client::UIController* a1)
	{
		return ((::Class_0_16E4307DCC419505_1277*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2DA7BF5029AC0733_METHOD_1_76FFA2EFAF6EF83C_1_OFFSET))(this, a1);
	}
};
