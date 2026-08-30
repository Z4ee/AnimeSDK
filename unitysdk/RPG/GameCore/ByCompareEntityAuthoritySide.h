#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AuthoritySide.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_166DD29DE0F0ACA9_OFFSET UNITYSDK_OFFSET(0x1C3161C0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_1FEABD662137DB23_OFFSET UNITYSDK_OFFSET(0x1C316340)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_26C2DC1933514A6C_OFFSET UNITYSDK_OFFSET(0x1C316370)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_D1B091F2B216016C_OFFSET UNITYSDK_OFFSET(0x1C316180)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3161B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEntityAuthoritySide_TypeDefinitionIndex = 22066;

	class ByCompareEntityAuthoritySide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AuthoritySide CompareValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1B091F2B216016C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_D1B091F2B216016C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_166DD29DE0F0ACA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_166DD29DE0F0ACA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FEABD662137DB23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_1FEABD662137DB23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26C2DC1933514A6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_METHOD_4_26C2DC1933514A6C_OFFSET))(a1, a2);
		}
	};
}
