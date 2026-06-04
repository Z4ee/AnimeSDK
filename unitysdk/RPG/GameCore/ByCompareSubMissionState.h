#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_01B8845E08832E78_OFFSET UNITYSDK_OFFSET(0x195368C0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET UNITYSDK_OFFSET(0x195366A0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_2942F15B5EBE8628_OFFSET UNITYSDK_OFFSET(0x195365D0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_7143B41727997D00_OFFSET UNITYSDK_OFFSET(0x19536940)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19536650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSubMissionState_TypeDefinitionIndex = 19173;

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

		static ::System::Void Method_4_2942F15B5EBE8628(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_2942F15B5EBE8628_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1ED1B0FE2A40338C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01B8845E08832E78(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_01B8845E08832E78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7143B41727997D00(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_7143B41727997D00_OFFSET))(a1, a2);
		}
	};
}
