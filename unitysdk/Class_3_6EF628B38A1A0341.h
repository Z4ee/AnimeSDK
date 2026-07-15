#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6EF628B38A1A0341_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16870610)
#define CLASS_3_6EF628B38A1A0341__CTOR_OFFSET UNITYSDK_OFFSET(0x168705E0)

inline static constexpr unsigned int Class_3_6EF628B38A1A0341_TypeDefinitionIndex = 52651;

class Class_3_6EF628B38A1A0341 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockHP*))((::PBYTE)hIl2Cpp + CLASS_3_6EF628B38A1A0341__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6EF628B38A1A0341_ONTASKBEGIN_OFFSET))(this);
	}
};
