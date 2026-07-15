#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B553C21756B27967;
class Class_1_DB66722311040883;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }

#define CLASS_1_C76783375AE4154F_METHOD_1_5FE1DC75072C130C_OFFSET UNITYSDK_OFFSET(0x14FF1DE0)
#define CLASS_1_C76783375AE4154F_METHOD_1_A74194F60FC80BC4_OFFSET UNITYSDK_OFFSET(0x14FF2070)
#define CLASS_1_C76783375AE4154F_METHOD_1_E2FBCBC48D5A71F7_OFFSET UNITYSDK_OFFSET(0x14FF2220)
#define CLASS_1_C76783375AE4154F_METHOD_1_EBC6346161685739_OFFSET UNITYSDK_OFFSET(0x14FF1D30)

inline static constexpr unsigned int Class_1_C76783375AE4154F_TypeDefinitionIndex = 72262;

class Class_1_C76783375AE4154F : public ::System::Object
{
public:
	static ::RPG::Client::DiceCombat::DiceCombatV2Stage* Method_1_EBC6346161685739(::System::UInt32 a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_EBC6346161685739_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvPStage* Method_1_A74194F60FC80BC4(::Class_1_B553C21756B27967* a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_A74194F60FC80BC4_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvEStage* Method_1_5FE1DC75072C130C(::Class_1_B553C21756B27967* a1, ::Class_1_DB66722311040883* a2)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::Class_1_B553C21756B27967*, ::Class_1_DB66722311040883*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_5FE1DC75072C130C_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_E2FBCBC48D5A71F7(::Class_1_B553C21756B27967* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_E2FBCBC48D5A71F7_OFFSET))(a1);
	}
};
