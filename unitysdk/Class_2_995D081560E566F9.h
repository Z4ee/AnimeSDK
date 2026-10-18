#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_995D081560E566F9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1585E350)
#define CLASS_2_995D081560E566F9_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x1585E2E0)
#define CLASS_2_995D081560E566F9_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1585E3B0)
#define CLASS_2_995D081560E566F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1585E480)

inline static constexpr unsigned int Class_2_995D081560E566F9_TypeDefinitionIndex = 65874;

class Class_2_995D081560E566F9 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 GDIMKFNECOK; // 0x20
	::System::Boolean NIKJBBKEFCL; // 0x24
	::System::Boolean LEPAFEFDNEN; // 0x25
	::System::Boolean COILICFBDCD; // 0x26
	::System::Int32 LKELCEMCLED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9__CTOR_OFFSET))(this);
	}

	static ::Class_2_995D081560E566F9* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_995D081560E566F9*(*)())((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_ONEXECUTE_OFFSET))(this);
	}
};
