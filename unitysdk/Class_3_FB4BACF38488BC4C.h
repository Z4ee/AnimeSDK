#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_FB4BACF38488BC4C_METHOD_3_08E65E7D975CF30D_OFFSET UNITYSDK_OFFSET(0xBD06F40)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xBD06FC0)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_6A8EC1C1458586F1_OFFSET UNITYSDK_OFFSET(0xBD070B0)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xBD06A10)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xBD07300)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_D51C6F54E50EEB20_OFFSET UNITYSDK_OFFSET(0xBD06C20)
#define CLASS_3_FB4BACF38488BC4C_METHOD_3_FF37EF14CE10C931_OFFSET UNITYSDK_OFFSET(0xBD06A60)
#define CLASS_3_FB4BACF38488BC4C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD07390)

inline static constexpr unsigned int Class_3_FB4BACF38488BC4C_TypeDefinitionIndex = 77035;

class Class_3_FB4BACF38488BC4C : public ::Class_2_6A1F98E518DBB516
{
public:
	::System::Single JIFNJODLFBG; // 0x30
	::System::Single LJLABGMAPBK; // 0x34

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

	::System::Void Method_3_D51C6F54E50EEB20(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_D51C6F54E50EEB20_OFFSET))(this, a1);
	}

	::System::Void Method_3_08E65E7D975CF30D(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_08E65E7D975CF30D_OFFSET))(this, a1);
	}

	::System::Void Method_3_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_6A8EC1C1458586F1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FB4BACF38488BC4C_METHOD_3_6A8EC1C1458586F1_OFFSET))(this, a1);
	}
};
