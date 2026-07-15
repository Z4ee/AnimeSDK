#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET UNITYSDK_OFFSET(0x1A8A9530)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_3C721A22685CD33E_OFFSET UNITYSDK_OFFSET(0x1A8A9780)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_988E2E4551E06201_OFFSET UNITYSDK_OFFSET(0x1A8A94F0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_A72DF3F7587E8B71_OFFSET UNITYSDK_OFFSET(0x1A8A9750)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A9520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSubMissionState_TypeDefinitionIndex = 19529;

	class ByCompareSubMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x20
		::RPG::GameCore::SubMissionState SubMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_988E2E4551E06201(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_988E2E4551E06201_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1ED1B0FE2A40338C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A72DF3F7587E8B71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_A72DF3F7587E8B71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C721A22685CD33E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_3C721A22685CD33E_OFFSET))(a1, a2);
		}
	};
}
