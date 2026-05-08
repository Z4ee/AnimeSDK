#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/Object.h"

class Class_1_9610394F487FC231;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET UNITYSDK_OFFSET(0x15A02B80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET UNITYSDK_OFFSET(0x15A028E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x15A03850)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15A03630)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15A03940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x15A03EA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET UNITYSDK_OFFSET(0x15A02650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x15A02A40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET UNITYSDK_OFFSET(0x15A02780)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x15A029D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET UNITYSDK_OFFSET(0x15A02980)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x15A02600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x15A035F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x15A038F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET UNITYSDK_OFFSET(0x15A02AA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x15A03310)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET UNITYSDK_OFFSET(0x15A033A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x15A03480)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET UNITYSDK_OFFSET(0x15A03510)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x15A036C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x15A03C60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET UNITYSDK_OFFSET(0x15A03CE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET UNITYSDK_OFFSET(0x15A03D50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET UNITYSDK_OFFSET(0x15A03DC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET UNITYSDK_OFFSET(0x15A03E30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x15A03BF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x15A039F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET UNITYSDK_OFFSET(0x15A03A60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET UNITYSDK_OFFSET(0x15A03AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET UNITYSDK_OFFSET(0x15A03B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET UNITYSDK_OFFSET(0x15A03B90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x15A03990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A03EE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifier_TypeDefinitionIndex = 80992;

	class ConfigMaterialPropertyModifier : public ::System::Object
	{
	public:
		// static const ::System::Single MAX_DURATION; // 0x0
		::UnityEngine::AnimationCurve* exitCurve; // 0x10
		::System::String* keepCurveGroupKey; // 0x18
		::UnityEngine::AnimationCurve* enterCurve; // 0x20
		::System::Boolean ApplyToAllShaders; // 0x28
		::System::Boolean EndPerformBlackList; // 0x29
		::System::Int32 Priority; // 0x2C
		::System::Single EnterDuration; // 0x30
		::System::Boolean IgnoreWitchTimescale; // 0x34
		::System::Boolean CanCarryIntoBlackCurtain; // 0x35
		::System::Boolean EndPerformWhiteList; // 0x36
		::System::Boolean ForbidSuspendByBlackCurtain; // 0x37
		::System::Single ExitDuration; // 0x38
		::System::Single KeepDuration; // 0x3C
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0x40
		::System::Boolean IgnoreOwnerTimescale; // 0x44
		::System::Boolean UseQuaSetting; // 0x45
		::System::Boolean IgnoreWorldTimescale; // 0x46

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged_CanCarryIntoBlackCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET))(this);
		}

		::System::Single get_RealKeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET))(this);
		}

		::System::Void OnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET))(this, instance);
		}

		::System::Void OnKeep(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET))(this, instance);
		}

		::System::Void OnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET))(this, instance);
		}

		::System::Void ProcessEnterWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void CreateCalcData(::Class_1_9610394F487FC231* instance, ::System::Single timer, ::Enum_3_CC22F13312585645 state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET))(this, instance, timer, state);
		}

		::System::Void ProcessExitWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessKeepWrap(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnterFromJob(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET))(this, instance);
		}

		::System::Void SetupMaterialInstances(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET))(this, instance);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void DoOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET))(this, instance);
		}

		::System::Void SyncValue(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET))(this, from, to);
		}

		::System::Void SyncValue_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET))(this, from, to);
		}

		::System::Void SyncEnable(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_1(::MoleMole::MaterialPropertyModifierValueTexture& from, ::MoleMole::StaticTextureMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture&, ::MoleMole::StaticTextureMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_2(::MoleMole::MaterialPropertyModifierValueBool& from, ::MoleMole::StaticBoolMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueBool&, ::MoleMole::StaticBoolMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_3(::MoleMole::MaterialPropertyModifierValueVector& from, ::MoleMole::StaticVectorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueVector&, ::MoleMole::StaticVectorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_4(::MoleMole::MaterialPropertyModifierValueColor& from, ::MoleMole::StaticColorMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueColor&, ::MoleMole::StaticColorMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET))(this, from, to, stop);
		}

		::System::Void SyncEnable_5(::MoleMole::MaterialPropertyModifierValueFloat& from, ::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueFloat&, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET))(this, from, to, stop);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
