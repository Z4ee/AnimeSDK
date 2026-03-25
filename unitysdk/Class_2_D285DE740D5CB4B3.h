#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAddBuff; }

#define CLASS_2_D285DE740D5CB4B3_METHOD_2_089E2051307D8E5C_OFFSET UNITYSDK_OFFSET(0x1676CD90)
#define CLASS_2_D285DE740D5CB4B3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1676CEC0)
#define CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1676CD80)

inline static constexpr unsigned int Class_2_D285DE740D5CB4B3_TypeDefinitionIndex = 33165;

class Class_2_D285DE740D5CB4B3 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddBuff* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddBuff* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBuff*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_D285DE740D5CB4B3__CTOR_OFFSET))(this, a1, a2);
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
