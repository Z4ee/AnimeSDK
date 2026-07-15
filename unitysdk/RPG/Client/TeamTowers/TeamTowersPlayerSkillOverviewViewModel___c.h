#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillGroupViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1946A5F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1946A630)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__GET_PLAYERSKILLGROUPS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1946A670)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C___INITPLAYERSKILLS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1946A640)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C___INITPLAYERSKILLS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1946A650)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersPlayerSkillOverviewViewModel___c_TypeDefinitionIndex = 75116;

	class TeamTowersPlayerSkillOverviewViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersPlayerSkillOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EEC0);
		}
		static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*>**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersPlayerSkillOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EEC8);
		}
		static ::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersPlayerSkillOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EED0);
		}
		static ::RPG::Client::TeamTowers::TeamTowersPlayerSkillOverviewViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::TeamTowers::TeamTowersPlayerSkillOverviewViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersPlayerSkillOverviewViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitPlayerSkills_b__4_0(::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C___INITPLAYERSKILLS_B__4_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* __InitPlayerSkills_b__4_1(::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C___INITPLAYERSKILLS_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_PlayerSkillGroups_b__7_0(::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillGroupViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLOVERVIEWVIEWMODEL___C__GET_PLAYERSKILLGROUPS_B__7_0_OFFSET))(this, a1);
		}
	};
}
