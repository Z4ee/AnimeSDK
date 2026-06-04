#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class RtTriggerAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D635267B345FE9E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C2E00)
#define CLASS_3_D635267B345FE9E5_METHOD_3_1129E595288B9EBA_OFFSET UNITYSDK_OFFSET(0x134C2A30)
#define CLASS_3_D635267B345FE9E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C2400)
#define CLASS_3_D635267B345FE9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2340)
#define CLASS_3_D635267B345FE9E5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C2E70)

inline static constexpr unsigned int Class_3_D635267B345FE9E5_TypeDefinitionIndex = 50328;

class Class_3_D635267B345FE9E5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtTriggerAbility*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtTriggerAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtTriggerAbility*))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_3_1129E595288B9EBA()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5_METHOD_3_1129E595288B9EBA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
