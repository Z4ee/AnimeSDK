#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_6ABE7A0A2DA410E2_OFFSET UNITYSDK_OFFSET(0x18648CD0)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_DDA19FFE55B8F539_OFFSET UNITYSDK_OFFSET(0x18648E70)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18648DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverHasMultiRoute_TypeDefinitionIndex = 21028;

	class AdvByFastDeliverHasMultiRoute : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6ABE7A0A2DA410E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_6ABE7A0A2DA410E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDA19FFE55B8F539(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_DDA19FFE55B8F539_OFFSET))(a1, a2);
		}
	};
}
