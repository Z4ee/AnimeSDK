#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB106D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_0_OFFSET UNITYSDK_OFFSET(0xB106D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_1_OFFSET UNITYSDK_OFFSET(0xB106D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_2_OFFSET UNITYSDK_OFFSET(0xB106E50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_3_OFFSET UNITYSDK_OFFSET(0xB106E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB106D50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__GET_DUNGEONMULTIPLEPLAYERSETTLERATIOLIST_B__12_0_OFFSET UNITYSDK_OFFSET(0xB106E70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__GET_TAGLEVELLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0xB106ED0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ActivityIdleLiveUtils___c_TypeDefinitionIndex = 69937;

	class ActivityIdleLiveUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50470);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50478);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50480);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50488);
		}
		static ::RPG::Client::ActivityIdleLive::ActivityIdleLiveUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::ActivityIdleLiveUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50490);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x50498);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityIdleLiveUtils___c_TypeDefinitionIndex)->GetStaticField(0x504A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ConvertSlotDatasToAvatarDict_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> _ConvertSlotDatasToAvatarDict_b__3_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_1_OFFSET))(this, a1);
		}

		::System::UInt32 _ConvertSlotDatasToAvatarDict_b__3_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_2_OFFSET))(this, a1);
		}

		::System::UInt32 _ConvertSlotDatasToAvatarDict_b__3_3(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__CONVERTSLOTDATASTOAVATARDICT_B__3_3_OFFSET))(this, a1);
		}

		::System::UInt32 _get_DungeonMultiplePlayerSettleRatioList_b__12_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__GET_DUNGEONMULTIPLEPLAYERSETTLERATIOLIST_B__12_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_TagLevelList_b__14_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_ACTIVITYIDLELIVEUTILS___C__GET_TAGLEVELLIST_B__14_0_OFFSET))(this, a1);
		}
	};
}
