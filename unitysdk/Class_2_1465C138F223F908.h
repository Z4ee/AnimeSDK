#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ExitTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1465C138F223F908_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153E0210)
#define CLASS_2_1465C138F223F908_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x153E0510)
#define CLASS_2_1465C138F223F908_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153E0250)
#define CLASS_2_1465C138F223F908_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153E0460)
#define CLASS_2_1465C138F223F908_TICK_OFFSET UNITYSDK_OFFSET(0x153E04B0)
#define CLASS_2_1465C138F223F908__CTOR_OFFSET UNITYSDK_OFFSET(0x153E0200)

inline static constexpr unsigned int Class_2_1465C138F223F908_TypeDefinitionIndex = 58274;

class Class_2_1465C138F223F908 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::ExitTransitionLoadingUI* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}
};
