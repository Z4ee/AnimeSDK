#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_246;

#define CLASS_1_B55A056072768C34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A55620)
#define CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x16A55F70)
#define CLASS_1_B55A056072768C34_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x16A55850)
#define CLASS_1_B55A056072768C34_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x16A55790)
#define CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x16A55F80)
#define CLASS_1_B55A056072768C34__CTOR_OFFSET UNITYSDK_OFFSET(0x16A554E0)

inline static constexpr unsigned int Class_1_B55A056072768C34_TypeDefinitionIndex = 33788;

class Class_1_B55A056072768C34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_246* _Graph_k__BackingField; // 0x10
	::RPG::Client::Multithread::SchedulerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::Multithread::SchedulerType a1, ::Class_0_16E4307DCC419505_246* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType, ::Class_0_16E4307DCC419505_246*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_246* get_Graph()
	{
		return ((::Class_0_16E4307DCC419505_246*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET))(this);
	}

	::System::Void set_Graph(::Class_0_16E4307DCC419505_246* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_246*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET))(this, value);
	}
};
