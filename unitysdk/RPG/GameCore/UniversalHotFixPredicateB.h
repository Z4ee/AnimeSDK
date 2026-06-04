#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_221F47270C0C12DA_OFFSET UNITYSDK_OFFSET(0x19E34C10)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_360F0477C74994EB_OFFSET UNITYSDK_OFFSET(0x19E370E0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_3D54A5BFF3F73A2D_OFFSET UNITYSDK_OFFSET(0x19E37060)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_B0D9913CB9FE4245_OFFSET UNITYSDK_OFFSET(0x19E35AD0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E34BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateB_TypeDefinitionIndex = 22089;

	class UniversalHotFixPredicateB : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3D54A5BFF3F73A2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_3D54A5BFF3F73A2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_221F47270C0C12DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_221F47270C0C12DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B0D9913CB9FE4245(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_B0D9913CB9FE4245_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_360F0477C74994EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_360F0477C74994EB_OFFSET))(a1, a2);
		}
	};
}
