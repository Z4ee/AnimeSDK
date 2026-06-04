#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_44E98D8B63E395F0.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"

class Class_0_16E4307DCC419505_331;
class Class_0_16E4307DCC419505_336;
class Class_1_9B39BF4ECCAD98D9;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_2_4473CEA6A5A6B118_METHOD_2_66C73486327BC05D_OFFSET UNITYSDK_OFFSET(0x13A15DD0)
#define CLASS_2_4473CEA6A5A6B118_METHOD_2_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x13A15CF0)
#define CLASS_2_4473CEA6A5A6B118__CTOR_OFFSET UNITYSDK_OFFSET(0x13A15C60)

inline static constexpr unsigned int Class_2_4473CEA6A5A6B118_TypeDefinitionIndex = 46634;

class Class_2_4473CEA6A5A6B118 : public ::Class_1_44E98D8B63E395F0
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118_METHOD_2_7D9FB684EF17D12D_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_331* Method_2_66C73486327BC05D(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::OutputType a2, ::Class_0_16E4307DCC419505_336* a3)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_2_4473CEA6A5A6B118_METHOD_2_66C73486327BC05D_OFFSET))(this, a1, a2, a3);
	}
};
