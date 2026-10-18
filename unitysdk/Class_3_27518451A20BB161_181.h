#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3C99599DF42BA2AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_181_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB1CA0)
#define CLASS_3_27518451A20BB161_181__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB1C70)

inline static constexpr unsigned int Class_3_27518451A20BB161_181_TypeDefinitionIndex = 55033;

class Class_3_27518451A20BB161_181 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3C99599DF42BA2AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3C99599DF42BA2AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3C99599DF42BA2AC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_181__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_181_ONTASKBEGIN_OFFSET))(this);
	}
};
