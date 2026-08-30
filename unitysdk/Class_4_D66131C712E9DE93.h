#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C77F9F259E170FB8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

class Class_1_BAF6F107F0961F34;

#define CLASS_4_D66131C712E9DE93_METHOD_4_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x18768750)
#define CLASS_4_D66131C712E9DE93_METHOD_4_0CC78D4556EB7518_OFFSET UNITYSDK_OFFSET(0x187689C0)
#define CLASS_4_D66131C712E9DE93_METHOD_4_20D5A570AD34056E_OFFSET UNITYSDK_OFFSET(0x187687F0)
#define CLASS_4_D66131C712E9DE93_METHOD_4_368E9DBFB1C31641_OFFSET UNITYSDK_OFFSET(0x18768A80)
#define CLASS_4_D66131C712E9DE93_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x18768B70)
#define CLASS_4_D66131C712E9DE93__CTOR_OFFSET UNITYSDK_OFFSET(0x18768B80)

inline static constexpr unsigned int Class_4_D66131C712E9DE93_TypeDefinitionIndex = 76525;

class Class_4_D66131C712E9DE93 : public ::Class_3_C77F9F259E170FB8
{
public:
	::System::Single LHIEMNLCKIF; // 0xD8
	::System::Single NKECOHCCFHP; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0AB718BEE9EA06D7(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93_METHOD_4_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_20D5A570AD34056E(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93_METHOD_4_20D5A570AD34056E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_0CC78D4556EB7518(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93_METHOD_4_0CC78D4556EB7518_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_368E9DBFB1C31641(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93_METHOD_4_368E9DBFB1C31641_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D66131C712E9DE93_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
