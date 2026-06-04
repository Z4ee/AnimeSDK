#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYAND_METHOD_4_731AEDB7954B5247_OFFSET UNITYSDK_OFFSET(0x198C9C90)
#define RPG_GAMECORE_MARBLEBYAND_METHOD_4_95572CD41CDE573A_OFFSET UNITYSDK_OFFSET(0x198C9D70)
#define RPG_GAMECORE_MARBLEBYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByAnd_TypeDefinitionIndex = 16017;

	class MarbleByAnd : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarblePredicateConfig*>* PredicateList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_731AEDB7954B5247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByAnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_METHOD_4_731AEDB7954B5247_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95572CD41CDE573A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByAnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_METHOD_4_95572CD41CDE573A_OFFSET))(a1, a2);
		}
	};
}
