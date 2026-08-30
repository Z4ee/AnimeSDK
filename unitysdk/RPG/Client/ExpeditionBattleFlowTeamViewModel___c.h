#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_E2FB7E5A9E3705C7_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEF8D10)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEF8D50)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETCOMMONTALK_B__21_0_OFFSET UNITYSDK_OFFSET(0xCEF8D80)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETSTARTTALK_B__20_0_OFFSET UNITYSDK_OFFSET(0xCEF8D60)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETVICTORYTALK_B__22_0_OFFSET UNITYSDK_OFFSET(0xCEF8DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex = 63979;

	class ExpeditionBattleFlowTeamViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66540);
		}
		static ::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66548);
		}
		static ::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66550);
		}
		static ::RPG::Client::ExpeditionBattleFlowTeamViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionBattleFlowTeamViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleFlowTeamViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID _GetStartTalk_b__20_0(::Class_1_E2FB7E5A9E3705C7_1* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::Class_1_E2FB7E5A9E3705C7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETSTARTTALK_B__20_0_OFFSET))(this, a1);
		}

		::RPG::Client::TextID _GetCommonTalk_b__21_0(::Class_1_E2FB7E5A9E3705C7_1* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::Class_1_E2FB7E5A9E3705C7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETCOMMONTALK_B__21_0_OFFSET))(this, a1);
		}

		::RPG::Client::TextID _GetVictoryTalk_b__22_0(::Class_1_E2FB7E5A9E3705C7_1* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::Class_1_E2FB7E5A9E3705C7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL___C__GETVICTORYTALK_B__22_0_OFFSET))(this, a1);
		}
	};
}
