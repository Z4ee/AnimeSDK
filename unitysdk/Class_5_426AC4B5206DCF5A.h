#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_C047E2E99EE27133.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAF6F107F0961F34;
namespace RPG::GameCore { class FloatCurve; }

#define CLASS_5_426AC4B5206DCF5A_METHOD_5_226D93C99AEA6053_OFFSET UNITYSDK_OFFSET(0x15883C30)
#define CLASS_5_426AC4B5206DCF5A_METHOD_5_25197F970BC50BE9_OFFSET UNITYSDK_OFFSET(0x158834B0)
#define CLASS_5_426AC4B5206DCF5A_METHOD_5_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x158833D0)
#define CLASS_5_426AC4B5206DCF5A_METHOD_5_9703A99CA8852569_OFFSET UNITYSDK_OFFSET(0x15883AA0)
#define CLASS_5_426AC4B5206DCF5A_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15883A10)
#define CLASS_5_426AC4B5206DCF5A_METHOD_5_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x158847A0)
#define CLASS_5_426AC4B5206DCF5A__CTOR_OFFSET UNITYSDK_OFFSET(0x158847B0)

inline static constexpr unsigned int Class_5_426AC4B5206DCF5A_TypeDefinitionIndex = 73058;

class Class_5_426AC4B5206DCF5A : public ::Class_4_C047E2E99EE27133
{
public:
	::RPG::GameCore::FloatCurve* Field_5_0; // 0x128
	::UnityEngine::Vector3 Field_5_1; // 0x130
	::System::Single Field_5_2; // 0x13C
	::System::Single Field_5_3; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_5022DB1DC5AA8CB4(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_5_25197F970BC50BE9(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_25197F970BC50BE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_5_9703A99CA8852569(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_9703A99CA8852569_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_226D93C99AEA6053(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_226D93C99AEA6053_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_5_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_426AC4B5206DCF5A_METHOD_5_F48B6E9D83D3B226_OFFSET))(this);
	}
};
