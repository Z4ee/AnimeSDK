#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_5.h"
#include "unitysdk/Enum_3_501339D5CF922B98.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_448;
class Class_1_3D174A36CEBCAEC9;
class Class_2_92000B7593AF5DF1;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CHECKDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0xFE8E6A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLOSEPHOTOUI_OFFSET UNITYSDK_OFFSET(0xFE8F770)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_COOLDOWNSKILL_OFFSET UNITYSDK_OFFSET(0xFE8E000)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CREATEBATTLEPHOTOQUESTTIPS_OFFSET UNITYSDK_OFFSET(0xFE90550)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DESTROYDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0xFE8E560)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DISABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0xFE8E660)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0xFE8E620)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENTERBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0xFE92640)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXECUTEDYNAMICTREEINSTANCE_OFFSET UNITYSDK_OFFSET(0xFE8E820)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0xFE92950)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ALLTARGETS_OFFSET UNITYSDK_OFFSET(0xFE8E2A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0xFE8FAB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET UNITYSDK_OFFSET(0xFE8FAC0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISCANUSECAMERASKILL_OFFSET UNITYSDK_OFFSET(0xFE8FBA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISIMMERSIVEMODE_OFFSET UNITYSDK_OFFSET(0xFE8FC00)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0xFE922C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINSKILLCD_OFFSET UNITYSDK_OFFSET(0xFE8D020)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISMAINTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0xFE8FD30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xFE8D3C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLENERGYENOUGH_OFFSET UNITYSDK_OFFSET(0xFE8D2E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSUBTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0xFE8FEA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAINGROUPS_OFFSET UNITYSDK_OFFSET(0xFE8E2B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAXSKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8D0C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8D0B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SCOREINT_OFFSET UNITYSDK_OFFSET(0xFE910B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDRATIO_OFFSET UNITYSDK_OFFSET(0xFE8D040)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDTIMER_OFFSET UNITYSDK_OFFSET(0xFE8D030)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYRATIO_OFFSET UNITYSDK_OFFSET(0xFE8D340)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xFE8D0D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8D330)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SUBGROUPS_OFFSET UNITYSDK_OFFSET(0xFE8E2C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8D0E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET UNITYSDK_OFFSET(0xFE91240)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0xFE8E370)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xFE8D3D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEQUESTTARGET_OFFSET UNITYSDK_OFFSET(0xFE90010)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYSKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8E1E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGETTIPSSHOW_OFFSET UNITYSDK_OFFSET(0xFE90CA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGET_OFFSET UNITYSDK_OFFSET(0xFE8EC90)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_NOTIFYCAMERASKILL_OFFSET UNITYSDK_OFFSET(0xFE90BA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE922E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCAMERATIPSSHOW_OFFSET UNITYSDK_OFFSET(0xFE90A10)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCLICKUSEPHOTOSKILLBTN_OFFSET UNITYSDK_OFFSET(0xFE8F9D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFE92470)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONENTERMODE_OFFSET UNITYSDK_OFFSET(0xFE92690)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONEXITMODE_OFFSET UNITYSDK_OFFSET(0xFE929A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONLEVELCONDITIONSUCCESS_OFFSET UNITYSDK_OFFSET(0xFE8EEB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONPHOTOUICLOSE_OFFSET UNITYSDK_OFFSET(0xFE8F870)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE925F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_OPENPHOTOUI_OFFSET UNITYSDK_OFFSET(0xFE8EF10)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET UNITYSDK_OFFSET(0xFE91FA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0xFE917A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0xFE8EB30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET UNITYSDK_OFFSET(0xFE91A40)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REFRESHSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xFE8DD70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET UNITYSDK_OFFSET(0xFE8E2D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REMOVEONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8E140)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_RESETLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0xFE8E790)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SETSKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8E240)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0xFE922D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0xFE8D0F0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKCOOLDOWN_OFFSET UNITYSDK_OFFSET(0xFE8DA30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKENERGYAUTORECOVERY_OFFSET UNITYSDK_OFFSET(0xFE8DB90)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xFE8D550)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYEXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0xFE8F960)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYTRIGGERCAMERAPAGENEWBIE_OFFSET UNITYSDK_OFFSET(0xFE8F3A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0xFE8FA20)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE92C30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE92ED0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFE92F60)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE92FF0)

namespace MoleMole
{
	inline static constexpr unsigned int BattlePhotoSubsystem_TypeDefinitionIndex = 63186;

	class BattlePhotoSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattlePhotoSubsystem*>
	{
	public:
		// static const ::System::Int32 SKILL_ENERGY_SLOT_NUM = 0x3; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_92000B7593AF5DF1*>*>* _targetGroups; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* _levelConditionSuccessCache; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _subGroups; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>* _battlePhotoTargetGroups; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_448*>* _cameraTips; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _dynTreeInstID; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_448*>* _groupTips; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _allTargets; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* _mainGroups; // 0x50
		::System::Boolean MuteSkillEnergyChange; // 0x58
		::System::Single __skillEnergy; // 0x5C
		::System::Single _skillCDTimer; // 0x60
		::Enum_3_501339D5CF922B98 _skillEnergySlotType; // 0x64
		::System::Single _oneSlotSkillEnergy; // 0x68
		::System::Boolean _isLevelConditionCheckEnabled; // 0x6C
		::System::Boolean _isSkillActiveHighlight; // 0x6D
		::System::Boolean _isInSkillCD; // 0x6E
		::System::Boolean _IsInBattlePhotoMode_k__BackingField; // 0x6F
		::System::Single _maxSkillCDTime; // 0x70
		::System::Single _maxSkillEnergy; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInSkillCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINSKILLCD_OFFSET))(this);
		}

		::System::Single get_SkillCDTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDTIMER_OFFSET))(this);
		}

		::System::Single get_SkillCDRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDRATIO_OFFSET))(this);
		}

		::System::Single get_OneSlotSkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ONESLOTSKILLENERGY_OFFSET))(this);
		}

		::System::Single get_MaxSkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAXSKILLENERGY_OFFSET))(this);
		}

		::Enum_3_501339D5CF922B98 get_SkillEnergySlotType()
		{
			return ((::Enum_3_501339D5CF922B98(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYSLOTTYPE_OFFSET))(this);
		}

		::System::Single get__skillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET__SKILLENERGY_OFFSET))(this);
		}

		::System::Void set__skillEnergy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET__SKILLENERGY_OFFSET))(this, value);
		}

		::System::Single get_SkillEnergy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGY_OFFSET))(this);
		}

		::System::Single get_SkillEnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsSkillEnergyEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLENERGYENOUGH_OFFSET))(this);
		}

		::System::Boolean get_IsSkillActiveHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLACTIVEHIGHLIGHT_OFFSET))(this);
		}

		::System::Void InitGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEPLAY_OFFSET))(this);
		}

		::System::Void TickGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKGAMEPLAY_OFFSET))(this);
		}

		::System::Void TickEnergyAutoRecovery(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKENERGYAUTORECOVERY_OFFSET))(this, deltaTime);
		}

		::System::Void TickCoolDown(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKCOOLDOWN_OFFSET))(this, deltaTime);
		}

		::System::Void CoolDownSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_COOLDOWNSKILL_OFFSET))(this);
		}

		::System::Void RefreshSkillActiveHighlight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REFRESHSKILLACTIVEHIGHLIGHT_OFFSET))(this);
		}

		::System::Void RemoveOneSlotSkillEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REMOVEONESLOTSKILLENERGY_OFFSET))(this);
		}

		::System::Void ModifySkillEnergy(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYSKILLENERGY_OFFSET))(this, delta);
		}

		::System::Void SetSkillEnergy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SETSKILLENERGY_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_AllTargets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ALLTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_MainGroups()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAINGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_SubGroups()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SUBGROUPS_OFFSET))(this);
		}

		::System::Void RegisterTargetGroup(::System::Int32 groupID, ::System::Int32 targetID, ::Enum_3_121CF606CB7E9CD1_5 targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_121CF606CB7E9CD1_5))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET))(this, groupID, targetID, targetType);
		}

		::System::Void InitDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void DestroyDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DESTROYDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void EnableLevelConditionCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENABLELEVELCONDITIONCHECK_OFFSET))(this);
		}

		::System::Void DisableLevelConditionCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DISABLELEVELCONDITIONCHECK_OFFSET))(this);
		}

		::System::Void CheckDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CHECKDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void ResetLevelConditionResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_RESETLEVELCONDITIONRESULT_OFFSET))(this);
		}

		::System::Void ExecuteDynamicTreeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXECUTEDYNAMICTREEINSTANCE_OFFSET))(this);
		}

		::System::Void ProcessLevelConditionResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSLEVELCONDITIONRESULT_OFFSET))(this);
		}

		::System::Void OnLevelConditionSuccess(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONLEVELCONDITIONSUCCESS_OFFSET))(this, id);
		}

		::System::Void OpenPhotoUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_OPENPHOTOUI_OFFSET))(this);
		}

		::System::Void TryTriggerCameraPageNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYTRIGGERCAMERAPAGENEWBIE_OFFSET))(this);
		}

		::System::Void ClosePhotoUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLOSEPHOTOUI_OFFSET))(this);
		}

		::System::Void OnPhotoUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONPHOTOUICLOSE_OFFSET))(this);
		}

		::System::Void OnClickUsePhotoSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCLICKUSEPHOTOSKILLBTN_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>* get_BattlePhotoTargetGroups()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET))(this);
		}

		::Class_1_3D174A36CEBCAEC9* get_CameraTipRuntime()
		{
			return ((::Class_1_3D174A36CEBCAEC9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseCameraSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISCANUSECAMERASKILL_OFFSET))(this);
		}

		::System::Boolean get_IsImmersiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISIMMERSIVEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsMainTargetsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISMAINTARGETSFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsSubTargetsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSUBTARGETSFINISH_OFFSET))(this);
		}

		::System::Void InitGameQuestTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEQUESTTARGET_OFFSET))(this);
		}

		::System::Void CreateBattlePhotoQuestTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CREATEBATTLEPHOTOQUESTTIPS_OFFSET))(this);
		}

		::System::Void OnCameraTipsShow(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCAMERATIPSSHOW_OFFSET))(this, obj);
		}

		::System::Void ModifyTarget(::System::Int32 targetID, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGET_OFFSET))(this, targetID, isFinish);
		}

		::System::Void ModifyTargetTipsShow(::System::Collections::Generic::List_1<::Class_2_92000B7593AF5DF1*>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_92000B7593AF5DF1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGETTIPSSHOW_OFFSET))(this, groups);
		}

		::System::Void NotifyCameraSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_NOTIFYCAMERASKILL_OFFSET))(this);
		}

		::System::Int32 get_ScoreInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SCOREINT_OFFSET))(this);
		}

		::System::Void HandlePhotoResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET))(this);
		}

		::System::Void ProcessBattlePhotoTargetGroups(::System::Collections::Generic::List_1<::System::Int32>* groupIDList, ::System::Collections::Generic::List_1<::System::Int32>*& finishedIDList, ::System::Int32& targetsScore, ::System::Boolean& targetsAllFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET))(this, groupIDList, finishedIDList, targetsScore, targetsAllFinished);
		}

		::System::Void PushTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET))(this);
		}

		::System::Void PopTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET))(this);
		}

		::System::Boolean get_IsInBattlePhotoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void set_IsInBattlePhotoMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_ISINBATTLEPHOTOMODE_OFFSET))(this, value);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnterBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENTERBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void ExitBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXITBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void TryExitBattlePhotoMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYEXITBATTLEPHOTOMODE_OFFSET))(this);
		}

		::System::Void UseSKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_USESKILL_OFFSET))(this);
		}

		::System::Void OnEnterMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONENTERMODE_OFFSET))(this);
		}

		::System::Void OnExitMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONEXITMODE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
