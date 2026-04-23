#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class RtTriggerAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D635267B345FE9E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A4E030)
#define CLASS_3_D635267B345FE9E5_METHOD_3_63892B72A32C0403_OFFSET UNITYSDK_OFFSET(0x11A4DC70)
#define CLASS_3_D635267B345FE9E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A4D680)
#define CLASS_3_D635267B345FE9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4D5C0)
#define CLASS_3_D635267B345FE9E5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A4E0A0)

inline static constexpr unsigned int Class_3_D635267B345FE9E5_TypeDefinitionIndex = 49661;

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

	::RPG::GameCore::GameEntityList* Method_3_63892B72A32C0403()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D635267B345FE9E5_METHOD_3_63892B72A32C0403_OFFSET))(this);
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
