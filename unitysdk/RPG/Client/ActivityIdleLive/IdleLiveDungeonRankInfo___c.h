#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonRankData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6581C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A658200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A658210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A6582A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_2_OFFSET UNITYSDK_OFFSET(0x1A658330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_3_OFFSET UNITYSDK_OFFSET(0x1A658350)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonRankInfo___c_TypeDefinitionIndex = 71612;

	class IdleLiveDungeonRankInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E840);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E848);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E850);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E858);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x3E860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRankDatasSorted_b__2_0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRankDatasSorted_b__2_1(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRankDatasSorted_b__2_2(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRankDatasSorted_b__2_3(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_3_OFFSET))(this, a1);
		}
	};
}
