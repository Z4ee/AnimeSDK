#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_103;
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB135450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB135480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__UPDATE_B__21_1_OFFSET UNITYSDK_OFFSET(0xB135490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__UPDATE_B__21_2_OFFSET UNITYSDK_OFFSET(0xB1354B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C___INITSPSLOTS_B__27_0_OFFSET UNITYSDK_OFFSET(0xB1354D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonInfo___c_TypeDefinitionIndex = 70080;

	class IdleLiveDungeonInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>** StaticGet___9__21_2()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x52630);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDungeonInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x52638);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x52640);
		}
		static ::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>** StaticGet___9__21_1()
		{
			return (::System::Func_2<::Class_1_D17272E82AE804C2_103*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveDungeonInfo___c_TypeDefinitionIndex)->GetStaticField(0x52648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Update_b__21_1(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__UPDATE_B__21_1_OFFSET))(this, a1);
		}

		::System::UInt32 _Update_b__21_2(::Class_1_D17272E82AE804C2_103* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_D17272E82AE804C2_103*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C__UPDATE_B__21_2_OFFSET))(this, a1);
		}

		::System::Int32 __InitSpSlots_b__27_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1, ::RPG::Client::ActivityIdleLive::SpEquipSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONINFO___C___INITSPSLOTS_B__27_0_OFFSET))(this, a1, a2);
		}
	};
}
