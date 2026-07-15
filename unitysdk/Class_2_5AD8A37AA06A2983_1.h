#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class String; }

#define CLASS_2_5AD8A37AA06A2983_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B9B590)
#define CLASS_2_5AD8A37AA06A2983_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x18B9B520)
#define CLASS_2_5AD8A37AA06A2983_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18B9B5E0)
#define CLASS_2_5AD8A37AA06A2983_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9B640)

inline static constexpr unsigned int Class_2_5AD8A37AA06A2983_1_TypeDefinitionIndex = 62956;

class Class_2_5AD8A37AA06A2983_1 : public ::Class_1_3713064DEE761936
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_5AD8A37AA06A2983_1* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_5AD8A37AA06A2983_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1_ONEXECUTE_OFFSET))(this);
	}
};
