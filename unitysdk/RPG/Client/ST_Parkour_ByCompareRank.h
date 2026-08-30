#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_911084033AD37B3F_OFFSET UNITYSDK_OFFSET(0x1D31F600)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_A3C1BD5BB81C7009_OFFSET UNITYSDK_OFFSET(0x1D31F840)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_ABA79FAEC90B991A_OFFSET UNITYSDK_OFFSET(0x1D31F5C0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_F7D322F370F420A6_OFFSET UNITYSDK_OFFSET(0x1D31F870)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31F5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareRank_TypeDefinitionIndex = 10250;

	class ST_Parkour_ByCompareRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CompareToPlayer; // 0x20
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x24
		::System::Int32 CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ABA79FAEC90B991A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_ABA79FAEC90B991A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_911084033AD37B3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_911084033AD37B3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3C1BD5BB81C7009(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_A3C1BD5BB81C7009_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7D322F370F420A6(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_F7D322F370F420A6_OFFSET))(a1, a2);
		}
	};
}
