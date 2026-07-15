#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_12D8F22203F82425_OFFSET UNITYSDK_OFFSET(0x1B2B9C80)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET UNITYSDK_OFFSET(0x1B2B9B10)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_7E94D797D9836D51_OFFSET UNITYSDK_OFFSET(0x1B2B9AD0)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_C2622D518CA30D24_OFFSET UNITYSDK_OFFSET(0x1B2B9C50)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkipNextTeleportEffect_TypeDefinitionIndex = 19801;

	class BySkipNextTeleportEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E94D797D9836D51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_7E94D797D9836D51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_676730271EAEFEDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2622D518CA30D24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_C2622D518CA30D24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_12D8F22203F82425(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_12D8F22203F82425_OFFSET))(a1, a2);
		}
	};
}
