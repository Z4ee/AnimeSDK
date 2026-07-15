#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9541CF6F5087409A.h"

class Class_2_B66C1067C0468FBB;
class Class_4_40B36AEF5B3009C7;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelCustomTalkNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }
namespace RPG::GameCore { class ChimeraDuelNpcLeaveNode; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_EB4F2B679195C18B_METHOD_4_4AA672AB367A804A_OFFSET UNITYSDK_OFFSET(0x164F58C0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_4D0A612B486614B6_OFFSET UNITYSDK_OFFSET(0x164F49B0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_7B18E2A74C9EF554_OFFSET UNITYSDK_OFFSET(0x164F4A80)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_8E9678543C58A677_OFFSET UNITYSDK_OFFSET(0x164F5BB0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET UNITYSDK_OFFSET(0x164F4EB0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_97A7B58FB122A982_OFFSET UNITYSDK_OFFSET(0x164F5100)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_B630A3DE91C4343E_OFFSET UNITYSDK_OFFSET(0x164F53A0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_D969C2CE06E4FF3E_OFFSET UNITYSDK_OFFSET(0x164F6470)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_DB1AB80534F6F2B7_OFFSET UNITYSDK_OFFSET(0x164F6C80)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_E5510850B848432C_OFFSET UNITYSDK_OFFSET(0x164F6070)
#define CLASS_4_EB4F2B679195C18B__CTOR_OFFSET UNITYSDK_OFFSET(0x164F49A0)

inline static constexpr unsigned int Class_4_EB4F2B679195C18B_TypeDefinitionIndex = 73666;

class Class_4_EB4F2B679195C18B : public ::Class_3_9541CF6F5087409A
{
public:
	::Class_4_40B36AEF5B3009C7* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_40B36AEF5B3009C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_40B36AEF5B3009C7*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4D0A612B486614B6(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_4D0A612B486614B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_7B18E2A74C9EF554(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_7B18E2A74C9EF554_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_9001389DE7382BB6(::RPG::GameCore::ChimeraDuelProbilityComparePredicate* a1, ::Class_2_B66C1067C0468FBB* a2, ::System::Double a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*, ::Class_2_B66C1067C0468FBB*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_97A7B58FB122A982(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_97A7B58FB122A982_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B630A3DE91C4343E(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_B630A3DE91C4343E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4AA672AB367A804A(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_4AA672AB367A804A_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_8E9678543C58A677(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_8E9678543C58A677_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_E5510850B848432C(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_E5510850B848432C_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_D969C2CE06E4FF3E(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_D969C2CE06E4FF3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_DB1AB80534F6F2B7(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_DB1AB80534F6F2B7_OFFSET))(this, a1);
	}
};
