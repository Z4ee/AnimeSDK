#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_1F53F44815CFC985_OFFSET UNITYSDK_OFFSET(0x1CEA0A90)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_6F85A26FBAD6F09D_OFFSET UNITYSDK_OFFSET(0x1CEA0C60)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_C142C3FCF8EF9F73_OFFSET UNITYSDK_OFFSET(0x1CEA0C90)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_D575714E67674880_OFFSET UNITYSDK_OFFSET(0x1CEA0A50)
#define RPG_GAMECORE_BYCHARACTERDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA0A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCharacterDamageType_TypeDefinitionIndex = 20014;

	class ByCharacterDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D575714E67674880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_D575714E67674880_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F53F44815CFC985(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_1F53F44815CFC985_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F85A26FBAD6F09D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_6F85A26FBAD6F09D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C142C3FCF8EF9F73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERDAMAGETYPE_METHOD_4_C142C3FCF8EF9F73_OFFSET))(a1, a2);
		}
	};
}
