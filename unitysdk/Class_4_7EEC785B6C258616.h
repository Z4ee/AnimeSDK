#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_7EEC785B6C258616_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x1836C8D0)
#define CLASS_4_7EEC785B6C258616_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1836C9A0)
#define CLASS_4_7EEC785B6C258616__CTOR_OFFSET UNITYSDK_OFFSET(0x1836C950)

inline static constexpr unsigned int Class_4_7EEC785B6C258616_TypeDefinitionIndex = 23206;

class Class_4_7EEC785B6C258616 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::RtBehaviorFlag Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7EEC785B6C258616__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7EEC785B6C258616*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7EEC785B6C258616*&))((::PBYTE)hIl2Cpp + CLASS_4_7EEC785B6C258616_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7EEC785B6C258616* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7EEC785B6C258616*))((::PBYTE)hIl2Cpp + CLASS_4_7EEC785B6C258616_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
