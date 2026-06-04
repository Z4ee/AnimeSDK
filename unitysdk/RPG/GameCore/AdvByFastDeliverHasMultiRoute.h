#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_017B86666B0C9004_OFFSET UNITYSDK_OFFSET(0x1941AC20)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_6ABE7A0A2DA410E2_OFFSET UNITYSDK_OFFSET(0x1941A900)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_A8C413E596B49ED3_OFFSET UNITYSDK_OFFSET(0x1941AD00)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_DDA19FFE55B8F539_OFFSET UNITYSDK_OFFSET(0x1941AAA0)
#define RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1941A9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByFastDeliverHasMultiRoute_TypeDefinitionIndex = 20937;

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

		static ::System::Void Method_4_017B86666B0C9004(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_017B86666B0C9004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8C413E596B49ED3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYFASTDELIVERHASMULTIROUTE_METHOD_4_A8C413E596B49ED3_OFFSET))(a1, a2);
		}
	};
}
