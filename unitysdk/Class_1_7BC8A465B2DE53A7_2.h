#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_105;
class Class_0_16E4307DCC419505_1523;
class Class_1_6526EDA44F8A6866;

#define CLASS_1_7BC8A465B2DE53A7_2_METHOD_1_CBC8D676A58AFA2D_OFFSET UNITYSDK_OFFSET(0x158A0910)
#define CLASS_1_7BC8A465B2DE53A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x158A0900)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_2_TypeDefinitionIndex = 80094;

class Class_1_7BC8A465B2DE53A7_2 : public ::System::Object
{
public:
	::Class_1_6526EDA44F8A6866* OMLAHOMDEID; // 0x10
	::Class_0_16E4307DCC419505_1523* CEFLLELKFOP; // 0x18

	::System::Void _ctor(::Class_1_6526EDA44F8A6866* a1, ::Class_0_16E4307DCC419505_1523* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6526EDA44F8A6866*, ::Class_0_16E4307DCC419505_1523*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_105* Method_1_CBC8D676A58AFA2D(::RPG::Client::MechCraft::MechCraftConditionType a1)
	{
		return ((::Class_0_16E4307DCC419505_105*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_2_METHOD_1_CBC8D676A58AFA2D_OFFSET))(this, a1);
	}
};
