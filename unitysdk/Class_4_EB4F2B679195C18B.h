#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_2_49CAB3DE74280C58;
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

#define CLASS_4_EB4F2B679195C18B_METHOD_4_00A51EEA9C0BFF46_OFFSET UNITYSDK_OFFSET(0x98EBEB0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_1413B6B5C6B5F262_OFFSET UNITYSDK_OFFSET(0x98EDA40)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_143EE1CF57BBC6A8_OFFSET UNITYSDK_OFFSET(0x98ED250)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_1CD6F7B689DDA9DC_OFFSET UNITYSDK_OFFSET(0x98EDA50)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_24B2DB59BFD36479_OFFSET UNITYSDK_OFFSET(0x98EDA10)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_2CD1E97719BF6120_OFFSET UNITYSDK_OFFSET(0x98EDA20)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_4A2F2968C3A06BC5_OFFSET UNITYSDK_OFFSET(0x98EB460)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_6FBC99261445E45A_OFFSET UNITYSDK_OFFSET(0x98ED9D0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_754D0AA3CADEDABD_OFFSET UNITYSDK_OFFSET(0x98EB530)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_79734EE13BEC9A67_OFFSET UNITYSDK_OFFSET(0x98ECCE0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_866A36779CE4D3B1_OFFSET UNITYSDK_OFFSET(0x98EDA30)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_8A92E5BD3D5BCB07_OFFSET UNITYSDK_OFFSET(0x98ED9F0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET UNITYSDK_OFFSET(0x98EB9B0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_9611290ACE9B5E4B_OFFSET UNITYSDK_OFFSET(0x98EBC10)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_A4D8F519BC4A4E77_OFFSET UNITYSDK_OFFSET(0x98EC7F0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_C3B80FB016EDC4CA_OFFSET UNITYSDK_OFFSET(0x98EDA00)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_C61487531FD3C753_OFFSET UNITYSDK_OFFSET(0x98EC520)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_EFC834D87218FB7F_OFFSET UNITYSDK_OFFSET(0x98ED9E0)
#define CLASS_4_EB4F2B679195C18B_METHOD_4_FDEC41F7CDC2E7D0_OFFSET UNITYSDK_OFFSET(0x98ED890)
#define CLASS_4_EB4F2B679195C18B__CTOR_OFFSET UNITYSDK_OFFSET(0x98EB450)

inline static constexpr unsigned int Class_4_EB4F2B679195C18B_TypeDefinitionIndex = 71203;

class Class_4_EB4F2B679195C18B : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_40B36AEF5B3009C7* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_40B36AEF5B3009C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_40B36AEF5B3009C7*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4A2F2968C3A06BC5(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_4A2F2968C3A06BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_754D0AA3CADEDABD(::RPG::GameCore::ChimeraDuelProbabilityNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_754D0AA3CADEDABD_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_9001389DE7382BB6(::RPG::GameCore::ChimeraDuelProbilityComparePredicate* a1, ::Class_2_49CAB3DE74280C58* a2, ::System::Double a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*, ::Class_2_49CAB3DE74280C58*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_9001389DE7382BB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_9611290ACE9B5E4B(::RPG::GameCore::ChimeraDuelRepeatNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_9611290ACE9B5E4B_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_00A51EEA9C0BFF46(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_00A51EEA9C0BFF46_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_C61487531FD3C753(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_C61487531FD3C753_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_A4D8F519BC4A4E77(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_A4D8F519BC4A4E77_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_79734EE13BEC9A67(::RPG::GameCore::ChimeraDuelCustomTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_79734EE13BEC9A67_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_143EE1CF57BBC6A8(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_143EE1CF57BBC6A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_FDEC41F7CDC2E7D0(::RPG::GameCore::ChimeraDuelNpcLeaveNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_FDEC41F7CDC2E7D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_6FBC99261445E45A(::RPG::GameCore::ChimeraDuelBranchNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_6FBC99261445E45A_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_EFC834D87218FB7F(::RPG::GameCore::ChimeraDuelProbabilityNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_EFC834D87218FB7F_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_8A92E5BD3D5BCB07(::RPG::GameCore::ChimeraDuelRepeatNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_8A92E5BD3D5BCB07_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_C3B80FB016EDC4CA(::RPG::GameCore::ChimeraDuelModifierContainerNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_C3B80FB016EDC4CA_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_24B2DB59BFD36479(::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_24B2DB59BFD36479_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_2CD1E97719BF6120(::RPG::GameCore::ChimeraDuelTalkNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_2CD1E97719BF6120_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_866A36779CE4D3B1(::RPG::GameCore::ChimeraDuelCustomTalkNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelCustomTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_866A36779CE4D3B1_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_1413B6B5C6B5F262(::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_1413B6B5C6B5F262_OFFSET))(this, P0);
	}

	::System::Boolean Method_4_1CD6F7B689DDA9DC(::RPG::GameCore::ChimeraDuelNpcLeaveNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelNpcLeaveNode*))((::PBYTE)hIl2Cpp + CLASS_4_EB4F2B679195C18B_METHOD_4_1CD6F7B689DDA9DC_OFFSET))(this, P0);
	}
};
