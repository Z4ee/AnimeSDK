#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_3C1541952325B676_OFFSET UNITYSDK_OFFSET(0x19CDB2E0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_41D2C302E74A911E_OFFSET UNITYSDK_OFFSET(0x19CDB510)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_7CD3BF9E8802CFA3_OFFSET UNITYSDK_OFFSET(0x19CDB320)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_9E4BF39F0F5B6451_OFFSET UNITYSDK_OFFSET(0x19CDB4E0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDB310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentTeammemberCount_TypeDefinitionIndex = 20876;

	class ByCompareCurrentTeammemberCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 TargetCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C1541952325B676(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_3C1541952325B676_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7CD3BF9E8802CFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_7CD3BF9E8802CFA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9E4BF39F0F5B6451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_9E4BF39F0F5B6451_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41D2C302E74A911E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_41D2C302E74A911E_OFFSET))(a1, a2);
		}
	};
}
