#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_096294412AE58F5D_OFFSET UNITYSDK_OFFSET(0x1CF378C0)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_75B0EF3D933B4657_OFFSET UNITYSDK_OFFSET(0x1CF37A00)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_84980D4F9CC7EA5E_OFFSET UNITYSDK_OFFSET(0x1CF37880)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_B04294EFE88AF4AA_OFFSET UNITYSDK_OFFSET(0x1CF37A30)
#define RPG_GAMECORE_BYISDIRECTKILLBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF378B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDirectKillBattle_TypeDefinitionIndex = 22797;

	class ByIsDirectKillBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_84980D4F9CC7EA5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_84980D4F9CC7EA5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_096294412AE58F5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_096294412AE58F5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75B0EF3D933B4657(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_75B0EF3D933B4657_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B04294EFE88AF4AA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDIRECTKILLBATTLE_METHOD_4_B04294EFE88AF4AA_OFFSET))(a1, a2);
		}
	};
}
