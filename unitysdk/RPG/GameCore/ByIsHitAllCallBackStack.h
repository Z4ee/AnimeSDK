#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_0DE4EE3F277B4BAB_OFFSET UNITYSDK_OFFSET(0x18753770)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET UNITYSDK_OFFSET(0x18753840)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x187537F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHitAllCallBackStack_TypeDefinitionIndex = 22469;

	class ByIsHitAllCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0DE4EE3F277B4BAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_0DE4EE3F277B4BAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1BEE485FBBE7801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET))(a1, a2);
		}
	};
}
