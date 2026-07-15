#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_284;

#define CLASS_1_B55A056072768C34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2F8660)
#define CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1D2F8DC0)
#define CLASS_1_B55A056072768C34_METHOD_1_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x1D2F8810)
#define CLASS_1_B55A056072768C34_METHOD_1_F629B26C5D2B092E_OFFSET UNITYSDK_OFFSET(0x1D2F88C0)
#define CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1D2F8DD0)
#define CLASS_1_B55A056072768C34__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F85E0)

inline static constexpr unsigned int Class_1_B55A056072768C34_TypeDefinitionIndex = 41227;

class Class_1_B55A056072768C34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_284* _Graph_k__BackingField; // 0x10
	::RPG::Client::Multithread::SchedulerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::Multithread::SchedulerType a1, ::Class_0_16E4307DCC419505_284* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType, ::Class_0_16E4307DCC419505_284*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_3FAAA518D3F433CC_OFFSET))(this);
	}

	::System::Void Method_1_F629B26C5D2B092E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_F629B26C5D2B092E_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_284* get_Graph()
	{
		return ((::Class_0_16E4307DCC419505_284*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET))(this);
	}

	::System::Void set_Graph(::Class_0_16E4307DCC419505_284* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_284*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET))(this, a1);
	}
};
