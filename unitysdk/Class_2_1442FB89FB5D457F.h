#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleTriggerProxyBase_1.h"

class Class_1_0D98CBE9A89A1626;
class Class_4_BF2CE02449379FA8;

#define CLASS_2_1442FB89FB5D457F_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xBB0DD90)
#define CLASS_2_1442FB89FB5D457F__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0DE30)

inline static constexpr unsigned int Class_2_1442FB89FB5D457F_TypeDefinitionIndex = 78412;

class Class_2_1442FB89FB5D457F : public ::RPG::Client::Prop::PuzzleTriggerProxyBase_1<::Class_4_BF2CE02449379FA8*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1442FB89FB5D457F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_0D98CBE9A89A1626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D98CBE9A89A1626*))((::PBYTE)hIl2Cpp + CLASS_2_1442FB89FB5D457F_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
