#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
#include "unitysdk/RPG/Client/SwordTrainingStatusChangeInfo_ActiveEffectEnumerator_1.h"
#include "unitysdk/RPG/Client/SwordTrainingStatusChangeInfo_StatusChangeFlag.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_727;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDDYNAMICEFFECTS_OFFSET UNITYSDK_OFFSET(0xE13D990)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDEXTRASTATUSGETRATIO_OFFSET UNITYSDK_OFFSET(0xE13D8B0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDMOOD_OFFSET UNITYSDK_OFFSET(0xE13D080)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSKILLPOINT_OFFSET UNITYSDK_OFFSET(0xE13D030)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0xE13D420)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xE12BD80)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xE12E160)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE12D190)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETCURACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xE13AC80)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMAXCANCOSTMOODVALUE_OFFSET UNITYSDK_OFFSET(0xE13AC30)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xE13ABF0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE13CF00)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETREMAINMOOD_OFFSET UNITYSDK_OFFSET(0xE13E000)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETSTATUSCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE13CF50)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETVALUEWITHRATIO_OFFSET UNITYSDK_OFFSET(0xE13E090)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODMAXVALUE_OFFSET UNITYSDK_OFFSET(0xE13A940)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xE13E520)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET__ISCURTRAININGACTION_OFFSET UNITYSDK_OFFSET(0xE13AA40)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xE13A630)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISMOODCHANGE_OFFSET UNITYSDK_OFFSET(0xE13CE60)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xE13CEB0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xE13AAB0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODCOSTRATIO_OFFSET UNITYSDK_OFFSET(0xE13AB50)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYPARTNERAFFECTRATIO_OFFSET UNITYSDK_OFFSET(0xE13A9A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_PRECALCULATECHANGEWITHACTIONSELECTION_OFFSET UNITYSDK_OFFSET(0xE123970)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_RESET_OFFSET UNITYSDK_OFFSET(0xE13A6F0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOODMINIMUMVALUE_OFFSET UNITYSDK_OFFSET(0xE13A8A0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOOD_OFFSET UNITYSDK_OFFSET(0xE13D860)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SET_MOODVALUE_OFFSET UNITYSDK_OFFSET(0xE13E530)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SUBMOOD_OFFSET UNITYSDK_OFFSET(0xE13D190)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE13A570)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__FILLEFFECTLISTWITHEFFECTIDARR_OFFSET UNITYSDK_OFFSET(0xE13E1C0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__GETVALUEWITHRATIO_OFFSET UNITYSDK_OFFSET(0xE13E400)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__HANDLEHIGHLIGHTSELECTION_OFFSET UNITYSDK_OFFSET(0xE13BDA0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xE13B870)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONEND_OFFSET UNITYSDK_OFFSET(0xE13C510)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONSTART_OFFSET UNITYSDK_OFFSET(0xE13B0E0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONASSISTPARTNERCHANGE_OFFSET UNITYSDK_OFFSET(0xE13E3B0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPOSTACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xE13BB90)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPREACTIONDATAEFFECT_OFFSET UNITYSDK_OFFSET(0xE13B350)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__POSTPROCESS_OFFSET UNITYSDK_OFFSET(0xE13E4C0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__PREPROCESS_OFFSET UNITYSDK_OFFSET(0xE13E470)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHACTIVEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xE13DE50)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHPARTNEREFFECTLIST_OFFSET UNITYSDK_OFFSET(0xE13ACE0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__TRYSETACTIONDATAHIGHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0xE13C6F0)
#define RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__UINTCLAMP_OFFSET UNITYSDK_OFFSET(0xE13D3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusChangeInfo_TypeDefinitionIndex = 62062;

	class SwordTrainingStatusChangeInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _CALCULATE_MULTIPLY_RATIO = 0x2710; // 0x0
		::Il2CppArray<::System::UInt32>* _ExtraStatusGetRatio; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>* _AllEffectList; // 0x18
		::Il2CppArray<::System::UInt32>* _Status; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>* _ActiveEffectList; // 0x28
		::RPG::Client::SwordTrainingGameInstance* _OwnerGame; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>* _DynamicEffectList; // 0x38
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>* _PartnerEffectList; // 0x40
		::System::Int32 _MoodAffectRatio; // 0x48
		::System::Boolean _NeedRefreshPartnerAbilityList; // 0x4C
		::RPG::Client::SwordTrainingStatusChangeInfo_StatusChangeFlag _ChangeFlag; // 0x50
		::System::UInt32 _LastMoodValue; // 0x54
		::System::UInt32 _MoodMinValue; // 0x58
		::System::UInt32 _MoodValue_k__BackingField; // 0x5C
		::System::Int32 _MoodCostRatio; // 0x60
		::System::Int32 _PartnerAffectRatio; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStatusChangeInfo* Create(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::RPG::Client::SwordTrainingStatusChangeInfo*(*)(::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_CREATE_OFFSET))(a1);
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

		::System::Void SetMoodMinimumValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOODMINIMUMVALUE_OFFSET))(this, a1);
		}

		::System::Void ModifyPartnerAffectRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYPARTNERAFFECTRATIO_OFFSET))(this, a1);
		}

		::System::Void ModifyMoodAffectRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODAFFECTRATIO_OFFSET))(this, a1);
		}

		::System::Void ModifyMoodCostRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_MODIFYMOODCOSTRATIO_OFFSET))(this, a1);
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

		::System::Void PreCalculateChangeWithActionSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_PRECALCULATECHANGEWITHACTIONSELECTION_OFFSET))(this, a1);
		}

		::System::Boolean IsMoodChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISMOODCHANGE_OFFSET))(this);
		}

		::System::Boolean IsStatusChange(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ISSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Int32 GetMoodChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETMOODCHANGEVALUE_OFFSET))(this);
		}

		::System::UInt32 GetStatusChangeValue(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETSTATUSCHANGEVALUE_OFFSET))(this, a1);
		}

		::System::Void AddSkillPoint(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSKILLPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void AddMood(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDMOOD_OFFSET))(this, a1, a2);
		}

		::System::Void SubMood(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SUBMOOD_OFFSET))(this, a1, a2);
		}

		::System::Void AddStatus(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMood(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SETMOOD_OFFSET))(this, a1);
		}

		::System::Void AddExtraStatusGetRatio(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDEXTRASTATUSGETRATIO_OFFSET))(this, a1, a2);
		}

		::System::Void AddDynamicEffects(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_ADDDYNAMICEFFECTS_OFFSET))(this, a1);
		}

		::System::UInt32 GetRemainMood()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETREMAINMOOD_OFFSET))(this);
		}

		::System::UInt32 GetValueWithRatio(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GETVALUEWITHRATIO_OFFSET))(this, a1, a2);
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

		::System::Void _OnActionDataEffect(::RPG::Client::SwordTraining::SwordTrainingActionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONDATAEFFECT_OFFSET))(this, a1);
		}

		::System::Void _OnPostActionDataEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONPOSTACTIONDATAEFFECT_OFFSET))(this);
		}

		::System::Void _HandleHighlightSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__HANDLEHIGHLIGHTSELECTION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _UIntClamp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__UINTCLAMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FillEffectListWithEffectIDArr(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_727*>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__FILLEFFECTLISTWITHEFFECTIDARR_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshPartnerEffectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__REFRESHPARTNEREFFECTLIST_OFFSET))(this);
		}

		::System::Void _OnActionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONACTIONEND_OFFSET))(this);
		}

		::System::Void _TrySetActionDataHighlightState(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__TRYSETACTIONDATAHIGHLIGHTSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnAssistPartnerChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__ONASSISTPARTNERCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetValueWithRatio(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__GETVALUEWITHRATIO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _PreProcess(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__PREPROCESS_OFFSET))(this, a1);
		}

		::System::UInt32 _PostProcess(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO__POSTPROCESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_GET_MOODVALUE_OFFSET))(this);
		}

		::System::Void set_MoodValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSCHANGEINFO_SET_MOODVALUE_OFFSET))(this, a1);
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
