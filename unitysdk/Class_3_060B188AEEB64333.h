#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchCaseByAttackDamageType; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_060B188AEEB64333_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174F9350)
#define CLASS_3_060B188AEEB64333_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x174F9600)
#define CLASS_3_060B188AEEB64333__CTOR_OFFSET UNITYSDK_OFFSET(0x174F90F0)

inline static constexpr unsigned int Class_3_060B188AEEB64333_TypeDefinitionIndex = 53156;

class Class_3_060B188AEEB64333 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByAttackDamageType*>
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_3_07C3C4D2990C49EE*>* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByAttackDamageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByAttackDamageType*))((::PBYTE)hIl2Cpp + CLASS_3_060B188AEEB64333__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_060B188AEEB64333_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_060B188AEEB64333_ONTASKBEGIN_OFFSET))(this);
	}
};
