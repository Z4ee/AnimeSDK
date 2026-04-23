#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatConfig; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define CLASS_1_67A1F446774C88F1_METHOD_1_47D51A1674CF5472_OFFSET UNITYSDK_OFFSET(0xA2CB780)
#define CLASS_1_67A1F446774C88F1_METHOD_1_7D0D86ADFF819382_OFFSET UNITYSDK_OFFSET(0xA2CBBE0)
#define CLASS_1_67A1F446774C88F1_METHOD_1_A5CF899E7403A2EE_OFFSET UNITYSDK_OFFSET(0xA2CB9E0)
#define CLASS_1_67A1F446774C88F1_METHOD_1_B716501CA51D20AF_OFFSET UNITYSDK_OFFSET(0xA2CBAC0)
#define CLASS_1_67A1F446774C88F1_METHOD_1_CC8458D63AC89614_OFFSET UNITYSDK_OFFSET(0xA2CBB70)

inline static constexpr unsigned int Class_1_67A1F446774C88F1_TypeDefinitionIndex = 68549;

class Class_1_67A1F446774C88F1 : public ::System::Object
{
public:
	static ::System::Void Method_1_47D51A1674CF5472(::RPG::GameCore::TrainPartyActionConfigBase* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionConfigBase*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_67A1F446774C88F1_METHOD_1_47D51A1674CF5472_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5CF899E7403A2EE(::RPG::GameCore::TrainPartyActionAddStatConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_67A1F446774C88F1_METHOD_1_A5CF899E7403A2EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B716501CA51D20AF(::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_67A1F446774C88F1_METHOD_1_B716501CA51D20AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC8458D63AC89614(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_67A1F446774C88F1_METHOD_1_CC8458D63AC89614_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D0D86ADFF819382(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_67A1F446774C88F1_METHOD_1_7D0D86ADFF819382_OFFSET))(a1, a2);
	}
};
