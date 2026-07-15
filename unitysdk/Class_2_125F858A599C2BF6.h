#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_69C8DF7E6F4510F2.h"
#include "unitysdk/Struct_2_82A1455F3BBBFC10.h"

class Class_2_29E838C92FC61B7A;
namespace RPG::Client { class UIController; }

#define CLASS_2_125F858A599C2BF6_METHOD_2_8CAC13693741AA88_OFFSET UNITYSDK_OFFSET(0x16F1C060)
#define CLASS_2_125F858A599C2BF6__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1C1B0)

inline static constexpr unsigned int Class_2_125F858A599C2BF6_TypeDefinitionIndex = 61694;

class Class_2_125F858A599C2BF6 : public ::Class_1_69C8DF7E6F4510F2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_125F858A599C2BF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CAC13693741AA88(::Struct_2_82A1455F3BBBFC10 a1, ::Class_2_29E838C92FC61B7A* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82A1455F3BBBFC10, ::Class_2_29E838C92FC61B7A*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_125F858A599C2BF6_METHOD_2_8CAC13693741AA88_OFFSET))(this, a1, a2, a3, a4);
	}
};
