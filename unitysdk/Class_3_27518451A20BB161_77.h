#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_9;
namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_77_METHOD_3_D3DAD6A7339E5595_OFFSET UNITYSDK_OFFSET(0x156FD300)
#define CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156FD250)
#define CLASS_3_27518451A20BB161_77__CTOR_OFFSET UNITYSDK_OFFSET(0x156FD220)

inline static constexpr unsigned int Class_3_27518451A20BB161_77_TypeDefinitionIndex = 53216;

class Class_3_27518451A20BB161_77 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* Method_3_D3DAD6A7339E5595()
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77_METHOD_3_D3DAD6A7339E5595_OFFSET))(this);
	}
};
