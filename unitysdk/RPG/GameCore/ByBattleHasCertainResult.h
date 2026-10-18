#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_05C7BF644F241414_OFFSET UNITYSDK_OFFSET(0x1D459E10)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET UNITYSDK_OFFSET(0x1D459CA0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_A7DF2CC382FECBDC_OFFSET UNITYSDK_OFFSET(0x1D459C60)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_F353E43989B472FD_OFFSET UNITYSDK_OFFSET(0x1D459DE0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D459C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleHasCertainResult_TypeDefinitionIndex = 22574;

	class ByBattleHasCertainResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A7DF2CC382FECBDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_A7DF2CC382FECBDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33B01EED912CA497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F353E43989B472FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_F353E43989B472FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05C7BF644F241414(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_05C7BF644F241414_OFFSET))(a1, a2);
		}
	};
}
