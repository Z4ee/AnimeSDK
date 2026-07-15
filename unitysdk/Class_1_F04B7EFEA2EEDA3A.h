#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatByStepConfig; }
namespace RPG::GameCore { class TrainPartyActionAddStatConfig; }
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_076AD7EA5D28FD5E_OFFSET UNITYSDK_OFFSET(0x160A9F80)
#define CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_1A96F0C557CBD568_OFFSET UNITYSDK_OFFSET(0x160AA2F0)
#define CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_7D0D86ADFF819382_OFFSET UNITYSDK_OFFSET(0x160AA410)
#define CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_A5CF899E7403A2EE_OFFSET UNITYSDK_OFFSET(0x160AA210)
#define CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_CC8458D63AC89614_OFFSET UNITYSDK_OFFSET(0x160AA3A0)

inline static constexpr unsigned int Class_1_F04B7EFEA2EEDA3A_TypeDefinitionIndex = 70882;

class Class_1_F04B7EFEA2EEDA3A : public ::System::Object
{
public:
	static ::System::Void Method_1_076AD7EA5D28FD5E(::RPG::GameCore::TrainPartyActionConfigBase* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionConfigBase*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_076AD7EA5D28FD5E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A5CF899E7403A2EE(::RPG::GameCore::TrainPartyActionAddStatConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_A5CF899E7403A2EE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A96F0C557CBD568(::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddStatByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_1A96F0C557CBD568_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC8458D63AC89614(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_CC8458D63AC89614_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D0D86ADFF819382(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a1, ::RPG::Client::TrainParty::TrainPartyPreviewInfo* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*, ::RPG::Client::TrainParty::TrainPartyPreviewInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F04B7EFEA2EEDA3A_METHOD_1_7D0D86ADFF819382_OFFSET))(a1, a2);
	}
};
