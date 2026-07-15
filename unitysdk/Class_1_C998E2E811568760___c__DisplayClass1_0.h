#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }

#define CLASS_1_C998E2E811568760___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5BEF0)
#define CLASS_1_C998E2E811568760___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x14B5BF10)

inline static constexpr unsigned int Class_1_C998E2E811568760___c__DisplayClass1_0_TypeDefinitionIndex = 73568;

class Class_1_C998E2E811568760___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* config; // 0x10
	::Class_1_A92BC063ED2379EB* context; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C998E2E811568760___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectTarget_b__0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_C998E2E811568760___C__DISPLAYCLASS1_0___SELECTTARGET_B__0_OFFSET))(this, a1);
	}
};
