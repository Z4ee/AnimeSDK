#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_260D80406448540D_OFFSET UNITYSDK_OFFSET(0x1AE54580)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_96C208197175503E_OFFSET UNITYSDK_OFFSET(0x1AE54350)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_A2657AAD4BFA65A7_OFFSET UNITYSDK_OFFSET(0x1AE54390)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_F0B5B7EF75253CEB_OFFSET UNITYSDK_OFFSET(0x1AE54550)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE54380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsWeakTypeActive_TypeDefinitionIndex = 20003;

	class AdventureByIsWeakTypeActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96C208197175503E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_96C208197175503E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2657AAD4BFA65A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_A2657AAD4BFA65A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F0B5B7EF75253CEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_F0B5B7EF75253CEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_260D80406448540D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_260D80406448540D_OFFSET))(a1, a2);
		}
	};
}
