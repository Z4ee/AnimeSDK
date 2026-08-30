#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_FB4BACF38488BC4C_METHOD_3_08E65E7D975CF30D_OFFSET UNITYSDK_OFFSET(0xBE7F200)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_2AE1D22D8089DE35_OFFSET UNITYSDK_OFFSET(0xBE7F320)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBE7F280)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_895F82F2BA148B7B_OFFSET UNITYSDK_OFFSET(0xBE7EE70)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xBE7EC60)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xBE7F5D0)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_FF37EF14CE10C931_OFFSET UNITYSDK_OFFSET(0xBE7ECB0)
#define CLASS_3_FB4BACF38488BC4C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7F710)

inline static constexpr unsigned int Class_3_FB4BACF38488BC4C_TypeDefinitionIndex = 76565;

class Class_3_FB4BACF38488BC4C : public ::Class_2_6A1F98E518DBB516
{
public:
	::System::Single LJLABGMAPBK; // 0x30
	::System::Single JIFNJODLFBG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_FF37EF14CE10C931(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_FF37EF14CE10C931_OFFSET))(this, a1);
	}

	::System::Void Method_3_895F82F2BA148B7B(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_895F82F2BA148B7B_OFFSET))(this, a1);
	}

	::System::Void Method_3_08E65E7D975CF30D(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_08E65E7D975CF30D_OFFSET))(this, a1);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_3_2AE1D22D8089DE35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_2AE1D22D8089DE35_OFFSET))(this, a1);
	}
};
