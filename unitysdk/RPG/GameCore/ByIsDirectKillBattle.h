#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_096294412AE58F5D_OFFSET UNITYSDK_OFFSET(0x187513B0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_D5D05369782CBF17_OFFSET UNITYSDK_OFFSET(0x187512E0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18751360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDirectKillBattle_TypeDefinitionIndex = 21979;

	class ByIsDirectKillBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5D05369782CBF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_D5D05369782CBF17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_096294412AE58F5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_096294412AE58F5D_OFFSET))(a1, a2);
		}
	};
}
