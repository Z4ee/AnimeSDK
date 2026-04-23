#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
#include "unitysdk/RPG/Client/SwordTrainingStatusChangeInfo_ActiveEffectEnumerator_1.h"
#include "unitysdk/RPG/Client/SwordTrainingStatusChangeInfo_StatusChangeFlag.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_630;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDDYNAMICEFFECTS_OFFSET UNITYSDK_OFFSET(0xB261B40)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDEXTRASTATUSGETRATIO_OFFSET UNITYSDK_OFFSET(0xB261A50)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDMOOD_OFFSET UNITYSDK_OFFSET(0xB261220)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSKILLPOINT_OFFSET UNITYSDK_OFFSET(0xB2611D0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0xB2615F0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2503D0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB2528D0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB251B60)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETCURACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xB25F1D0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMAXCANCOSTMOODVALUE_OFFSET UNITYSDK_OFFSET(0xB25F180)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xB25F140)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB2610E0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETREMAINMOOD_OFFSET UNITYSDK_OFFSET(0xB262020)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETSTATUSCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB261130)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETVALUEWITHRATIO_OFFSET UNITYSDK_OFFSET(0xB2620B0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xB25EE90)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xB2627B0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET__ISCURTRAININGACTION_OFFSET UNITYSDK_OFFSET(0xB25EF90)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB25EC10)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISMOODCHANGE_OFFSET UNITYSDK_OFFSET(0xB261040)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB261090)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xB25F000)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODCOSTRATIO_OFFSET UNITYSDK_OFFSET(0xB25F0A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYPARTNERAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xB25EEF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_PRECALCULATECHANGEWITHACTIONSELECTION_OFFSET UNITYSDK_OFFSET(0xB248CC0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_RESET_OFFSET UNITYSDK_OFFSET(0xB25ECA0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOODMINIMUMVALUE_OFFSET UNITYSDK_OFFSET(0xB25EDF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOOD_OFFSET UNITYSDK_OFFSET(0xB261A00)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xB2627C0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SUBMOOD_OFFSET UNITYSDK_OFFSET(0xB261360)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB25EB50)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__FILLEFFECTLISTWITHEFFECTIDARR_OFFSET UNITYSDK_OFFSET(0xB2621E0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__GETVALUEWITHRATIO_OFFSET UNITYSDK_OFFSET(0xB262690)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__HANDLEHIGHLIGHTSELECTION_OFFSET UNITYSDK_OFFSET(0xB2601C0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xB25FCD0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONEND_OFFSET UNITYSDK_OFFSET(0xB2607A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONSTART_OFFSET UNITYSDK_OFFSET(0xB25F640)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONASSISTPARTNERCHANGE_OFFSET UNITYSDK_OFFSET(0xB262640)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPOSTACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xB25FFF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPREACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xB25F870)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__POSTPROCESS_OFFSET UNITYSDK_OFFSET(0xB262750)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__PREPROCESS_OFFSET UNITYSDK_OFFSET(0xB262700)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHACTIVEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xB261E70)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHPARTNEREFFECTLIST_OFFSET UNITYSDK_OFFSET(0xB25F230)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__TRYSETACTIONDATAHIGHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0xB2609B0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__UINTCLAMP_OFFSET UNITYSDK_OFFSET(0xB261590)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusChangeInfo_TypeDefinitionIndex = 57171;

	class SwordTrainingStatusChangeInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _CALCULATE_MULTIPLY_RATIO = 0x2710; // 0x0
		::Il2CppArray<::System::UInt32>* _Status; // 0x10
		::Il2CppArray<::System::UInt32>* _ExtraStatusGetRatio; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>* _ActiveEffectList; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>* _AllEffectList; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>* _DynamicEffectList; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>* _PartnerEffectList; // 0x38
		::RPG::Client::SwordTrainingGameInstance* _OwnerGame; // 0x40
		::System::Int32 _MoodCostRatio; // 0x48
		::System::UInt32 _MoodMinValue; // 0x4C
		::System::Boolean _NeedRefreshPartnerAbilityList; // 0x50
		::System::UInt32 _MoodValue_k__BackingField; // 0x54
		::System::Int32 _PartnerAffectRatio; // 0x58
		::System::UInt32 _LastMoodValue; // 0x5C
		::RPG::Client::SwordTrainingStatusChangeInfo_StatusChangeFlag _ChangeFlag; // 0x60
		::System::Int32 _MoodAffectRatio; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStatusChangeInfo* Create(::RPG::Client::SwordTrainingGameInstance* owner)
		{
			return ((::RPG::Client::SwordTrainingStatusChangeInfo*(*)(::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CREATE_OFFSET))(owner);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_RESET_OFFSET))(this);
		}

		::System::Void SetMoodMinimumValue(::System::UInt32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOODMINIMUMVALUE_OFFSET))(this, val);
		}

		::System::Void ModifyPartnerAffectRatio(::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYPARTNERAFFECTRATIO_OFFSET))(this, delta);
		}

		::System::Void ModifyMoodAffectRatio(::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODAFFECTRATIO_OFFSET))(this, delta);
		}

		::System::Void ModifyMoodCostRatio(::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODCOSTRATIO_OFFSET))(this, delta);
		}

		::System::Int32 GetMoodAffectRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODAFFECTRATIO_OFFSET))(this);
		}

		::System::UInt32 GetMaxCanCostMoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMAXCANCOSTMOODVALUE_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingActionType GetCurActionType()
		{
			return ((::RPG::GameCore::SwordTrainingActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETCURACTIONTYPE_OFFSET))(this);
		}

		::System::Void PreCalculateChangeWithActionSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* selection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_PRECALCULATECHANGEWITHACTIONSELECTION_OFFSET))(this, selection);
		}

		::System::Boolean IsMoodChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISMOODCHANGE_OFFSET))(this);
		}

		::System::Boolean IsStatusChange(::System::Int32 typeInt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISSTATUSCHANGE_OFFSET))(this, typeInt);
		}

		::System::Int32 GetMoodChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODCHANGEVALUE_OFFSET))(this);
		}

		::System::UInt32 GetStatusChangeValue(::System::Int32 typeInt)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETSTATUSCHANGEVALUE_OFFSET))(this, typeInt);
		}

		::System::Void AddSkillPoint(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSKILLPOINT_OFFSET))(this, val, source);
		}

		::System::Void AddMood(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDMOOD_OFFSET))(this, val, source);
		}

		::System::Void SubMood(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SUBMOOD_OFFSET))(this, val, source);
		}

		::System::Void AddStatus(::System::UInt32 typeInt, ::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSTATUS_OFFSET))(this, typeInt, val, source);
		}

		::System::Void SetMood(::System::UInt32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOOD_OFFSET))(this, val);
		}

		::System::Void AddExtraStatusGetRatio(::System::UInt32 statusTypeInt, ::System::UInt32 ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDEXTRASTATUSGETRATIO_OFFSET))(this, statusTypeInt, ratio);
		}

		::System::Void AddDynamicEffects(::System::Collections::Generic::IList_1<::System::UInt32>* effectIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDDYNAMICEFFECTS_OFFSET))(this, effectIDs);
		}

		::System::UInt32 GetRemainMood()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETREMAINMOOD_OFFSET))(this);
		}

		::System::UInt32 GetValueWithRatio(::System::UInt32 source, ::System::Int32 ratio)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETVALUEWITHRATIO_OFFSET))(this, source, ratio);
		}

		::System::Void _RefreshActiveEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHACTIVEEFFECTLIST_OFFSET))(this);
		}

		::System::Void _OnActionStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONSTART_OFFSET))(this);
		}

		::System::Void _OnPreActionDataEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPREACTIONDATAEFFECT_OFFSET))(this);
		}

		::System::Void _OnActionDataEffect(::RPG::Client::SwordTraining::SwordTrainingActionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONDATAEFFECT_OFFSET))(this, data);
		}

		::System::Void _OnPostActionDataEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPOSTACTIONDATAEFFECT_OFFSET))(this);
		}

		::System::Void _HandleHighlightSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* selection, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__HANDLEHIGHLIGHTSELECTION_OFFSET))(this, selection, index);
		}

		::System::UInt32 _UIntClamp(::System::UInt32 value, ::System::UInt32 min, ::System::UInt32 max)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__UINTCLAMP_OFFSET))(this, value, min, max);
		}

		::System::Void _FillEffectListWithEffectIDArr(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>* targetList, ::Il2CppArray<::System::UInt32>* effectIDArr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_630*>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__FILLEFFECTLISTWITHEFFECTIDARR_OFFSET))(this, targetList, effectIDArr);
		}

		::System::Void _RefreshPartnerEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHPARTNEREFFECTLIST_OFFSET))(this);
		}

		::System::Void _OnActionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONEND_OFFSET))(this);
		}

		::System::Void _TrySetActionDataHighlightState(::RPG::Client::SwordTraining::SwordTrainingActionSelection* selection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__TRYSETACTIONDATAHIGHLIGHTSTATE_OFFSET))(this, selection);
		}

		::System::Void _OnAssistPartnerChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONASSISTPARTNERCHANGE_OFFSET))(this, arg);
		}

		::System::UInt32 _GetValueWithRatio(::System::UInt32 val, ::System::Int32 ratio)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__GETVALUEWITHRATIO_OFFSET))(this, val, ratio);
		}

		::System::UInt32 _PreProcess(::System::UInt32 origin)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__PREPROCESS_OFFSET))(this, origin);
		}

		::System::UInt32 _PostProcess(::System::UInt32 origin)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__POSTPROCESS_OFFSET))(this, origin);
		}

		::System::UInt32 get_MoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODVALUE_OFFSET))(this);
		}

		::System::Void set_MoodValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SET_MOODVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_MoodMaxValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODMAXVALUE_OFFSET))(this);
		}

		::System::Boolean get__IsCurTrainingAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET__ISCURTRAININGACTION_OFFSET))(this);
		}
	};
}
