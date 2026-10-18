#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_4BFB662CA8913AC0.h"

class Class_0_16E4307DCC419505_574;

#define CLASS_2_BB48E26EEDFD90E1_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x159B3AB0)
#define CLASS_2_BB48E26EEDFD90E1_METHOD_2_D1367138CEC8E0AD_OFFSET UNITYSDK_OFFSET(0x159B3B20)
#define CLASS_2_BB48E26EEDFD90E1__CTOR_OFFSET UNITYSDK_OFFSET(0x159B3DF0)

inline static constexpr unsigned int Class_2_BB48E26EEDFD90E1_TypeDefinitionIndex = 53789;

class Class_2_BB48E26EEDFD90E1 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_574*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB48E26EEDFD90E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB48E26EEDFD90E1_METHOD_2_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_2_D1367138CEC8E0AD(::Struct_2_4BFB662CA8913AC0& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4BFB662CA8913AC0&))((::PBYTE)hIl2Cpp + CLASS_2_BB48E26EEDFD90E1_METHOD_2_D1367138CEC8E0AD_OFFSET))(this, a1);
	}
};
