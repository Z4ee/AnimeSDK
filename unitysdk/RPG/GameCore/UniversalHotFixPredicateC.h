#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_01782926F36D8F24_OFFSET UNITYSDK_OFFSET(0x1B882340)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_710EC77505610642_OFFSET UNITYSDK_OFFSET(0x1B8842E0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EF0D16657D89F9A6_OFFSET UNITYSDK_OFFSET(0x1B8842B0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET UNITYSDK_OFFSET(0x1B881410)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B881400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateC_TypeDefinitionIndex = 22526;

	class UniversalHotFixPredicateC : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EF0D16657D89F9A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EF0D16657D89F9A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EFCB24E4A3C9E61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_01782926F36D8F24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_01782926F36D8F24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_710EC77505610642(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_710EC77505610642_OFFSET))(a1, a2);
		}
	};
}
