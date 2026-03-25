#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ExitTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1465C138F223F908_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10541700)
#define CLASS_2_1465C138F223F908_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x10541950)
#define CLASS_2_1465C138F223F908_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10541740)
#define CLASS_2_1465C138F223F908_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105418A0)
#define CLASS_2_1465C138F223F908_TICK_OFFSET UNITYSDK_OFFSET(0x105418F0)
#define CLASS_2_1465C138F223F908__CTOR_OFFSET UNITYSDK_OFFSET(0x105416F0)

inline static constexpr unsigned int Class_2_1465C138F223F908_TypeDefinitionIndex = 46894;

class Class_2_1465C138F223F908 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ExitTransitionLoadingUI* Field_2_0; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

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

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}
};
