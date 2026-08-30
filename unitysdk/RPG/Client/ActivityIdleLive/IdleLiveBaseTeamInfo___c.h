#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CALPOWERLEVELRAW_B__20_0_OFFSET UNITYSDK_OFFSET(0x1B91B3B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B91B230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_0_OFFSET UNITYSDK_OFFSET(0x1B91B300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_1_OFFSET UNITYSDK_OFFSET(0x1B91B390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B91B2A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_1_OFFSET UNITYSDK_OFFSET(0x1B91B2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_0_OFFSET UNITYSDK_OFFSET(0x1B91B3D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_1_OFFSET UNITYSDK_OFFSET(0x1B91B420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91B270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETACTIVECAPTAINTAGCOUNT_B__36_0_OFFSET UNITYSDK_OFFSET(0x1B91B520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETALLTEAMSLOTDATAS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B91B3C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETCAPTAINSLOTDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B91B490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETLIMITLEVEL_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B91B470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETSLOTDATABYID_B__15_0_OFFSET UNITYSDK_OFFSET(0x1B91B280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__MARKALLONSLOTAVATARSEEN_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B91B290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CHECKTEAMISVALID_B__40_0_OFFSET UNITYSDK_OFFSET(0x1B91B530)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CLEARALLTEAMAVATAR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1B91B5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___REFRESHTEAMSLOTDATAS_B__43_0_OFFSET UNITYSDK_OFFSET(0x1B91B5C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c_TypeDefinitionIndex = 74793;

	class IdleLiveBaseTeamInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57320);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57328);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57330);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57338);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57340);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57348);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57350);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57358);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57360);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57368);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57370);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57378);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57380);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57388);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57390);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x57398);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x573A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetSlotDataByID_b__15_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETSLOTDATABYID_B__15_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _MarkAllOnSlotAvatarSeen_b__17_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__MARKALLONSLOTAVATARSEEN_B__17_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _CheckIsAllSlotsFull_b__18_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsAllSlotsFull_b__18_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_1_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHasAvatarCanDeploy_b__19_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::ILBattleCharacterLocation _CheckHasAvatarCanDeploy_b__19_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _CalPowerLevelRaw_b__20_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CALPOWERLEVELRAW_B__20_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetAllTeamSlotDatas_b__25_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETALLTEAMSLOTDATAS_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsFullByPosType_b__30_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsFullByPosType_b__30_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetLimitLevel_b__31_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETLIMITLEVEL_B__31_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCaptainSlotData_b__34_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETCAPTAINSLOTDATA_B__34_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetActiveCaptainTagCount_b__36_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETACTIVECAPTAINTAGCOUNT_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckTeamIsValid_b__40_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CHECKTEAMISVALID_B__40_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* __RefreshTeamSlotDatas_b__43_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___REFRESHTEAMSLOTDATAS_B__43_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* __ClearAllTeamAvatar_b__44_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CLEARALLTEAMAVATAR_B__44_0_OFFSET))(this, a1);
		}
	};
}
