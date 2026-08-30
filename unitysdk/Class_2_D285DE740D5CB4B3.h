#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleAddBuff; }

#define CLASS_2_D285DE740D5CB4B3_METHOD_2_089E2051307D8E5C_OFFSET UNITYSDK_OFFSET(0x1C4256D0)
#define CLASS_2_D285DE740D5CB4B3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C4257F0)
#define CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4256C0)

inline static constexpr unsigned int Class_2_D285DE740D5CB4B3_TypeDefinitionIndex = 41470;

class Class_2_D285DE740D5CB4B3 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddBuff* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddBuff* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBuff*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_089E2051307D8E5C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3_METHOD_2_089E2051307D8E5C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
