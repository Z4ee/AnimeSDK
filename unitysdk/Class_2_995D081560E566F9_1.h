#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_995D081560E566F9_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17AB33E0)
#define CLASS_2_995D081560E566F9_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x17AB3370)
#define CLASS_2_995D081560E566F9_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17AB3440)
#define CLASS_2_995D081560E566F9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB3510)

inline static constexpr unsigned int Class_2_995D081560E566F9_1_TypeDefinitionIndex = 62944;

class Class_2_995D081560E566F9_1 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x24
	::System::Boolean Field_2_2; // 0x25
	::System::Boolean Field_2_3; // 0x26
	::System::Int32 Field_2_4; // 0x28

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
