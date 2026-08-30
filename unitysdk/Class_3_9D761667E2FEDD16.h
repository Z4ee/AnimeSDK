#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_07C3C4D2990C49EE;
class Class_3_DAB936A54D575657;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D761667E2FEDD16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7460E0)
#define CLASS_3_9D761667E2FEDD16_METHOD_3_0C40E517E32C6432_OFFSET UNITYSDK_OFFSET(0xB745CD0)
#define CLASS_3_9D761667E2FEDD16_METHOD_3_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0xB745F80)
#define CLASS_3_9D761667E2FEDD16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB745820)
#define CLASS_3_9D761667E2FEDD16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB746010)
#define CLASS_3_9D761667E2FEDD16__CTOR_OFFSET UNITYSDK_OFFSET(0xB745690)

inline static constexpr unsigned int Class_3_9D761667E2FEDD16_TypeDefinitionIndex = 52936;

class Class_3_9D761667E2FEDD16 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DAB936A54D575657*>
{
public:
	// static const ::System::Int32 JIHKAADEIDB = 0x4; // 0x0
	::Class_2_5436AF4270279182* NFJGMKPFPOC; // 0x28
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x30
	::Class_3_07C3C4D2990C49EE* LELCEGGODOP; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DAB936A54D575657* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DAB936A54D575657*))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_0F2AF21BF93699B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_METHOD_3_0F2AF21BF93699B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0C40E517E32C6432()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_METHOD_3_0C40E517E32C6432_OFFSET))(this);
	}
};
