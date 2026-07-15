#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableLoopTowerShake; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_919EFFA9A73449BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E6D4C0)
#define CLASS_3_919EFFA9A73449BA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6D490)

inline static constexpr unsigned int Class_3_919EFFA9A73449BA_TypeDefinitionIndex = 52513;

class Class_3_919EFFA9A73449BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableLoopTowerShake*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + CLASS_3_919EFFA9A73449BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_919EFFA9A73449BA_ONTASKBEGIN_OFFSET))(this);
	}
};
