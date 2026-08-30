#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroInterruptAllProjectiles; }

#define CLASS_3_5A5D1EEF51D47445_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15837930)
#define CLASS_3_5A5D1EEF51D47445__CTOR_OFFSET UNITYSDK_OFFSET(0x15837900)

inline static constexpr unsigned int Class_3_5A5D1EEF51D47445_TypeDefinitionIndex = 59106;

class Class_3_5A5D1EEF51D47445 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroInterruptAllProjectiles*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + CLASS_3_5A5D1EEF51D47445__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A5D1EEF51D47445_ONTASKBEGIN_OFFSET))(this);
	}
};
