#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AuthoritySide.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_166DD29DE0F0ACA9_OFFSET UNITYSDK_OFFSET(0x1950EEB0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_336D7C74E68DBFFF_OFFSET UNITYSDK_OFFSET(0x1950F0B0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_37217F338C1AFAD6_OFFSET UNITYSDK_OFFSET(0x1950F030)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_D2BB01313E75081F_OFFSET UNITYSDK_OFFSET(0x1950EDE0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1950EE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEntityAuthoritySide_TypeDefinitionIndex = 21089;

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

		static ::System::Void Method_4_37217F338C1AFAD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_37217F338C1AFAD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_336D7C74E68DBFFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_336D7C74E68DBFFF_OFFSET))(a1, a2);
		}
	};
}
