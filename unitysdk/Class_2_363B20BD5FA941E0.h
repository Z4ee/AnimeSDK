#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_F2DCEB7D2C399774;

#define CLASS_2_363B20BD5FA941E0_CLEAR_OFFSET UNITYSDK_OFFSET(0xA484590)
#define CLASS_2_363B20BD5FA941E0_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xA484520)
#define CLASS_2_363B20BD5FA941E0_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA484630)
#define CLASS_2_363B20BD5FA941E0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4847B0)
#define CLASS_2_363B20BD5FA941E0___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4847C0)
#define CLASS_2_363B20BD5FA941E0___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA484840)

inline static constexpr unsigned int Class_2_363B20BD5FA941E0_TypeDefinitionIndex = 61575;

class Class_2_363B20BD5FA941E0 : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_F2DCEB7D2C399774* Field_2_0; // 0x20
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x2C
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0__CTOR_OFFSET))(this);
	}

	static ::Class_2_363B20BD5FA941E0* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_363B20BD5FA941E0*(*)())((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_363B20BD5FA941E0___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
