#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAddBuff; }

#define CLASS_2_D285DE740D5CB4B3_METHOD_2_343259340A59888D_OFFSET UNITYSDK_OFFSET(0x1C98CEF0)
#define CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CEE0)

inline static constexpr unsigned int Class_2_D285DE740D5CB4B3_TypeDefinitionIndex = 43095;

class Class_2_D285DE740D5CB4B3 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddBuff* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddBuff* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBuff*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_343259340A59888D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3_METHOD_2_343259340A59888D_OFFSET))(this);
	}
};
