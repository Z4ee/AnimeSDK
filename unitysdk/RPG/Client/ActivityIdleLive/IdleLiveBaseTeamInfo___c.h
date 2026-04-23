#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CALPOWERLEVELRAW_B__20_0_OFFSET UNITYSDK_OFFSET(0x9B394C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B393D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_0_OFFSET UNITYSDK_OFFSET(0x9B39470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_1_OFFSET UNITYSDK_OFFSET(0x9B394A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_0_OFFSET UNITYSDK_OFFSET(0x9B39440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_1_OFFSET UNITYSDK_OFFSET(0x9B39450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_0_OFFSET UNITYSDK_OFFSET(0x9B394E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_1_OFFSET UNITYSDK_OFFSET(0x9B39500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B39410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETACTIVECAPTAINTAGCOUNT_B__36_0_OFFSET UNITYSDK_OFFSET(0x9B39570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETALLTEAMSLOTDATAS_B__25_0_OFFSET UNITYSDK_OFFSET(0x9B394D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETCAPTAINSLOTDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0x9B39540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETLIMITLEVEL_B__31_0_OFFSET UNITYSDK_OFFSET(0x9B39520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETSLOTDATABYID_B__15_0_OFFSET UNITYSDK_OFFSET(0x9B39420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__MARKALLONSLOTAVATARSEEN_B__17_0_OFFSET UNITYSDK_OFFSET(0x9B39430)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CHECKTEAMISVALID_B__40_0_OFFSET UNITYSDK_OFFSET(0x9B39580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CLEARALLTEAMAVATAR_B__44_0_OFFSET UNITYSDK_OFFSET(0x9B395C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___REFRESHTEAMSLOTDATAS_B__43_0_OFFSET UNITYSDK_OFFSET(0x9B395B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c_TypeDefinitionIndex = 69152;

	class IdleLiveBaseTeamInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29350);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29358);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::GameCore::ILBattleCharacterLocation>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29360);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29368);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29370);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29378);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29380);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29388);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29390);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x29398);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293A0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293A8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293B0);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293B8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293C0);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293C8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTeamInfo___c_TypeDefinitionIndex)->GetStaticField(0x293D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetSlotDataByID_b__15_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETSLOTDATABYID_B__15_0_OFFSET))(this, slots);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _MarkAllOnSlotAvatarSeen_b__17_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__MARKALLONSLOTAVATARSEEN_B__17_0_OFFSET))(this, slots);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _CheckIsAllSlotsFull_b__18_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_0_OFFSET))(this, slots);
		}

		::System::Boolean _CheckIsAllSlotsFull_b__18_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISALLSLOTSFULL_B__18_1_OFFSET))(this, slot);
		}

		::System::Boolean _CheckHasAvatarCanDeploy_b__19_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_0_OFFSET))(this, slot);
		}

		::RPG::GameCore::ILBattleCharacterLocation _CheckHasAvatarCanDeploy_b__19_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::RPG::GameCore::ILBattleCharacterLocation(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKHASAVATARCANDEPLOY_B__19_1_OFFSET))(this, slot);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _CalPowerLevelRaw_b__20_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CALPOWERLEVELRAW_B__20_0_OFFSET))(this, slots);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetAllTeamSlotDatas_b__25_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETALLTEAMSLOTDATAS_B__25_0_OFFSET))(this, slots);
		}

		::System::Boolean _CheckIsFullByPosType_b__30_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_0_OFFSET))(this, slot);
		}

		::System::Boolean _CheckIsFullByPosType_b__30_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__CHECKISFULLBYPOSTYPE_B__30_1_OFFSET))(this, slot);
		}

		::System::UInt32 _GetLimitLevel_b__31_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETLIMITLEVEL_B__31_0_OFFSET))(this, node);
		}

		::System::Boolean _GetCaptainSlotData_b__34_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETCAPTAINSLOTDATA_B__34_0_OFFSET))(this, slot);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _GetActiveCaptainTagCount_b__36_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__GETACTIVECAPTAINTAGCOUNT_B__36_0_OFFSET))(this, slots);
		}

		::System::Boolean __CheckTeamIsValid_b__40_0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CHECKTEAMISVALID_B__40_0_OFFSET))(this, slot);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* __RefreshTeamSlotDatas_b__43_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___REFRESHTEAMSLOTDATAS_B__43_0_OFFSET))(this, slots);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* __ClearAllTeamAvatar_b__44_0(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* slots)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C___CLEARALLTEAMAVATAR_B__44_0_OFFSET))(this, slots);
		}
	};
}
