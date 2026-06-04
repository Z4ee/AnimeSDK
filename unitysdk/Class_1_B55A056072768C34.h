#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_264;

#define CLASS_1_B55A056072768C34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E935C0)
#define CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x18E93F90)
#define CLASS_1_B55A056072768C34_METHOD_1_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x18E93720)
#define CLASS_1_B55A056072768C34_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x18E937D0)
#define CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x18E93FA0)
#define CLASS_1_B55A056072768C34__CTOR_OFFSET UNITYSDK_OFFSET(0x18E93480)

inline static constexpr unsigned int Class_1_B55A056072768C34_TypeDefinitionIndex = 40412;

class Class_1_B55A056072768C34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_264* _Graph_k__BackingField; // 0x10
	::RPG::Client::Multithread::SchedulerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::Multithread::SchedulerType a1, ::Class_0_16E4307DCC419505_264* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType, ::Class_0_16E4307DCC419505_264*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_264* get_Graph()
	{
		return ((::Class_0_16E4307DCC419505_264*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET))(this);
	}

	::System::Void set_Graph(::Class_0_16E4307DCC419505_264* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_264*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET))(this, a1);
	}
};
