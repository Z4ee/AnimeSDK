#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnablePerformanceMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_81496A320D2289DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99EEC10)
#define CLASS_2_81496A320D2289DD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x99EEE40)
#define CLASS_2_81496A320D2289DD_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x99EECA0)
#define CLASS_2_81496A320D2289DD_ONSKIP_OFFSET UNITYSDK_OFFSET(0x99EEE50)
#define CLASS_2_81496A320D2289DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99EEC50)
#define CLASS_2_81496A320D2289DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99EED90)
#define CLASS_2_81496A320D2289DD_TICK_OFFSET UNITYSDK_OFFSET(0x99EEDE0)
#define CLASS_2_81496A320D2289DD__CTOR_OFFSET UNITYSDK_OFFSET(0x99EEC00)

inline static constexpr unsigned int Class_2_81496A320D2289DD_TypeDefinitionIndex = 48676;

class Class_2_81496A320D2289DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnablePerformanceMode* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnablePerformanceMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnablePerformanceMode*))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81496A320D2289DD_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
