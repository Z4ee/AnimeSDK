#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_336;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class RemoveModifierByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB8747EF69BCE10D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x897FD40)
#define CLASS_3_BB8747EF69BCE10D_METHOD_3_DCA0D07D90B1A2A3_OFFSET UNITYSDK_OFFSET(0x897FA50)
#define CLASS_3_BB8747EF69BCE10D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x897F8D0)
#define CLASS_3_BB8747EF69BCE10D__CTOR_OFFSET UNITYSDK_OFFSET(0x897F810)
#define CLASS_3_BB8747EF69BCE10D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x897FDB0)

inline static constexpr unsigned int Class_3_BB8747EF69BCE10D_TypeDefinitionIndex = 44280;

class Class_3_BB8747EF69BCE10D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveModifierByBehaviorFlag*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DCA0D07D90B1A2A3(::Class_0_16E4307DCC419505_336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_METHOD_3_DCA0D07D90B1A2A3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB8747EF69BCE10D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
