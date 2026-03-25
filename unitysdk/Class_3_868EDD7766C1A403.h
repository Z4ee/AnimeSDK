#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearRegardAsAttackType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_868EDD7766C1A403_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C54AB0)
#define CLASS_3_868EDD7766C1A403__CTOR_OFFSET UNITYSDK_OFFSET(0x8C54A80)

inline static constexpr unsigned int Class_3_868EDD7766C1A403_TypeDefinitionIndex = 43995;

class Class_3_868EDD7766C1A403 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearRegardAsAttackType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearRegardAsAttackType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearRegardAsAttackType*))((::PBYTE)hIl2Cpp + CLASS_3_868EDD7766C1A403__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_868EDD7766C1A403_ONTASKBEGIN_OFFSET))(this);
	}
};
