#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class ST_Side_ListenFindTrotterState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2FBD37EA44C9254E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF19F60)
#define CLASS_3_2FBD37EA44C9254E_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xAF1A2C0)
#define CLASS_3_2FBD37EA44C9254E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF19E50)
#define CLASS_3_2FBD37EA44C9254E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF19F10)
#define CLASS_3_2FBD37EA44C9254E_TICK_OFFSET UNITYSDK_OFFSET(0xAF19FB0)
#define CLASS_3_2FBD37EA44C9254E__CTOR_OFFSET UNITYSDK_OFFSET(0xAF19E20)
#define CLASS_3_2FBD37EA44C9254E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF1A350)
#define CLASS_3_2FBD37EA44C9254E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAF1A3A0)

inline static constexpr unsigned int Class_3_2FBD37EA44C9254E_TypeDefinitionIndex = 48846;

class Class_3_2FBD37EA44C9254E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ListenFindTrotterState*>
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_2_A0580152EB393340* Field_3_1; // 0x28
	::Class_2_469A56953483CA0D* Field_3_2; // 0x30
	::System::Single Field_3_3; // 0x38
	::System::Boolean Field_3_4; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ListenFindTrotterState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ListenFindTrotterState*))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2FBD37EA44C9254E___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
