#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_71AAF74E84472882.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define CLASS_6_96AC714510E04C56_METHOD_6_643890DC812168F8_OFFSET UNITYSDK_OFFSET(0xA7FDB50)
#define CLASS_6_96AC714510E04C56_METHOD_6_713D03BCAE9CCDB6_OFFSET UNITYSDK_OFFSET(0xA7FDA40)
#define CLASS_6_96AC714510E04C56_METHOD_6_AEC5F03FF5DF5A34_OFFSET UNITYSDK_OFFSET(0xA7FD9E0)
#define CLASS_6_96AC714510E04C56_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA7FD970)
#define CLASS_6_96AC714510E04C56_METHOD_6_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0xA7FDAC0)
#define CLASS_6_96AC714510E04C56_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xA7FD960)
#define CLASS_6_96AC714510E04C56_METHOD_6_FA08288582243F04_OFFSET UNITYSDK_OFFSET(0xA7FDB40)
#define CLASS_6_96AC714510E04C56__CTOR_OFFSET UNITYSDK_OFFSET(0xA7FDAA0)

inline static constexpr unsigned int Class_6_96AC714510E04C56_TypeDefinitionIndex = 71513;

class Class_6_96AC714510E04C56 : public ::Class_5_71AAF74E84472882
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

	::System::Single Method_6_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_6_AEC5F03FF5DF5A34(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_AEC5F03FF5DF5A34_OFFSET))(this, a1, a2);
	}

	::System::Single Method_6_713D03BCAE9CCDB6(::RPG::GameCore::FiveDimTrampolineConfig* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_713D03BCAE9CCDB6_OFFSET))(this, a1);
	}

	::System::Single Method_6_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_DB2B44FABAA6A6B5_OFFSET))(this);
	}

	::System::Void Method_6_FA08288582243F04(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_FA08288582243F04_OFFSET))(this, a1, a2);
	}

	::System::Single Method_6_643890DC812168F8(::RPG::GameCore::FiveDimTrampolineConfig* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + CLASS_6_96AC714510E04C56_METHOD_6_643890DC812168F8_OFFSET))(this, a1);
	}
};
