#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AuthoritySide.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_166DD29DE0F0ACA9_OFFSET UNITYSDK_OFFSET(0x17007540)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_D2BB01313E75081F_OFFSET UNITYSDK_OFFSET(0x17007470)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x170074F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEntityAuthoritySide_TypeDefinitionIndex = 20510;

	class ByCompareEntityAuthoritySide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AuthoritySide CompareValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2BB01313E75081F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_D2BB01313E75081F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_166DD29DE0F0ACA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_166DD29DE0F0ACA9_OFFSET))(a1, a2);
		}
	};
}
