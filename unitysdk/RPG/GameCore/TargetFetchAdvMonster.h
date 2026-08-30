#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_02586BC9E3AADBDC_OFFSET UNITYSDK_OFFSET(0x1D5A45C0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_6372B9CA3C3EB1FB_OFFSET UNITYSDK_OFFSET(0x1D5A46B0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_BD40DF076475D919_OFFSET UNITYSDK_OFFSET(0x1D5A4700)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_D03961D8019D9ECC_OFFSET UNITYSDK_OFFSET(0x1D5A4560)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A45B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonster_TypeDefinitionIndex = 23596;

	class TargetFetchAdvMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D03961D8019D9ECC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_D03961D8019D9ECC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02586BC9E3AADBDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_02586BC9E3AADBDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6372B9CA3C3EB1FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_6372B9CA3C3EB1FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD40DF076475D919(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_BD40DF076475D919_OFFSET))(a1, a2);
		}
	};
}
