#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_1_D9413DC99216F54F;
class Class_4_3AC824F38612E8A5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D2A7EB645ADCDDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC458640)
#define CLASS_3_7D2A7EB645ADCDDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC458490)
#define CLASS_3_7D2A7EB645ADCDDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC458780)
#define CLASS_3_7D2A7EB645ADCDDF_TICK_OFFSET UNITYSDK_OFFSET(0xC458690)
#define CLASS_3_7D2A7EB645ADCDDF__CTOR_OFFSET UNITYSDK_OFFSET(0xC458460)

inline static constexpr unsigned int Class_3_7D2A7EB645ADCDDF_TypeDefinitionIndex = 53932;

class Class_3_7D2A7EB645ADCDDF : public ::RPG::GameCore::ST_RtTask_1<::Class_4_3AC824F38612E8A5*>
{
public:
	::Class_1_D9413DC99216F54F* EEGKNKIBLHB; // 0x28
	::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x30
	::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3AC824F38612E8A5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3AC824F38612E8A5*))((::PBYTE)hIl2Cpp + CLASS_3_7D2A7EB645ADCDDF__CTOR_OFFSET))(this, a1, a2);
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
};
