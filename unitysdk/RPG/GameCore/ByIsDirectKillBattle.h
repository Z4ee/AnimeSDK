#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_096294412AE58F5D_OFFSET UNITYSDK_OFFSET(0x19560610)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_205E69A45A3A0756_OFFSET UNITYSDK_OFFSET(0x19560750)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_D5D05369782CBF17_OFFSET UNITYSDK_OFFSET(0x19560540)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_F9AC69D67EE25E7E_OFFSET UNITYSDK_OFFSET(0x195607D0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x195605C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDirectKillBattle_TypeDefinitionIndex = 21802;

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

		static ::System::Void Method_4_205E69A45A3A0756(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_205E69A45A3A0756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F9AC69D67EE25E7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_F9AC69D67EE25E7E_OFFSET))(a1, a2);
		}
	};
}
