#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InfiniteWaveInsertMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B839452CD52D50A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E5B830)
#define CLASS_3_6B839452CD52D50A__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5B800)

inline static constexpr unsigned int Class_3_6B839452CD52D50A_TypeDefinitionIndex = 55329;

class Class_3_6B839452CD52D50A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InfiniteWaveInsertMonster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveInsertMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveInsertMonster*))((::PBYTE)hIl2Cpp + CLASS_3_6B839452CD52D50A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B839452CD52D50A_ONTASKBEGIN_OFFSET))(this);
	}
};
