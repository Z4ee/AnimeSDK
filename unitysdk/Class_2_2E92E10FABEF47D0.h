#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleAbsorbTeammates; }

#define CLASS_2_2E92E10FABEF47D0_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18027730)
#define CLASS_2_2E92E10FABEF47D0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180277B0)
#define CLASS_2_2E92E10FABEF47D0__CTOR_OFFSET UNITYSDK_OFFSET(0x18027720)

inline static constexpr unsigned int Class_2_2E92E10FABEF47D0_TypeDefinitionIndex = 38965;

class Class_2_2E92E10FABEF47D0 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAbsorbTeammates* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAbsorbTeammates* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAbsorbTeammates*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_2_2E92E10FABEF47D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E92E10FABEF47D0_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E92E10FABEF47D0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
