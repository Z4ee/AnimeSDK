#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_05DC347B4E3AC2E0_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x18339280)
#define CLASS_4_05DC347B4E3AC2E0_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x18339350)
#define CLASS_4_05DC347B4E3AC2E0__CTOR_OFFSET UNITYSDK_OFFSET(0x18339300)

inline static constexpr unsigned int Class_4_05DC347B4E3AC2E0_TypeDefinitionIndex = 23100;

class Class_4_05DC347B4E3AC2E0 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::IdleLiveNodeType Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_05DC347B4E3AC2E0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_05DC347B4E3AC2E0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_05DC347B4E3AC2E0*&))((::PBYTE)hIl2Cpp + CLASS_4_05DC347B4E3AC2E0_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_05DC347B4E3AC2E0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_05DC347B4E3AC2E0*))((::PBYTE)hIl2Cpp + CLASS_4_05DC347B4E3AC2E0_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
