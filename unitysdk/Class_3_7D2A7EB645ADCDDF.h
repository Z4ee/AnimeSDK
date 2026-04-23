#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_1_3CE169FA8918702D;
class Class_4_E64B13FE10E998AF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D2A7EB645ADCDDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A9D670)
#define CLASS_3_7D2A7EB645ADCDDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A9D4D0)
#define CLASS_3_7D2A7EB645ADCDDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A9D770)
#define CLASS_3_7D2A7EB645ADCDDF_TICK_OFFSET UNITYSDK_OFFSET(0x12A9D6C0)
#define CLASS_3_7D2A7EB645ADCDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9D4A0)
#define CLASS_3_7D2A7EB645ADCDDF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A9D7C0)
#define CLASS_3_7D2A7EB645ADCDDF___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12A9D810)

inline static constexpr unsigned int Class_3_7D2A7EB645ADCDDF_TypeDefinitionIndex = 49499;

class Class_3_7D2A7EB645ADCDDF : public ::RPG::GameCore::ST_RtTask_1<::Class_4_E64B13FE10E998AF*>
{
public:
	::Class_1_3CE169FA8918702D* Field_3_0; // 0x28
	::RPG::GameCore::FixPoint Field_3_2; // 0x30
	::RPG::GameCore::FixPoint Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_E64B13FE10E998AF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_E64B13FE10E998AF*))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
