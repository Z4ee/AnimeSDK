#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAbility; }

#define CLASS_3_AD5005637B4FC5E0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x874EAB0)
#define CLASS_3_AD5005637B4FC5E0_METHOD_3_63892B72A32C0403_OFFSET UNITYSDK_OFFSET(0x874E6F0)
#define CLASS_3_AD5005637B4FC5E0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x874DDB0)
#define CLASS_3_AD5005637B4FC5E0__CTOR_OFFSET UNITYSDK_OFFSET(0x874DCF0)
#define CLASS_3_AD5005637B4FC5E0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x874EB20)

inline static constexpr unsigned int Class_3_AD5005637B4FC5E0_TypeDefinitionIndex = 44626;

class Class_3_AD5005637B4FC5E0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerAbility*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_3_63892B72A32C0403()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_METHOD_3_63892B72A32C0403_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD5005637B4FC5E0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
