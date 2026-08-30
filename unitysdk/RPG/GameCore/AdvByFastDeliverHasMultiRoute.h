#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_565FBE0F8A7C62B1_OFFSET UNITYSDK_OFFSET(0x1D6AE360)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_B29A8B3E13F243DD_OFFSET UNITYSDK_OFFSET(0x1D6AE560)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_DDA19FFE55B8F539_OFFSET UNITYSDK_OFFSET(0x1D6AE3E0)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_E01506BC42F80AE5_OFFSET UNITYSDK_OFFSET(0x1D6AE5B0)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverHasMultiRoute_TypeDefinitionIndex = 21913;

	class AdvByFastDeliverHasMultiRoute : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_565FBE0F8A7C62B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_565FBE0F8A7C62B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDA19FFE55B8F539(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_DDA19FFE55B8F539_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B29A8B3E13F243DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_B29A8B3E13F243DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E01506BC42F80AE5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_E01506BC42F80AE5_OFFSET))(a1, a2);
		}
	};
}
