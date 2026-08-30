#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_1A4D173DE79DE4C7_OFFSET UNITYSDK_OFFSET(0x1D622C00)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_221F47270C0C12DA_OFFSET UNITYSDK_OFFSET(0x1D620160)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_48D53956F839A05B_OFFSET UNITYSDK_OFFSET(0x1D621280)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_9578176E03FDE13D_OFFSET UNITYSDK_OFFSET(0x1D622C30)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D620150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateB_TypeDefinitionIndex = 23097;

	class UniversalHotFixPredicateB : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1A4D173DE79DE4C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_1A4D173DE79DE4C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_221F47270C0C12DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_221F47270C0C12DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_48D53956F839A05B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_48D53956F839A05B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9578176E03FDE13D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_METHOD_5_9578176E03FDE13D_OFFSET))(a1, a2);
		}
	};
}
