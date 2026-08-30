#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_F63E984E4BA70BD4;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_86EE7616A7B48F86_EVALUATE_OFFSET UNITYSDK_OFFSET(0x180A2F30)
#define CLASS_3_86EE7616A7B48F86_METHOD_3_7D3F7C87F5BA60FE_OFFSET UNITYSDK_OFFSET(0x180A3180)
#define CLASS_3_86EE7616A7B48F86_METHOD_3_861B310874B5F50A_OFFSET UNITYSDK_OFFSET(0x180A3320)
#define CLASS_3_86EE7616A7B48F86__CTOR_OFFSET UNITYSDK_OFFSET(0x180A2F00)

inline static constexpr unsigned int Class_3_86EE7616A7B48F86_TypeDefinitionIndex = 52826;

class Class_3_86EE7616A7B48F86 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_F63E984E4BA70BD4*>
{
public:
	::Class_4_F63E984E4BA70BD4* IGHAHBNLIJA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F63E984E4BA70BD4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F63E984E4BA70BD4*))((::PBYTE)hIl2Cpp + CLASS_3_86EE7616A7B48F86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86EE7616A7B48F86_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_7D3F7C87F5BA60FE(::RPG::Client::ChenLingBattle::Grid* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Grid*))((::PBYTE)hIl2Cpp + CLASS_3_86EE7616A7B48F86_METHOD_3_7D3F7C87F5BA60FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_861B310874B5F50A(::RPG::Client::ChenLingBattle::HandCard* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + CLASS_3_86EE7616A7B48F86_METHOD_3_861B310874B5F50A_OFFSET))(this, a1);
	}
};
