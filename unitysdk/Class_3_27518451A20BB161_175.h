#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3C99599DF42BA2AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAAB00)
#define CLASS_3_27518451A20BB161_175__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAAAD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_175_TypeDefinitionIndex = 55240;

class Class_3_27518451A20BB161_175 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3C99599DF42BA2AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3C99599DF42BA2AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3C99599DF42BA2AC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_175_ONTASKBEGIN_OFFSET))(this);
	}
};
