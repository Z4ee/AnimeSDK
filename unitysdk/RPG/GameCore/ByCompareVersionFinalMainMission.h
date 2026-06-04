#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_4F8C844FABAD5945_OFFSET UNITYSDK_OFFSET(0x1953E170)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_5B25CA02355AA020_OFFSET UNITYSDK_OFFSET(0x1953E2E0)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_681B9BBB5C5429F7_OFFSET UNITYSDK_OFFSET(0x1953E0A0)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_DA2192F793ABD1E8_OFFSET UNITYSDK_OFFSET(0x1953E360)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1953E120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareVersionFinalMainMission_TypeDefinitionIndex = 19620;

	class ByCompareVersionFinalMainMission : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_681B9BBB5C5429F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_681B9BBB5C5429F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F8C844FABAD5945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_4F8C844FABAD5945_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B25CA02355AA020(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_5B25CA02355AA020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA2192F793ABD1E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_METHOD_4_DA2192F793ABD1E8_OFFSET))(a1, a2);
		}
	};
}
