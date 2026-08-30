#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_C047E2E99EE27133.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace RPG::GameCore { class FiveDimMusicJumpConfig; }

#define CLASS_5_9BCFF364CC09295F_METHOD_5_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xBC4B7A0)
#define CLASS_5_9BCFF364CC09295F_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBC4B8B0)
#define CLASS_5_9BCFF364CC09295F_METHOD_5_65F0174AC9380F11_OFFSET UNITYSDK_OFFSET(0xBC4B740)
#define CLASS_5_9BCFF364CC09295F_METHOD_5_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0xBC4B5F0)
#define CLASS_5_9BCFF364CC09295F_METHOD_5_E7648BEEC9D8170E_OFFSET UNITYSDK_OFFSET(0xBC4B4E0)
#define CLASS_5_9BCFF364CC09295F_METHOD_5_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xBC4B4D0)
#define CLASS_5_9BCFF364CC09295F__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4BA00)

inline static constexpr unsigned int Class_5_9BCFF364CC09295F_TypeDefinitionIndex = 76513;

class Class_5_9BCFF364CC09295F : public ::Class_4_C047E2E99EE27133
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_5_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_F48B6E9D83D3B226_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimMusicJumpConfig* Method_5_E7648BEEC9D8170E()
	{
		return ((::RPG::GameCore::FiveDimMusicJumpConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_E7648BEEC9D8170E_OFFSET))(this);
	}

	::System::Single Method_5_D3EA5C9E7ED3E40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_D3EA5C9E7ED3E40D_OFFSET))(this);
	}

	::System::Void Method_5_65F0174AC9380F11(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_65F0174AC9380F11_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9BCFF364CC09295F_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}
};
