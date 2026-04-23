#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_METHOD_2_94B0A900FA9DBA4F_OFFSET UNITYSDK_OFFSET(0x186E8360)
#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_METHOD_2_B1DCF49F679F5BD1_OFFSET UNITYSDK_OFFSET(0x186E7FD0)
#define RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x186E83C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattlePredicate_TypeDefinitionIndex = 14973;

	class BaseChenLingBattlePredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1DCF49F679F5BD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattlePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattlePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_METHOD_2_B1DCF49F679F5BD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_94B0A900FA9DBA4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattlePredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattlePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEPREDICATE_METHOD_2_94B0A900FA9DBA4F_OFFSET))(a1, a2);
		}
	};
}
