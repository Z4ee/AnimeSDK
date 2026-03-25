#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C662E2F2A633F51D.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_310;
class Class_0_16E4307DCC419505_315;
class Class_1_E0DD280A885A630F;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_2_75D32E05326D489C_METHOD_2_C035DD136EA9D353_OFFSET UNITYSDK_OFFSET(0xF37ACC0)
#define CLASS_2_75D32E05326D489C_METHOD_2_D9F5295DDC8EAB8A_OFFSET UNITYSDK_OFFSET(0xF37ABE0)
#define CLASS_2_75D32E05326D489C__CTOR_OFFSET UNITYSDK_OFFSET(0xF37AB50)

inline static constexpr unsigned int Class_2_75D32E05326D489C_TypeDefinitionIndex = 40142;

class Class_2_75D32E05326D489C : public ::Class_1_C662E2F2A633F51D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D9F5295DDC8EAB8A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C_METHOD_2_D9F5295DDC8EAB8A_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_310* Method_2_C035DD136EA9D353(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::OutputType a2, ::Class_0_16E4307DCC419505_315* a3)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_315*))((::PBYTE)hIl2Cpp + CLASS_2_75D32E05326D489C_METHOD_2_C035DD136EA9D353_OFFSET))(this, a1, a2, a3);
	}
};
