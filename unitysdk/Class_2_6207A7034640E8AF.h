#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class AdvOnButtonPressed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6207A7034640E8AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145A7FB0)
#define CLASS_2_6207A7034640E8AF_METHOD_2_5A6E6A9E8375DF48_OFFSET UNITYSDK_OFFSET(0x145A8020)
#define CLASS_2_6207A7034640E8AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145A7DB0)
#define CLASS_2_6207A7034640E8AF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145A7EA0)
#define CLASS_2_6207A7034640E8AF_TICK_OFFSET UNITYSDK_OFFSET(0x145A8210)
#define CLASS_2_6207A7034640E8AF__CTOR_OFFSET UNITYSDK_OFFSET(0x145A7DA0)

inline static constexpr unsigned int Class_2_6207A7034640E8AF_TypeDefinitionIndex = 49059;

class Class_2_6207A7034640E8AF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdvOnButtonPressed* Field_2_1; // 0x20
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

	::System::Void Method_2_5A6E6A9E8375DF48(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_METHOD_2_5A6E6A9E8375DF48_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_TICK_OFFSET))(this, a1);
	}
};
