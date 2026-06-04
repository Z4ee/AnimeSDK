#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_10BE2EF60DE62C12_OFFSET UNITYSDK_OFFSET(0x19D07710)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_22C20D5CA68B92C5_OFFSET UNITYSDK_OFFSET(0x19D0F3D0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_9CC404137650E5D3_OFFSET UNITYSDK_OFFSET(0x19CFCB70)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_B2B14B1404C85E6B_OFFSET UNITYSDK_OFFSET(0x19D0F4B0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFCB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTimeRewindStrikeSource_TypeDefinitionIndex = 22570;

	class TargetFetchTimeRewindStrikeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_22C20D5CA68B92C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_22C20D5CA68B92C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CC404137650E5D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_9CC404137650E5D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10BE2EF60DE62C12(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_10BE2EF60DE62C12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2B14B1404C85E6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_B2B14B1404C85E6B_OFFSET))(a1, a2);
		}
	};
}
