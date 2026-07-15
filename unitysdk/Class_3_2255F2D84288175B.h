#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_32B3FE2FD3EEDB80.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_63D18ECF87218619_1;
class Class_1_BAF6F107F0961F34;

#define CLASS_3_2255F2D84288175B_METHOD_3_2180D7FF19869697_OFFSET UNITYSDK_OFFSET(0x15876410)
#define CLASS_3_2255F2D84288175B_METHOD_3_28A344257FC02244_OFFSET UNITYSDK_OFFSET(0x158757B0)
#define CLASS_3_2255F2D84288175B_METHOD_3_2E1DE66A633992FF_OFFSET UNITYSDK_OFFSET(0x158761B0)
#define CLASS_3_2255F2D84288175B_METHOD_3_94330EAB96796247_OFFSET UNITYSDK_OFFSET(0x15875800)
#define CLASS_3_2255F2D84288175B_METHOD_3_B8CFE05A0852A165_OFFSET UNITYSDK_OFFSET(0x15875A50)
#define CLASS_3_2255F2D84288175B_METHOD_3_C44A6AF98DCD41D4_OFFSET UNITYSDK_OFFSET(0x15875CD0)
#define CLASS_3_2255F2D84288175B_METHOD_3_F385090BF8DD2EE6_OFFSET UNITYSDK_OFFSET(0x15876660)
#define CLASS_3_2255F2D84288175B_METHOD_3_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x158766C0)
#define CLASS_3_2255F2D84288175B__CCTOR_OFFSET UNITYSDK_OFFSET(0x158766F0)
#define CLASS_3_2255F2D84288175B__CTOR_OFFSET UNITYSDK_OFFSET(0x158766D0)

inline static constexpr unsigned int Class_3_2255F2D84288175B_TypeDefinitionIndex = 72853;

class Class_3_2255F2D84288175B : public ::Class_2_32B3FE2FD3EEDB80
{
public:
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2255F2D84288175B_TypeDefinitionIndex)->GetStaticField(0x7A40);
	}
	::System::Boolean Field_3_1; // 0xA8
	::System::Single Field_3_2; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B__CCTOR_OFFSET))();
	}

	::System::Void Method_3_28A344257FC02244(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_28A344257FC02244_OFFSET))(this, a1);
	}

	::System::Void Method_3_94330EAB96796247(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_94330EAB96796247_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B8CFE05A0852A165(::Class_1_63D18ECF87218619_1* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_B8CFE05A0852A165_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C44A6AF98DCD41D4(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_C44A6AF98DCD41D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2E1DE66A633992FF(::Class_1_63D18ECF87218619_1* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_2E1DE66A633992FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2180D7FF19869697(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_2180D7FF19869697_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F385090BF8DD2EE6(::Class_1_63D18ECF87218619_1* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619_1*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_F385090BF8DD2EE6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_3_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2255F2D84288175B_METHOD_3_F48B6E9D83D3B226_OFFSET))(this);
	}
};
