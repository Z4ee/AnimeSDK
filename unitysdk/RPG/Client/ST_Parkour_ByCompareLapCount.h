#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_28D2DD536D808902_OFFSET UNITYSDK_OFFSET(0x193BD520)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_33C27543BF4E4891_OFFSET UNITYSDK_OFFSET(0x193BD270)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_574D128961EC3059_OFFSET UNITYSDK_OFFSET(0x193BD340)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_6C4C38CA19C5E3F7_OFFSET UNITYSDK_OFFSET(0x193BD5A0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x193BD2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareLapCount_TypeDefinitionIndex = 9935;

	class ST_Parkour_ByCompareLapCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_33C27543BF4E4891(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_33C27543BF4E4891_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_574D128961EC3059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_574D128961EC3059_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28D2DD536D808902(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_28D2DD536D808902_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C4C38CA19C5E3F7(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_METHOD_4_6C4C38CA19C5E3F7_OFFSET))(a1, a2);
		}
	};
}
