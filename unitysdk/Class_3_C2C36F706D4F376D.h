#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class RtOwnerEntityAddAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2C36F706D4F376D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178392F0)
#define CLASS_3_C2C36F706D4F376D_METHOD_3_4384D4E1D98F4564_OFFSET UNITYSDK_OFFSET(0x17838FF0)
#define CLASS_3_C2C36F706D4F376D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17838E50)
#define CLASS_3_C2C36F706D4F376D__CTOR_OFFSET UNITYSDK_OFFSET(0x17838E20)

inline static constexpr unsigned int Class_3_C2C36F706D4F376D_TypeDefinitionIndex = 51348;

class Class_3_C2C36F706D4F376D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtOwnerEntityAddAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtOwnerEntityAddAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtOwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + CLASS_3_C2C36F706D4F376D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2C36F706D4F376D_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* Method_3_4384D4E1D98F4564()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2C36F706D4F376D_METHOD_3_4384D4E1D98F4564_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2C36F706D4F376D_DISPOSE_OFFSET))(this);
	}
};
