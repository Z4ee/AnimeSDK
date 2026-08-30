#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_17CFA65CF1D49D17_OFFSET UNITYSDK_OFFSET(0x1CDB5070)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET UNITYSDK_OFFSET(0x1CDB4ED0)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_9A227DC4712D44C0_OFFSET UNITYSDK_OFFSET(0x1CDB5040)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_C6E114333BA1F1B3_OFFSET UNITYSDK_OFFSET(0x1CDB4E90)
#define RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB4EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTutorialFinish_TypeDefinitionIndex = 24079;

	class ByIsTutorialFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6E114333BA1F1B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_C6E114333BA1F1B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54E934475116746E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A227DC4712D44C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_9A227DC4712D44C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17CFA65CF1D49D17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_17CFA65CF1D49D17_OFFSET))(a1, a2);
		}
	};
}
