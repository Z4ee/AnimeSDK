#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetWavingBlockControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D871B18661A7FA3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18250070)
#define CLASS_3_D871B18661A7FA3C__CTOR_OFFSET UNITYSDK_OFFSET(0x18250040)

inline static constexpr unsigned int Class_3_D871B18661A7FA3C_TypeDefinitionIndex = 50117;

class Class_3_D871B18661A7FA3C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetWavingBlockControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + CLASS_3_D871B18661A7FA3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D871B18661A7FA3C_ONTASKBEGIN_OFFSET))(this);
	}
};
