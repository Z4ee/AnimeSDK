#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1.h"
#include "unitysdk/Enum_3_501339D5CF922B98.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_0_16E4307DCC419505_438;
class Class_1_6F443BE276CFC95D;
class Class_2_92000B7593AF5DF1;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CHECKDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x14346320)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLEARDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x143461E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLEARTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x14347D90)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLOSEPHOTOUI_OFFSET UNITYSDK_OFFSET(0x14347360)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_COOLDOWNSKILL_OFFSET UNITYSDK_OFFSET(0x14345C70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CREATEBATTLEPHOTOQUESTTIPS_OFFSET UNITYSDK_OFFSET(0x14348490)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_DISABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x143462E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENABLELEVELCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x143462A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENDHOLDTIMESLOW_OFFSET UNITYSDK_OFFSET(0x1434A190)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENTERBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x1434B2E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXECUTEDYNAMICTREEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14346490)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_EXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x1434B950)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ALLTARGETS_OFFSET UNITYSDK_OFFSET(0x14345F10)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x14347840)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET UNITYSDK_OFFSET(0x14347850)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_HOLDTIMESLOWSCALE_OFFSET UNITYSDK_OFFSET(0x14349850)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISCANUSECAMERASKILL_OFFSET UNITYSDK_OFFSET(0x14347920)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISIMMERSIVEMODE_OFFSET UNITYSDK_OFFSET(0x14347980)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x1434AC50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISINSKILLCD_OFFSET UNITYSDK_OFFSET(0x14344CA0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISMAINTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0x14347AB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x14345040)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSKILLENERGYENOUGH_OFFSET UNITYSDK_OFFSET(0x14344F60)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ISSUBTARGETSFINISH_OFFSET UNITYSDK_OFFSET(0x14347C20)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAINGROUPS_OFFSET UNITYSDK_OFFSET(0x14345F20)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_MAXSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14344D40)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_ONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14344D30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDRATIO_OFFSET UNITYSDK_OFFSET(0x14344CC0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLCDTIMER_OFFSET UNITYSDK_OFFSET(0x14344CB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x14344FC0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x14344D50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14344FB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_SUBGROUPS_OFFSET UNITYSDK_OFFSET(0x14345F30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14344D60)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET UNITYSDK_OFFSET(0x14349000)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HASVALIDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1434B1D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x14345FE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x14345050)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITTARGETGROUPBYGAMEQUEST_OFFSET UNITYSDK_OFFSET(0x14347F30)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x143480A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14345E50)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGETTIPSSHOW_OFFSET UNITYSDK_OFFSET(0x14348BE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_MODIFYTARGET_OFFSET UNITYSDK_OFFSET(0x14346900)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_NOTIFYCAMERASKILL_OFFSET UNITYSDK_OFFSET(0x14348AE0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONACTIVATECAMERAMODE_OFFSET UNITYSDK_OFFSET(0x143476A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1434AC70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCAMERATIPSSHOW_OFFSET UNITYSDK_OFFSET(0x14348950)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONCLICKUSEPHOTOSKILLBTN_OFFSET UNITYSDK_OFFSET(0x143475C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1434AF10)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONENTERMODE_OFFSET UNITYSDK_OFFSET(0x1434B330)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONEXITMODE_OFFSET UNITYSDK_OFFSET(0x1434B9A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONLEVELCONDITIONSUCCESS_OFFSET UNITYSDK_OFFSET(0x14346B20)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONPHOTOUICLOSE_OFFSET UNITYSDK_OFFSET(0x14347460)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1434B290)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_OPENPHOTOUI_OFFSET UNITYSDK_OFFSET(0x14346B80)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET UNITYSDK_OFFSET(0x14349E70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x143495B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x143467A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET UNITYSDK_OFFSET(0x14349910)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REFRESHSKILLACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x143459E0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x14345F40)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REINITTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1434B230)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REMOVEONESLOTSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14345DB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_RESETLEVELCONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x14346400)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SETSKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14345EB0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_HOLDTIMESLOWSCALE_OFFSET UNITYSDK_OFFSET(0x143498B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_ISINBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x1434AC60)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET__SKILLENERGY_OFFSET UNITYSDK_OFFSET(0x14344D70)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_STARTHOLDTIMESLOW_OFFSET UNITYSDK_OFFSET(0x1434A4B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SYNCALLANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0x1434A950)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x143456A0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKENERGYAUTORECOVERY_OFFSET UNITYSDK_OFFSET(0x14345800)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TICKGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x143451D0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYEXITBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x14347550)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_TRYTRIGGERCAMERAPAGENEWBIE_OFFSET UNITYSDK_OFFSET(0x14346F90)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0x14347610)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1434C2B0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1434C010)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1434C2C0)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1434C350)
#define MOLEMOLE_BATTLEPHOTOSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1434C3E0)

