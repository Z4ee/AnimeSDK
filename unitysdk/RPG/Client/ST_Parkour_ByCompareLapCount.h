#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_1571C310B8936227_OFFSET UNITYSDK_OFFSET(0x1CD616D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_450D7D13CBAAC810_OFFSET UNITYSDK_OFFSET(0x1CD614B0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_4DBDB7A52C1E4DB0_OFFSET UNITYSDK_OFFSET(0x1CD61700)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_574D128961EC3059_OFFSET UNITYSDK_OFFSET(0x1CD614F0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD614E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareLapCount_TypeDefinitionIndex = 10249;

	class ST_Parkour_ByCompareLapCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_450D7D13CBAAC810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_450D7D13CBAAC810_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_574D128961EC3059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_574D128961EC3059_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1571C310B8936227(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_1571C310B8936227_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4DBDB7A52C1E4DB0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_4DBDB7A52C1E4DB0_OFFSET))(a1, a2);
		}
	};
}
