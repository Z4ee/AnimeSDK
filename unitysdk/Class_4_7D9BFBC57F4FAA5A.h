#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C77F9F259E170FB8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

#define CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x170B5520)
#define CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_81204BED51956B4E_OFFSET UNITYSDK_OFFSET(0x170B5490)
#define CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x170B5760)
#define CLASS_4_7D9BFBC57F4FAA5A__CTOR_OFFSET UNITYSDK_OFFSET(0x170B5770)

inline static constexpr unsigned int Class_4_7D9BFBC57F4FAA5A_TypeDefinitionIndex = 76519;

class Class_4_7D9BFBC57F4FAA5A : public ::Class_3_C77F9F259E170FB8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D9BFBC57F4FAA5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_81204BED51956B4E(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_81204BED51956B4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_19844080C13BA28F_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7D9BFBC57F4FAA5A_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