namespace MoleMole
{
	inline static constexpr unsigned int BattlePhotoSubsystem_TypeDefinitionIndex = 56930;

	class BattlePhotoSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattlePhotoSubsystem*>
	{
	public:
		static ::System::Single* StaticGet__HoldTimeSlowScale_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BattlePhotoSubsystem_TypeDefinitionIndex)->GetStaticField(0xC9D0);
		}
		// static const ::System::Int32 SKILL_ENERGY_SLOT_NUM = 0x3; // 0x0
		// static const ::System::Single HOLD_TIMESLOW_SCALE; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _mainGroups; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _allTargets; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_438*>* _groupTips; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _subGroups; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _dynTreeInstID; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* _levelConditionSuccessCache; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_92000B7593AF5DF1*>*>* _targetGroups; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>* _battlePhotoTargetGroups; // 0x48
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_438*>* _cameraTips; // 0x50
		::System::Single _skillCDTimer; // 0x58
		::Enum_3_501339D5CF922B98 _skillEnergySlotType; // 0x5C
		::System::Single _maxSkillEnergy; // 0x60
		::System::Single _oneSlotSkillEnergy; // 0x64
		::System::Boolean MuteSkillEnergyChange; // 0x68
		::System::Boolean _isSkillActiveHighlight; // 0x69
		::System::Boolean _IsInBattlePhotoMode_k__BackingField; // 0x6A
		::System::Boolean _isInSkillCD; // 0x6B
		::System::Boolean _isInHoldTimeSlow; // 0x6C
		::System::Boolean _isLevelConditionCheckEnabled; // 0x6D
		::System::Single __skillEnergy; // 0x70
		::System::Single _maxSkillCDTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM__CCTOR_OFFSET))();
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

		::System::Void RegisterTargetGroup(::System::Int32 groupID, ::System::Int32 targetID, ::Enum_3_121CF606CB7E9CD1 targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_121CF606CB7E9CD1))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REGISTERTARGETGROUP_OFFSET))(this, groupID, targetID, targetType);
		}

		::System::Void InitDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITDYNAMICLEVELCONDITION_OFFSET))(this);
		}

		::System::Void ClearDynamicLevelCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLEARDYNAMICLEVELCONDITION_OFFSET))(this);
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

		::System::Void OnActivateCameraMode(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ONACTIVATECAMERAMODE_OFFSET))(this, obj);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>* get_BattlePhotoTargetGroups()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_92000B7593AF5DF1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_BATTLEPHOTOTARGETGROUPS_OFFSET))(this);
		}

		::Class_1_6F443BE276CFC95D* get_CameraTipRuntime()
		{
			return ((::Class_1_6F443BE276CFC95D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_CAMERATIPRUNTIME_OFFSET))(this);
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

		::System::Void ClearTargetGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_CLEARTARGETGROUP_OFFSET))(this);
		}

		::System::Void InitTargetGroupByGameQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITTARGETGROUPBYGAMEQUEST_OFFSET))(this);
		}

		::System::Void InitTargetGroup(::System::Collections::Generic::List_1<::System::Int32>* targetGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_INITTARGETGROUP_OFFSET))(this, targetGroupID);
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

		::System::Void HandlePhotoResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HANDLEPHOTORESULT_OFFSET))(this);
		}

		::System::Void ProcessBattlePhotoTargetGroups(::System::Collections::Generic::List_1<::System::Int32>* groupIDList, ::System::Collections::Generic::List_1<::System::Int32>*& finishedIDList, ::System::Int32& targetsScore, ::System::Boolean& targetsAllFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PROCESSBATTLEPHOTOTARGETGROUPS_OFFSET))(this, groupIDList, finishedIDList, targetsScore, targetsAllFinished);
		}

		static ::System::Single get_HoldTimeSlowScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_GET_HOLDTIMESLOWSCALE_OFFSET))();
		}

		static ::System::Void set_HoldTimeSlowScale(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SET_HOLDTIMESLOWSCALE_OFFSET))(value);
		}

		::System::Void PushTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_PUSHTIMESLOW_OFFSET))(this);
		}

		::System::Void PopTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_POPTIMESLOW_OFFSET))(this);
		}

		::System::Void StartHoldTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_STARTHOLDTIMESLOW_OFFSET))(this);
		}

		::System::Void EndHoldTimeSlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_ENDHOLDTIMESLOW_OFFSET))(this);
		}

		::System::Void SyncAllAnimatorSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_SYNCALLANIMATORSPEED_OFFSET))(this);
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

		::System::Boolean HasValidTargetGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_HASVALIDTARGETGROUP_OFFSET))(this);
		}

		::System::Void ReInitTargetGroup(::System::Collections::Generic::List_1<::System::Int32>* targetGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEPHOTOSUBSYSTEM_REINITTARGETGROUP_OFFSET))(this, targetGroupID);
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
