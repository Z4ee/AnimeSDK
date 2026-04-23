#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_4EEB52F53202998D_OFFSET UNITYSDK_OFFSET(0x190E3DA0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_98AAC565E88CD82A_OFFSET UNITYSDK_OFFSET(0x190E5090)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA__CTOR_OFFSET UNITYSDK_OFFSET(0x190E3D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateA_TypeDefinitionIndex = 22329;

	class UniversalHotFixPredicateA : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_98AAC565E88CD82A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_98AAC565E88CD82A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4EEB52F53202998D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_4EEB52F53202998D_OFFSET))(a1, a2);
		}
	};
}
