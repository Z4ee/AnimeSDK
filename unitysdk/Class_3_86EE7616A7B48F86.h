#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_280EADA080C75A9D;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_86EE7616A7B48F86_EVALUATE_OFFSET UNITYSDK_OFFSET(0x96AF220)
#define CLASS_3_86EE7616A7B48F86_METHOD_3_7D3F7C87F5BA60FE_OFFSET UNITYSDK_OFFSET(0x96AF450)
#define CLASS_3_86EE7616A7B48F86_METHOD_3_861B310874B5F50A_OFFSET UNITYSDK_OFFSET(0x96AF590)
#define CLASS_3_86EE7616A7B48F86__CTOR_OFFSET UNITYSDK_OFFSET(0x96AF1F0)

inline static constexpr unsigned int Class_3_86EE7616A7B48F86_TypeDefinitionIndex = 48521;

class Class_3_86EE7616A7B48F86 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_280EADA080C75A9D*>
{
public:
	::Class_4_280EADA080C75A9D* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_280EADA080C75A9D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_280EADA080C75A9D*))((::PBYTE)hIl2Cpp + CLASS_3_86EE7616A7B48F86__CTOR_OFFSET))(this, a1, a2);
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
