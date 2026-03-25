#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAddBullet; }

#define CLASS_2_A792FBECECF4D1D6_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16814CB0)
#define CLASS_2_A792FBECECF4D1D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16814D40)
#define CLASS_2_A792FBECECF4D1D6__CTOR_OFFSET UNITYSDK_OFFSET(0x16814CA0)

inline static constexpr unsigned int Class_2_A792FBECECF4D1D6_TypeDefinitionIndex = 33174;

class Class_2_A792FBECECF4D1D6 : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddBullet* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddBullet* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBullet*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_A792FBECECF4D1D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792FBECECF4D1D6_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792FBECECF4D1D6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
