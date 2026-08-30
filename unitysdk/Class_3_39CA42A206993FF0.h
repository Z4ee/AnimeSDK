#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD62058F140D4A36.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_39CA42A206993FF0_METHOD_3_8F4F20E98F03648C_OFFSET UNITYSDK_OFFSET(0x16133E20)
#define CLASS_3_39CA42A206993FF0_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x161341D0)
#define CLASS_3_39CA42A206993FF0_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x16134080)
#define CLASS_3_39CA42A206993FF0_METHOD_3_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x16133F90)
#define CLASS_3_39CA42A206993FF0__CTOR_OFFSET UNITYSDK_OFFSET(0x16134220)

inline static constexpr unsigned int Class_3_39CA42A206993FF0_TypeDefinitionIndex = 76580;

class Class_3_39CA42A206993FF0 : public ::Class_2_FD62058F140D4A36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39CA42A206993FF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8F4F20E98F03648C(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_39CA42A206993FF0_METHOD_3_8F4F20E98F03648C_OFFSET))(this, a1);
	}

	::System::Void Method_3_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_39CA42A206993FF0_METHOD_3_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_39CA42A206993FF0_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39CA42A206993FF0_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
