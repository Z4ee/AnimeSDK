#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AA9F3620D178FAF;
class Class_1_DB66722311040883;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }

#define CLASS_1_C76783375AE4154F_METHOD_1_4D6F5E5173CA2D93_OFFSET UNITYSDK_OFFSET(0x902E8B0)
#define CLASS_1_C76783375AE4154F_METHOD_1_5FE1DC75072C130C_OFFSET UNITYSDK_OFFSET(0x902E490)
#define CLASS_1_C76783375AE4154F_METHOD_1_A74194F60FC80BC4_OFFSET UNITYSDK_OFFSET(0x902E710)
#define CLASS_1_C76783375AE4154F_METHOD_1_EBC6346161685739_OFFSET UNITYSDK_OFFSET(0x902E3E0)

inline static constexpr unsigned int Class_1_C76783375AE4154F_TypeDefinitionIndex = 69937;

class Class_1_C76783375AE4154F : public ::System::Object
{
public:
	static ::RPG::Client::DiceCombat::DiceCombatV2Stage* Method_1_EBC6346161685739(::System::UInt32 a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_EBC6346161685739_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvPStage* Method_1_A74194F60FC80BC4(::Class_1_6AA9F3620D178FAF* a1)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::Class_1_6AA9F3620D178FAF*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_A74194F60FC80BC4_OFFSET))(a1);
	}

	static ::RPG::Client::DiceCombat::DiceCombatV2PvEStage* Method_1_5FE1DC75072C130C(::Class_1_6AA9F3620D178FAF* a1, ::Class_1_DB66722311040883* a2)
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::Class_1_6AA9F3620D178FAF*, ::Class_1_DB66722311040883*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_5FE1DC75072C130C_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::UInt32>* Method_1_4D6F5E5173CA2D93(::Class_1_6AA9F3620D178FAF* a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::Class_1_6AA9F3620D178FAF*))((::PBYTE)hIl2Cpp + CLASS_1_C76783375AE4154F_METHOD_1_4D6F5E5173CA2D93_OFFSET))(a1);
	}
};
