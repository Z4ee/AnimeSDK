#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleActionAgain; }

#define CLASS_2_0919AB9367A16B87_METHOD_2_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0x1683F100)
#define CLASS_2_0919AB9367A16B87_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1683F270)
#define CLASS_2_0919AB9367A16B87__CTOR_OFFSET UNITYSDK_OFFSET(0x1683F0F0)

inline static constexpr unsigned int Class_2_0919AB9367A16B87_TypeDefinitionIndex = 33168;

class Class_2_0919AB9367A16B87 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleActionAgain* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleActionAgain* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleActionAgain*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_0919AB9367A16B87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_14F96CE90F77CBB9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0919AB9367A16B87_METHOD_2_14F96CE90F77CBB9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0919AB9367A16B87_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
