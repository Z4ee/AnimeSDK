#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvIsometricZoomListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E4859DF9DEE77BB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AB6F80)
#define CLASS_2_E4859DF9DEE77BB2_METHOD_2_1C23BCB7390EB895_OFFSET UNITYSDK_OFFSET(0x16AB70F0)
#define CLASS_2_E4859DF9DEE77BB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16AB6D70)
#define CLASS_2_E4859DF9DEE77BB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16AB6E70)
#define CLASS_2_E4859DF9DEE77BB2_TICK_OFFSET UNITYSDK_OFFSET(0x16AB7420)
#define CLASS_2_E4859DF9DEE77BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB6C80)

inline static constexpr unsigned int Class_2_E4859DF9DEE77BB2_TypeDefinitionIndex = 50004;

class Class_2_E4859DF9DEE77BB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::AdvIsometricZoomListener* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1C23BCB7390EB895(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_METHOD_2_1C23BCB7390EB895_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_TICK_OFFSET))(this, a1);
	}
};
