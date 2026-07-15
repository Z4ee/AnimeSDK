#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_32B3FE2FD3EEDB80.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

class Class_1_63D18ECF87218619_1;

#define CLASS_3_027BA24C45E4CF9C_METHOD_3_2180D7FF19869697_OFFSET UNITYSDK_OFFSET(0x17A54130)
#define CLASS_3_027BA24C45E4CF9C_METHOD_3_9492DA0AC91D02BD_OFFSET UNITYSDK_OFFSET(0x17A53F50)
#define CLASS_3_027BA24C45E4CF9C_METHOD_3_C1796D25ED645C75_OFFSET UNITYSDK_OFFSET(0x17A54010)
#define CLASS_3_027BA24C45E4CF9C_METHOD_3_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0x17A54380)
#define CLASS_3_027BA24C45E4CF9C_METHOD_3_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x17A543E0)
#define CLASS_3_027BA24C45E4CF9C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A543F0)

inline static constexpr unsigned int Class_3_027BA24C45E4CF9C_TypeDefinitionIndex = 72852;

class Class_3_027BA24C45E4CF9C : public ::Class_2_32B3FE2FD3EEDB80
{
public:
	::RPG::Client::LittleGame::Move::MoveState Field_3_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9492DA0AC91D02BD(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C_METHOD_3_9492DA0AC91D02BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C1796D25ED645C75(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C_METHOD_3_C1796D25ED645C75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2180D7FF19869697(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C_METHOD_3_2180D7FF19869697_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C_METHOD_3_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_3_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_027BA24C45E4CF9C_METHOD_3_F48B6E9D83D3B226_OFFSET))(this);
	}
};
