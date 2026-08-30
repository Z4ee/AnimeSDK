#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_D1002630455E15C8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace RPG::GameCore { class FiveDimMusicJumpConfig; }
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define CLASS_6_96AC714510E04C56_METHOD_6_713D03BCAE9CCDB6_OFFSET UNITYSDK_OFFSET(0x16B2A350)
#define CLASS_6_96AC714510E04C56_METHOD_6_AEC5F03FF5DF5A34_OFFSET UNITYSDK_OFFSET(0x16B2A2F0)
#define CLASS_6_96AC714510E04C56_METHOD_6_D3EA5C9E7ED3E40D_OFFSET UNITYSDK_OFFSET(0x16B2A1A0)
#define CLASS_6_96AC714510E04C56_METHOD_6_E7648BEEC9D8170E_OFFSET UNITYSDK_OFFSET(0x16B2A090)
#define CLASS_6_96AC714510E04C56_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x16B2A080)
#define CLASS_6_96AC714510E04C56__CTOR_OFFSET UNITYSDK_OFFSET(0x16B2A3B0)

inline static constexpr unsigned int Class_6_96AC714510E04C56_TypeDefinitionIndex = 76515;

class Class_6_96AC714510E04C56 : public ::Class_5_D1002630455E15C8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimMusicJumpConfig* Method_6_E7648BEEC9D8170E()
	{
		return ((::RPG::GameCore::FiveDimMusicJumpConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_E7648BEEC9D8170E_OFFSET))(this);
	}

	::System::Single Method_6_D3EA5C9E7ED3E40D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_D3EA5C9E7ED3E40D_OFFSET))(this);
	}

	::System::Void Method_6_AEC5F03FF5DF5A34(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_AEC5F03FF5DF5A34_OFFSET))(this, a1, a2);
	}

	::System::Single Method_6_713D03BCAE9CCDB6(::RPG::GameCore::FiveDimTrampolineConfig* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_713D03BCAE9CCDB6_OFFSET))(this, a1);
	}
};
