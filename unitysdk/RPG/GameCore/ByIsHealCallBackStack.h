#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_BBB14A4284876633_OFFSET UNITYSDK_OFFSET(0x1702EB10)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_METHOD_4_CC0EFD25330A3B49_OFFSET UNITYSDK_OFFSET(0x1702EA40)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1702EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHealCallBackStack_TypeDefinitionIndex = 21730;

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
