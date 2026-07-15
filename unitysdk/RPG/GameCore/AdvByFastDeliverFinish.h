#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_1EFD778BA0CA204C_OFFSET UNITYSDK_OFFSET(0x1BE129F0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_5ADA801AD5EB5382_OFFSET UNITYSDK_OFFSET(0x1BE12B70)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_6267AE44EBED7614_OFFSET UNITYSDK_OFFSET(0x1BE12970)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_79E42539BC9110FA_OFFSET UNITYSDK_OFFSET(0x1BE12BC0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE129C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverFinish_TypeDefinitionIndex = 21351;

	class AdvByFastDeliverFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetRoute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6267AE44EBED7614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_6267AE44EBED7614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1EFD778BA0CA204C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_1EFD778BA0CA204C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5ADA801AD5EB5382(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_5ADA801AD5EB5382_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79E42539BC9110FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_79E42539BC9110FA_OFFSET))(a1, a2);
		}
	};
}
