#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAbility; }

#define CLASS_3_AD5005637B4FC5E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9CB350)
#define CLASS_3_AD5005637B4FC5E0_METHOD_3_1129E595288B9EBA_OFFSET UNITYSDK_OFFSET(0xB9CAF80)
#define CLASS_3_AD5005637B4FC5E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9CA5E0)
#define CLASS_3_AD5005637B4FC5E0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9CA520)

inline static constexpr unsigned int Class_3_AD5005637B4FC5E0_TypeDefinitionIndex = 55901;

class Class_3_AD5005637B4FC5E0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerAbility*>
{
public:
	::Class_1_5F51D4049EA87B7B* BBODFIBDPCG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_3_1129E595288B9EBA()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_METHOD_3_1129E595288B9EBA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_DISPOSE_OFFSET))(this);
	}
};
