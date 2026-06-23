#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A78FC80A78B3367C.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"

namespace NodeGraph::MainCity { class NavigateContainer; }

#define CLASS_3_EA9D34AB5444C05B_1_METHOD_3_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x123CF740)
#define CLASS_3_EA9D34AB5444C05B_1_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x123CF730)
#define CLASS_3_EA9D34AB5444C05B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x123CF8C0)

inline static constexpr unsigned int Class_3_EA9D34AB5444C05B_1_TypeDefinitionIndex = 55657;

class Class_3_EA9D34AB5444C05B_1 : public ::Class_2_A78FC80A78B3367C<::NodeGraph::MainCity::NavigateContainer*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_1__CTOR_OFFSET))(this);
	}

	::Enum_3_4D23D4D1211777E9 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_4D23D4D1211777E9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_1_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_1_METHOD_3_97889423B3D78768_OFFSET))(this);
	}
};
