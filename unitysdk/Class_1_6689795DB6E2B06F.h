#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_6689795DB6E2B06F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19197410)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_131BDB0412632141_OFFSET UNITYSDK_OFFSET(0x19197280)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_39755F5F1B7D2B4D_OFFSET UNITYSDK_OFFSET(0x19196D40)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19196DD0)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19197420)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_82019E9D67870CD1_OFFSET UNITYSDK_OFFSET(0x19196CB0)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_A59855BC33AF4A4F_OFFSET UNITYSDK_OFFSET(0x19196C00)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x19197400)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_D5723A5F28279C9D_OFFSET UNITYSDK_OFFSET(0x191971E0)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_EC32FB0B0A391623_OFFSET UNITYSDK_OFFSET(0x19196E30)
#define CLASS_1_6689795DB6E2B06F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x191973F0)
#define CLASS_1_6689795DB6E2B06F__CTOR_OFFSET UNITYSDK_OFFSET(0x19197430)

inline static constexpr unsigned int Class_1_6689795DB6E2B06F_TypeDefinitionIndex = 55819;

class Class_1_6689795DB6E2B06F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x10
	::System::String* LIJNCANLLMC; // 0x18
	::System::String* EBCJLEJPGPC; // 0x20
	::System::Boolean PMNBLDFOJJO; // 0x28
	::System::Single MLNKKEDOHMF; // 0x2C
	::System::Single HAMLEPGAIFC; // 0x30
	::System::Single PCOBIKOHGKB; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F__CTOR_OFFSET))(this);
	}

	static ::Class_1_6689795DB6E2B06F* Method_1_A59855BC33AF4A4F(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_1_6689795DB6E2B06F*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_A59855BC33AF4A4F_OFFSET))(a1);
	}

	static ::Class_1_6689795DB6E2B06F* Method_1_82019E9D67870CD1(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_1_6689795DB6E2B06F*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_82019E9D67870CD1_OFFSET))(a1);
	}

	::System::Void Method_1_39755F5F1B7D2B4D(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_39755F5F1B7D2B4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_EC32FB0B0A391623(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_EC32FB0B0A391623_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D5723A5F28279C9D(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_D5723A5F28279C9D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_131BDB0412632141(::System::String* a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_131BDB0412632141_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6689795DB6E2B06F_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
