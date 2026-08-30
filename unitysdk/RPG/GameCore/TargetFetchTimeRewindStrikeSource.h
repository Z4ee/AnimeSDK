#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_0BBD8A547109B5D2_OFFSET UNITYSDK_OFFSET(0x1E1B7930)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_602F478E4FE5F5C7_OFFSET UNITYSDK_OFFSET(0x1E1B7A30)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_9CC404137650E5D3_OFFSET UNITYSDK_OFFSET(0x1E1B79D0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_B2B14B1404C85E6B_OFFSET UNITYSDK_OFFSET(0x1E1B7A70)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B79C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTimeRewindStrikeSource_TypeDefinitionIndex = 23613;

	class TargetFetchTimeRewindStrikeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0BBD8A547109B5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_0BBD8A547109B5D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CC404137650E5D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_9CC404137650E5D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_602F478E4FE5F5C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_602F478E4FE5F5C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2B14B1404C85E6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_B2B14B1404C85E6B_OFFSET))(a1, a2);
		}
	};
}
