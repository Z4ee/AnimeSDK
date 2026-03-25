#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class AdventureByPropInPosition; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C825573608F550A6_METHOD_3_5784958FCB3B2405_OFFSET UNITYSDK_OFFSET(0x1150C490)
#define CLASS_3_C825573608F550A6_METHOD_3_9067B9EB295F1B81_OFFSET UNITYSDK_OFFSET(0x1150C2F0)
#define CLASS_3_C825573608F550A6_METHOD_3_AC87ED171D71F877_OFFSET UNITYSDK_OFFSET(0x1150C260)
#define CLASS_3_C825573608F550A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1150C580)
#define CLASS_3_C825573608F550A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1150C230)

inline static constexpr unsigned int Class_3_C825573608F550A6_TypeDefinitionIndex = 43555;

class Class_3_C825573608F550A6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureByPropInPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + CLASS_3_C825573608F550A6__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_AC87ED171D71F877()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C825573608F550A6_METHOD_3_AC87ED171D71F877_OFFSET))(this);
	}

	::RPG::MVector3 Method_3_9067B9EB295F1B81()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C825573608F550A6_METHOD_3_9067B9EB295F1B81_OFFSET))(this);
	}

	::System::Single Method_3_5784958FCB3B2405(::RPG::MVector3 a1, ::RPG::MVector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_3_C825573608F550A6_METHOD_3_5784958FCB3B2405_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C825573608F550A6_ONTASKBEGIN_OFFSET))(this);
	}
};
