#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_BBB14A4284876633_OFFSET UNITYSDK_OFFSET(0x18753630)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_CC0EFD25330A3B49_OFFSET UNITYSDK_OFFSET(0x18753560)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x187535E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHealCallBackStack_TypeDefinitionIndex = 22468;

	class ByIsHealCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CC0EFD25330A3B49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHealCallBackStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHealCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_CC0EFD25330A3B49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBB14A4284876633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_BBB14A4284876633_OFFSET))(a1, a2);
		}
	};
}
