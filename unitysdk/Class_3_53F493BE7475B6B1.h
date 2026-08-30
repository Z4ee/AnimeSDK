#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DebateReturnTestimony; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_53F493BE7475B6B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9562E0)
#define CLASS_3_53F493BE7475B6B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9562B0)

inline static constexpr unsigned int Class_3_53F493BE7475B6B1_TypeDefinitionIndex = 53001;

class Class_3_53F493BE7475B6B1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DebateReturnTestimony*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateReturnTestimony* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateReturnTestimony*))((::PBYTE)hIl2Cpp + CLASS_3_53F493BE7475B6B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F493BE7475B6B1_ONTASKBEGIN_OFFSET))(this);
	}
};
