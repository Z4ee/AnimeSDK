#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_71AAF74E84472882.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define CLASS_6_EAE92B54E656C139_METHOD_6_2E6C66435257D73D_OFFSET UNITYSDK_OFFSET(0x8743C60)
#define CLASS_6_EAE92B54E656C139_METHOD_6_668DABF69B95751C_OFFSET UNITYSDK_OFFSET(0x8743DD0)
#define CLASS_6_EAE92B54E656C139_METHOD_6_713D03BCAE9CCDB6_OFFSET UNITYSDK_OFFSET(0x8743CC0)
#define CLASS_6_EAE92B54E656C139_METHOD_6_9E1857A4A46BBFFC_OFFSET UNITYSDK_OFFSET(0x8743DE0)
#define CLASS_6_EAE92B54E656C139_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x8743BF0)
#define CLASS_6_EAE92B54E656C139_METHOD_6_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0x8743D40)
#define CLASS_6_EAE92B54E656C139_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x8743BE0)
#define CLASS_6_EAE92B54E656C139__CTOR_OFFSET UNITYSDK_OFFSET(0x8743D20)

inline static constexpr unsigned int Class_6_EAE92B54E656C139_TypeDefinitionIndex = 62679;

class Class_6_EAE92B54E656C139 : public ::Class_5_71AAF74E84472882
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}

	::System::Single Method_6_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_6_2E6C66435257D73D(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_2E6C66435257D73D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_6_713D03BCAE9CCDB6(::RPG::GameCore::FiveDimTrampolineConfig* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_713D03BCAE9CCDB6_OFFSET))(this, a1);
	}

	::System::Single Method_6_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_DB2B44FABAA6A6B5_OFFSET))(this);
	}

	::System::Void Method_6_668DABF69B95751C(::Struct_2_F31A7EC67A3AEEF7& P0, ::RPG::Client::LittleGame::Move::MoveState P1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_668DABF69B95751C_OFFSET))(this, P0, P1);
	}

	::System::Single Method_6_9E1857A4A46BBFFC(::RPG::GameCore::FiveDimTrampolineConfig* P0)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_EAE92B54E656C139_METHOD_6_9E1857A4A46BBFFC_OFFSET))(this, P0);
	}
};
