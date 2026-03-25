#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class AdvOnButtonPressed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6207A7034640E8AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117969C0)
#define CLASS_2_6207A7034640E8AF_METHOD_2_D49D4C04CB5F23A5_OFFSET UNITYSDK_OFFSET(0x11796A30)
#define CLASS_2_6207A7034640E8AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117967E0)
#define CLASS_2_6207A7034640E8AF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117968C0)
#define CLASS_2_6207A7034640E8AF_TICK_OFFSET UNITYSDK_OFFSET(0x11796C00)
#define CLASS_2_6207A7034640E8AF__CTOR_OFFSET UNITYSDK_OFFSET(0x117967D0)

inline static constexpr unsigned int Class_2_6207A7034640E8AF_TypeDefinitionIndex = 42472;

class Class_2_6207A7034640E8AF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvOnButtonPressed* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOnButtonPressed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOnButtonPressed*))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D49D4C04CB5F23A5(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_METHOD_2_D49D4C04CB5F23A5_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_TICK_OFFSET))(this, a1);
	}
};
