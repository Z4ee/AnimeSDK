#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_22C20D5CA68B92C5_OFFSET UNITYSDK_OFFSET(0x18EE5EF0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_METHOD_4_9CC404137650E5D3_OFFSET UNITYSDK_OFFSET(0x18EE07E0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE0790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTimeRewindStrikeSource_TypeDefinitionIndex = 22873;

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
	};
}
