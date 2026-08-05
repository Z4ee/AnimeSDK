#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_133B62C3E053DEAA.h"
#include "unitysdk/Enum_3_22E7F79BA96A1935.h"
#include "unitysdk/Enum_3_37484F1EF48B365A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_66C4D81440373C6E;
class Class_1_9B1B6D841EE9533F;
class Class_1_B7E341C5F1A6F199;
class Class_1_F4B9B711B59FF7D4;
class Class_2_208CC9941471731A_806;
class Class_2_208CC9941471731A_980;
class Class_2_A944C35C433158AC;
class Class_3_F33F9DC5F4112336;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class MusicBattleSubSystem_LevelPressInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET UNITYSDK_OFFSET(0x1726C2F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET UNITYSDK_OFFSET(0x1726C440)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET UNITYSDK_OFFSET(0x17270120)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x17270830)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET UNITYSDK_OFFSET(0x1726FF70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET UNITYSDK_OFFSET(0x1726EE90)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET UNITYSDK_OFFSET(0x1726EBA0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET UNITYSDK_OFFSET(0x17270B80)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET UNITYSDK_OFFSET(0x172706F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET UNITYSDK_OFFSET(0x17270890)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x17270580)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x17270660)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET UNITYSDK_OFFSET(0x17270F60)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x1726C720)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET UNITYSDK_OFFSET(0x1726C8C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET UNITYSDK_OFFSET(0x1726BA70)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x1726BA50)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x1726BA30)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x1726F040)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1726BBB0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET UNITYSDK_OFFSET(0x1726C5A0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1726BB40)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x172702C0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1726F600)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x17270A40)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1726CB90)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET UNITYSDK_OFFSET(0x172704F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1726C650)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x17270ED0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1726C160)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET UNITYSDK_OFFSET(0x17270AE0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET UNITYSDK_OFFSET(0x1726F5B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1726E4D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET UNITYSDK_OFFSET(0x1726D670)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET UNITYSDK_OFFSET(0x1726CB20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1726BEB0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET UNITYSDK_OFFSET(0x1726CEC0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET UNITYSDK_OFFSET(0x1726FD20)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET UNITYSDK_OFFSET(0x1726BA60)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET UNITYSDK_OFFSET(0x1726BA40)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET UNITYSDK_OFFSET(0x1726E9D0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET UNITYSDK_OFFSET(0x1726E850)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET UNITYSDK_OFFSET(0x1726EA90)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET UNITYSDK_OFFSET(0x1726E910)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17271270)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x172710F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET UNITYSDK_OFFSET(0x172708F0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17271290)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17271320)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x172713B0)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17271440)
#define MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x172714D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MusicBattleSubSystem_TypeDefinitionIndex = 69619;

	class MusicBattleSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::Battle::MusicBattleSubSystem*>
	{
	public:
		static ::System::Single* StaticGet_missTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB10);
		}
		static ::System::Single* StaticGet_tempSpeedUpRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB14);
		}
		static ::System::Single* StaticGet_perfectTimeDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB18);
		}
		static ::System::Single* StaticGet_inputDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB1C);
		}
		static ::System::Single* StaticGet_dodgeWindow()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB20);
		}
		static ::System::Single* StaticGet_displayDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB24);
		}
		static ::System::Single* StaticGet_feverDecayPerSecond()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB28);
		}
		static ::System::Single* StaticGet_tipDelayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MusicBattleSubSystem_TypeDefinitionIndex)->GetStaticField(0xDB2C);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MusicBattleMarkerNodeType, ::MoleMole::LogicButtonInputType>* markerToButtonInputDict; // 0x10
		::Class_1_66C4D81440373C6E* localAvatarFighter; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_22E7F79BA96A1935, ::System::Collections::Generic::List_1<::Class_1_F4B9B711B59FF7D4*>*>* conditionMap; // 0x20
		::Class_2_A944C35C433158AC* curTask; // 0x28
		::Class_3_F33F9DC5F4112336* cachedBonusLocalAvatarAnimatorComponent; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Battle::MusicBattleSubSystem_LevelPressInfo*>* LevelPressInfoList; // 0x38
		::Class_2_208CC9941471731A_980* curStageConfigTemplate; // 0x40
		::Class_1_9B1B6D841EE9533F* musicBattleStatisticData; // 0x48
		::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::MusicBattleMarkerNodeType>* inputColorDict; // 0x50
		::System::Action_1<::System::Single>* Tick; // 0x58
		::Class_1_66C4D81440373C6E* bossFighter; // 0x60
		::System::UInt32 curMusicPlayingID; // 0x68
		::System::UInt32 curMusicPendingID; // 0x6C
		::System::Double curTime; // 0x70
		::System::Int32 curHintIndex; // 0x78
		::System::Int32 curCheckIndex; // 0x7C
		::System::Boolean hasAddedAnimatorCB; // 0x80
		::System::Boolean _isInFever_k__BackingField; // 0x81
		::System::Boolean isLastPause; // 0x82
		::System::UInt32 firstLocalAvatarEntityID; // 0x84
		::System::Int32 curCheckOpenIndex; // 0x88
		::System::Single maxFever; // 0x8C
		::System::UInt32 bossFightID; // 0x90
		::System::Double curTimelineTime; // 0x98
		::Enum_3_37484F1EF48B365A curStatus; // 0xA0
		::System::Single curFever; // 0xA4
		::System::Int32 curCheckCloseIndex; // 0xA8
		::System::Boolean _isInBonus_k__BackingField; // 0xAC
		::System::Boolean isTimelineSpeedUp; // 0xAD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_isInFever()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINFEVER_OFFSET))(this);
		}

		::System::Void set_isInFever(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINFEVER_OFFSET))(this, value);
		}

		::System::Boolean get_isInBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_ISINBONUS_OFFSET))(this);
		}

		::System::Void set_isInBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SET_ISINBONUS_OFFSET))(this, value);
		}

		::Class_2_208CC9941471731A_806* get_ConstMap()
		{
			return ((::Class_2_208CC9941471731A_806*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_GET_CONSTMAP_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterEntityPropertyCB(::Class_3_F97B015544BE936B* characterDataComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERENTITYPROPERTYCB_OFFSET))(this, characterDataComponent);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterTask(::Class_2_A944C35C433158AC* task, ::System::UInt32 musicPendingID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_REGISTERTASK_OFFSET))(this, task, musicPendingID);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnPlayOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONPLAYOVER_OFFSET))(this);
		}

		::System::Void OnBtnClick(::MoleMole::LogicButtonInputType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBTNCLICK_OFFSET))(this, type, callback);
		}

		::System::Void OnBonusTimeStatusChanged(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONBONUSTIMESTATUSCHANGED_OFFSET))(this, isEnter);
		}

		::System::Void DealDisplayDelayPreplayTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYPREPLAYTIMELINE_OFFSET))(this);
		}

		::System::Void DealDisplayDelayStopTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DEALDISPLAYDELAYSTOPTIMELINE_OFFSET))(this);
		}

		::System::Void UpdateCheckHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKHINT_OFFSET))(this);
		}

		::System::Void UpdateCheckOpenEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKOPENEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckCloseEvade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKCLOSEEVADE_OFFSET))(this);
		}

		::System::Void UpdateCheckMiss()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_UPDATECHECKMISS_OFFSET))(this);
		}

		::System::Void SendResult(::Enum_3_133B62C3E053DEAA result, ::System::Single waitTime)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_133B62C3E053DEAA, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_SENDRESULT_OFFSET))(this, result, waitTime);
		}

		::System::Void DoPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOPAUSE_OFFSET))(this);
		}

		::System::Void DoResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DORESUME_OFFSET))(this);
		}

		::System::Void CheckBonusBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKBONUSBREAK_OFFSET))(this);
		}

		::System::Void _OnAnimatorZoneChanged(::UnityEngine::AnimatorStateInfo from, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 layerIndex, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM__ONANIMATORZONECHANGED_OFFSET))(this, from, to, layerIndex, entityID);
		}

		::System::Void AddBonusScore(::System::Double deltaHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDBONUSSCORE_OFFSET))(this, deltaHp);
		}

		::System::Void AddScore(::System::Single score, ::System::Boolean isBonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDSCORE_OFFSET))(this, score, isBonus);
		}

		::System::Void AddCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDCOMBO_OFFSET))(this);
		}

		::System::Void ClearCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARCOMBO_OFFSET))(this);
		}

		::System::Void AddMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDMISSCOMBO_OFFSET))(this);
		}

		::System::Void ClearMissCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CLEARMISSCOMBO_OFFSET))(this);
		}

		::System::Void AddFever(::System::Single feverScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ADDFEVER_OFFSET))(this, feverScore);
		}

		::System::Void CheckFeverMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKFEVERMAX_OFFSET))(this);
		}

		::System::Void CheckDecreaseFever(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_CHECKDECREASEFEVER_OFFSET))(this, dt);
		}

		::System::Void PreDealTrackNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_PREDEALTRACKNEW_OFFSET))(this);
		}

		::System::Void InitConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_INITCONDITIONDATA_OFFSET))(this);
		}

		::System::Void DoCheck(::Enum_3_22E7F79BA96A1935 type, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_22E7F79BA96A1935, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_DOCHECK_OFFSET))(this, type, val);
		}

		::System::Void OnComboCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONCOMBOCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnFeverCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONFEVERCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnMissCountChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONMISSCOUNTCHANGE_OFFSET))(this);
		}

		::System::Void OnAvatarHpChange(::System::Double percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONAVATARHPCHANGE_OFFSET))(this, percent);
		}

		::System::Void OnEnterBonus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM_ONENTERBONUS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUSICBATTLESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
