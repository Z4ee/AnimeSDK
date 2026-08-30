#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C_8;
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5EA210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CHECKISDISPLAY_B__1_1_OFFSET UNITYSDK_OFFSET(0xC5EA2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xC5EA250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0xC5EA270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_2_OFFSET UNITYSDK_OFFSET(0xC5EA290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EA240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__GETTOTALWEIGHT_B__3_0_OFFSET UNITYSDK_OFFSET(0xC5EA3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__GET__CACHEDSLOTUNLOCKCOUNT_B__32_0_OFFSET UNITYSDK_OFFSET(0xC5EA780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_0_OFFSET UNITYSDK_OFFSET(0xC5EA3D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_1_OFFSET UNITYSDK_OFFSET(0xC5EA420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_2_OFFSET UNITYSDK_OFFSET(0xC5EA440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_3_OFFSET UNITYSDK_OFFSET(0xC5EA560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_6_OFFSET UNITYSDK_OFFSET(0xC5EA570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_7_OFFSET UNITYSDK_OFFSET(0xC5EA680)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendData___c_TypeDefinitionIndex = 74805;

	class IdleLiveTeamRecommendData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::UInt32>** StaticGet___9__5_7()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FAE0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FAE8);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FAF0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FAF8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB00);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB08);
		}
		static ::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB10);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB18);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::UInt32>** StaticGet___9__5_6()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB20);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB28);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::RPG::GameCore::ILBattleCharacterLocation>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::RPG::GameCore::ILBattleCharacterLocation>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB30);
		}
		static ::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB38);
		}
		static ::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_A88C3AAF0DD46F4C_8*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTeamRecommendData___c_TypeDefinitionIndex)->GetStaticField(0x5FB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__0_0(::Class_1_A88C3AAF0DD46F4C_8* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_A88C3AAF0DD46F4C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__0_1(::Class_1_A88C3AAF0DD46F4C_8* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_A88C3AAF0DD46F4C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__0_2(::Class_1_A88C3AAF0DD46F4C_8* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_A88C3AAF0DD46F4C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CREATE_B__0_2_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsDisplay_b__1_1(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__CHECKISDISPLAY_B__1_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetTotalWeight_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__GETTOTALWEIGHT_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean __BuildTeamSlotDatas_b__5_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::ILBattleCharacterLocation __BuildTeamSlotDatas_b__5_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::ILBattleCharacterLocation __BuildTeamSlotDatas_b__5_2(::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID, ::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* __BuildTeamSlotDatas_b__5_3(::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::RPG::GameCore::ILBattleCharacterLocation, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_3_OFFSET))(this, a1);
		}

		::System::UInt32 __BuildTeamSlotDatas_b__5_6(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_6_OFFSET))(this, a1);
		}

		::System::UInt32 __BuildTeamSlotDatas_b__5_7(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C___BUILDTEAMSLOTDATAS_B__5_7_OFFSET))(this, a1);
		}

		::System::Boolean _get__cachedSlotUnlockCount_b__32_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___C__GET__CACHEDSLOTUNLOCKCOUNT_B__32_0_OFFSET))(this, a1);
		}
	};
}
