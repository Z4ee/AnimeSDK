#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2EDC9A17B260920E.h"
#include "unitysdk/Class_1_2EDC9A17B260920E_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_1257;
class Class_1_69DB8A72C044FA28;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_5F6E70A72FBE07C7_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0xE03CF60)
#define CLASS_2_5F6E70A72FBE07C7_METHOD_2_6F3751FB9222A9A4_OFFSET UNITYSDK_OFFSET(0xE03CFC0)
#define CLASS_2_5F6E70A72FBE07C7__CTOR_OFFSET UNITYSDK_OFFSET(0xE03CFB0)

inline static constexpr unsigned int Class_2_5F6E70A72FBE07C7_TypeDefinitionIndex = 75181;

class Class_2_5F6E70A72FBE07C7 : public ::Class_1_2EDC9A17B260920E
{
public:
	::System::Void _ctor(::Class_1_69DB8A72C044FA28* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69DB8A72C044FA28*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_5F6E70A72FBE07C7__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2EDC9A17B260920E_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_2EDC9A17B260920E_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F6E70A72FBE07C7_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_6F3751FB9222A9A4(::Class_0_16E4307DCC419505_1257* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1257*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_5F6E70A72FBE07C7_METHOD_2_6F3751FB9222A9A4_OFFSET))(this, a1, a2);
	}
};
