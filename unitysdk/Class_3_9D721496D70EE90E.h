#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CustomMonsterWaveInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D721496D70EE90E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1434AEA0)
#define CLASS_3_9D721496D70EE90E__CTOR_OFFSET UNITYSDK_OFFSET(0x1434AE70)

inline static constexpr unsigned int Class_3_9D721496D70EE90E_TypeDefinitionIndex = 51483;

class Class_3_9D721496D70EE90E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CustomMonsterWaveInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + CLASS_3_9D721496D70EE90E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D721496D70EE90E_ONTASKBEGIN_OFFSET))(this);
	}
};
