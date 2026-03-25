#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_METHOD_3_27C449969874A098_OFFSET UNITYSDK_OFFSET(0x16F22AC0)
#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_METHOD_3_933C0B4CBE7B502B_OFFSET UNITYSDK_OFFSET(0x16F22B40)
#define RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F22B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddWeakByTeamAttackType_TypeDefinitionIndex = 21805;

	class AddWeakByTeamAttackType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* ResistanceDeltaValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddWeakCountMax; // 0x28
		::Il2CppArray<::System::String*>* ReturnWeakType; // 0x30
		::System::Boolean BlockUIRefresh; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNoNewWeak; // 0x40
		::RPG::GameCore::AttackDamageTypeConfig* PreferWeak; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27C449969874A098(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddWeakByTeamAttackType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddWeakByTeamAttackType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_METHOD_3_27C449969874A098_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_933C0B4CBE7B502B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddWeakByTeamAttackType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddWeakByTeamAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKBYTEAMATTACKTYPE_METHOD_3_933C0B4CBE7B502B_OFFSET))(a1, a2);
		}
	};
}
