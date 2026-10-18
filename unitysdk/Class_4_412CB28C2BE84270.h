#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_046FB5921D49EA56.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_4_412CB28C2BE84270_CLEAR_OFFSET UNITYSDK_OFFSET(0xC231910)
#define CLASS_4_412CB28C2BE84270_METHOD_4_0D64B1644A184527_OFFSET UNITYSDK_OFFSET(0xC2319D0)
#define CLASS_4_412CB28C2BE84270_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xC231AC0)
#define CLASS_4_412CB28C2BE84270_METHOD_4_96A71EEBBFD7E4B0_OFFSET UNITYSDK_OFFSET(0xC231720)
#define CLASS_4_412CB28C2BE84270_METHOD_4_E81DE53E52AB01B1_OFFSET UNITYSDK_OFFSET(0xC2317B0)
#define CLASS_4_412CB28C2BE84270_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xC231B30)
#define CLASS_4_412CB28C2BE84270__CTOR_OFFSET UNITYSDK_OFFSET(0xC231B40)

inline static constexpr unsigned int Class_4_412CB28C2BE84270_TypeDefinitionIndex = 76967;

class Class_4_412CB28C2BE84270 : public ::Class_3_046FB5921D49EA56
{
public:
	::RPG::Client::LittleGame::Move::MoveState FBNFGOBKBAK; // 0xD8
	::UnityEngine::Vector3 FLEMHBAGOAI; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_96A71EEBBFD7E4B0(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_METHOD_4_96A71EEBBFD7E4B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_E81DE53E52AB01B1(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_METHOD_4_E81DE53E52AB01B1_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_CLEAR_OFFSET))(this);
	}

	::System::Void Method_4_0D64B1644A184527(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_METHOD_4_0D64B1644A184527_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_F31A7EC67A3AEEF7& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_412CB28C2BE84270_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
