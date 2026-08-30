#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class AdvOnButtonPressed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6207A7034640E8AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16435FB0)
#define CLASS_2_6207A7034640E8AF_METHOD_2_2F6BFE4C0A1A7911_OFFSET UNITYSDK_OFFSET(0x16436080)
#define CLASS_2_6207A7034640E8AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16435C60)
#define CLASS_2_6207A7034640E8AF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16435DC0)
#define CLASS_2_6207A7034640E8AF_TICK_OFFSET UNITYSDK_OFFSET(0x16436350)
#define CLASS_2_6207A7034640E8AF__CTOR_OFFSET UNITYSDK_OFFSET(0x16435C50)

inline static constexpr unsigned int Class_2_6207A7034640E8AF_TypeDefinitionIndex = 52733;

class Class_2_6207A7034640E8AF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_5F51D4049EA87B7B* AGGELGEEJFN; // 0x20
	::RPG::GameCore::AdvOnButtonPressed* IGHAHBNLIJA; // 0x28

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

	::System::Void Method_2_2F6BFE4C0A1A7911(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_METHOD_2_2F6BFE4C0A1A7911_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6207A7034640E8AF_TICK_OFFSET))(this, a1);
	}
};
