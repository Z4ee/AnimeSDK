#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMechanismBarPhase; }

#define CLASS_2_93FC07E1BA235B3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x891F0F0)
#define CLASS_2_93FC07E1BA235B3C_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x891F1C0)
#define CLASS_2_93FC07E1BA235B3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x891F130)
#define CLASS_2_93FC07E1BA235B3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x891F200)
#define CLASS_2_93FC07E1BA235B3C_TICK_OFFSET UNITYSDK_OFFSET(0x891F250)
#define CLASS_2_93FC07E1BA235B3C__CTOR_OFFSET UNITYSDK_OFFSET(0x891F0E0)

inline static constexpr unsigned int Class_2_93FC07E1BA235B3C_TypeDefinitionIndex = 44715;

class Class_2_93FC07E1BA235B3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::WaitMechanismBarPhase* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMechanismBarPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMechanismBarPhase*))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_93FC07E1BA235B3C_TICK_OFFSET))(this, a1);
	}
};
