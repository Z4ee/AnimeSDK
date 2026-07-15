#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class OwnerEntityAddAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ED2B7E4C659EE03E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1585FDD0)
#define CLASS_2_ED2B7E4C659EE03E_METHOD_2_4384D4E1D98F4564_OFFSET UNITYSDK_OFFSET(0x1585FFD0)
#define CLASS_2_ED2B7E4C659EE03E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1585FE10)
#define CLASS_2_ED2B7E4C659EE03E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158602D0)
#define CLASS_2_ED2B7E4C659EE03E_TICK_OFFSET UNITYSDK_OFFSET(0x15860320)
#define CLASS_2_ED2B7E4C659EE03E__CTOR_OFFSET UNITYSDK_OFFSET(0x1585FDC0)

inline static constexpr unsigned int Class_2_ED2B7E4C659EE03E_TypeDefinitionIndex = 52748;

class Class_2_ED2B7E4C659EE03E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OwnerEntityAddAbility* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OwnerEntityAddAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E_TICK_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* Method_2_4384D4E1D98F4564()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED2B7E4C659EE03E_METHOD_2_4384D4E1D98F4564_OFFSET))(this);
	}
};
