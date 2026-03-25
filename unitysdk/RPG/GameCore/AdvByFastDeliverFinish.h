#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_1EFD778BA0CA204C_OFFSET UNITYSDK_OFFSET(0x16F26980)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_808BFB30847D36BB_OFFSET UNITYSDK_OFFSET(0x16F267E0)
#define RPG_GAMECORE_ADVBYFASTDELIVERFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F268C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverFinish_TypeDefinitionIndex = 20345;

	class AdvByFastDeliverFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetRoute; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_808BFB30847D36BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_808BFB30847D36BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1EFD778BA0CA204C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERFINISH_METHOD_4_1EFD778BA0CA204C_OFFSET))(a1, a2);
		}
	};
}
