#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CA68150416BED9E5.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_880A898607AC8265_METHOD_3_108241A2FA85E7E9_OFFSET UNITYSDK_OFFSET(0xB25E870)
#define CLASS_3_880A898607AC8265_METHOD_3_1E01B0A97CB45672_OFFSET UNITYSDK_OFFSET(0xB25E800)
#define CLASS_3_880A898607AC8265_METHOD_3_314529EC8BCA8BB3_OFFSET UNITYSDK_OFFSET(0xB25DBB0)
#define CLASS_3_880A898607AC8265_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xB25E880)
#define CLASS_3_880A898607AC8265_METHOD_3_808A56A256840289_OFFSET UNITYSDK_OFFSET(0xB25DC40)
#define CLASS_3_880A898607AC8265_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xB25E790)
#define CLASS_3_880A898607AC8265_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xB25E1D0)
#define CLASS_3_880A898607AC8265__CTOR_OFFSET UNITYSDK_OFFSET(0xB25E7E0)

inline static constexpr unsigned int Class_3_880A898607AC8265_TypeDefinitionIndex = 62745;

class Class_3_880A898607AC8265 : public ::Class_2_CA68150416BED9E5
{
public:
	::System::Boolean Field_3_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_314529EC8BCA8BB3(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_314529EC8BCA8BB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_1E01B0A97CB45672(::RPG::Client::LittleGame::FiveDim::PropMoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_1E01B0A97CB45672_OFFSET))(this, P0);
	}

	::System::Void Method_3_108241A2FA85E7E9(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_108241A2FA85E7E9_OFFSET))(this, P0);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_880A898607AC8265_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
