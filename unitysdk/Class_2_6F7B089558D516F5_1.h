#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A1BF96299409EA6.h"
#include "unitysdk/Struct_2_82A1455F3BBBFC10.h"

class Class_2_29E838C92FC61B7A;
namespace RPG::Client { class UIController; }

#define CLASS_2_6F7B089558D516F5_1_METHOD_2_6AD15D963579A89B_OFFSET UNITYSDK_OFFSET(0x10386E30)
#define CLASS_2_6F7B089558D516F5_1_METHOD_2_C7C9B3A8B3773364_OFFSET UNITYSDK_OFFSET(0x10386C80)
#define CLASS_2_6F7B089558D516F5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10386E20)

inline static constexpr unsigned int Class_2_6F7B089558D516F5_1_TypeDefinitionIndex = 53701;

class Class_2_6F7B089558D516F5_1 : public ::Class_1_5A1BF96299409EA6
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F7B089558D516F5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C7C9B3A8B3773364(::Struct_2_82A1455F3BBBFC10 a1, ::Class_2_29E838C92FC61B7A* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82A1455F3BBBFC10, ::Class_2_29E838C92FC61B7A*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_6F7B089558D516F5_1_METHOD_2_C7C9B3A8B3773364_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6AD15D963579A89B(::Struct_2_82A1455F3BBBFC10 P0, ::Class_2_29E838C92FC61B7A* P1, ::RPG::Client::UIController* P2, ::RPG::Client::UIController* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82A1455F3BBBFC10, ::Class_2_29E838C92FC61B7A*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_6F7B089558D516F5_1_METHOD_2_6AD15D963579A89B_OFFSET))(this, P0, P1, P2, P3);
	}
};
