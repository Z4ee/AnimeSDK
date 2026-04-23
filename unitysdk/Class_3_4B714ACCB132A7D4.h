#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class ParkourSetCountDownAnimSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4B714ACCB132A7D4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9676460)
#define CLASS_3_4B714ACCB132A7D4__CTOR_OFFSET UNITYSDK_OFFSET(0x9676430)

inline static constexpr unsigned int Class_3_4B714ACCB132A7D4_TypeDefinitionIndex = 48929;

class Class_3_4B714ACCB132A7D4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::ParkourSetCountDownAnimSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ParkourSetCountDownAnimSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_4B714ACCB132A7D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B714ACCB132A7D4_ONTASKBEGIN_OFFSET))(this);
	}
};
