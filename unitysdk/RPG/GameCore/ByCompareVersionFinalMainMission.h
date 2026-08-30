#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_08AE1D19545EFB4C_OFFSET UNITYSDK_OFFSET(0x1CF0C100)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_27E2FC592B194BA6_OFFSET UNITYSDK_OFFSET(0x1CF0C2E0)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_4F8C844FABAD5945_OFFSET UNITYSDK_OFFSET(0x1CF0C140)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_D3D196C172419B09_OFFSET UNITYSDK_OFFSET(0x1CF0C2B0)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0C130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareVersionFinalMainMission_TypeDefinitionIndex = 20526;

	class ByCompareVersionFinalMainMission : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_08AE1D19545EFB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_08AE1D19545EFB4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F8C844FABAD5945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_4F8C844FABAD5945_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3D196C172419B09(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_D3D196C172419B09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27E2FC592B194BA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_27E2FC592B194BA6_OFFSET))(a1, a2);
		}
	};
}
