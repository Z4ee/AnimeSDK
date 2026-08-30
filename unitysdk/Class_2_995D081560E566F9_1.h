#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_995D081560E566F9_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x178CB4A0)
#define CLASS_2_995D081560E566F9_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x178CB430)
#define CLASS_2_995D081560E566F9_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x178CB500)
#define CLASS_2_995D081560E566F9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178CB5D0)

inline static constexpr unsigned int Class_2_995D081560E566F9_1_TypeDefinitionIndex = 65929;

class Class_2_995D081560E566F9_1 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 LKELCEMCLED; // 0x20
	::System::Boolean COILICFBDCD; // 0x24
	::System::Boolean NIKJBBKEFCL; // 0x25
	::System::Boolean LEPAFEFDNEN; // 0x26
	::System::Int32 GDIMKFNECOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_995D081560E566F9_1* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_995D081560E566F9_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_995D081560E566F9_1_ONEXECUTE_OFFSET))(this);
	}
};
