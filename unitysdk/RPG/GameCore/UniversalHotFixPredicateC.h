#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_218C106E1D441D5A_OFFSET UNITYSDK_OFFSET(0x19E35B50)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_A30C0FCBECC92554_OFFSET UNITYSDK_OFFSET(0x19E37450)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_DC227F05CDD11C50_OFFSET UNITYSDK_OFFSET(0x19E373D0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET UNITYSDK_OFFSET(0x19E34E70)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E34E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateC_TypeDefinitionIndex = 22090;

	class UniversalHotFixPredicateC : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DC227F05CDD11C50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_DC227F05CDD11C50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EFCB24E4A3C9E61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_218C106E1D441D5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_218C106E1D441D5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A30C0FCBECC92554(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_A30C0FCBECC92554_OFFSET))(a1, a2);
		}
	};
}
