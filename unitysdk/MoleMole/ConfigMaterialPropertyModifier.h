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

class Class_1_413B2BDBE645DB66;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET UNITYSDK_OFFSET(0x190CFBB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET UNITYSDK_OFFSET(0x190CF910)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x190D08F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x190D08A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x190D0680)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x190D09E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x190D0F40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_GET_REALKEEPDURATION_OFFSET UNITYSDK_OFFSET(0x190CF670)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x190CFA70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET UNITYSDK_OFFSET(0x190CF7A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x190CFA00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET UNITYSDK_OFFSET(0x190CF9B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONVALUECHANGED_CANCARRYINTOBLACKCURTAIN_OFFSET UNITYSDK_OFFSET(0x127303A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x190D0640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x190D0990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET UNITYSDK_OFFSET(0x190CFAD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x190D0360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET UNITYSDK_OFFSET(0x190D03F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x190D04D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET UNITYSDK_OFFSET(0x190D0560)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x190D0710)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x190D0D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_2_OFFSET UNITYSDK_OFFSET(0x190D0D80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_3_OFFSET UNITYSDK_OFFSET(0x190D0DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_4_OFFSET UNITYSDK_OFFSET(0x190D0E60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_5_OFFSET UNITYSDK_OFFSET(0x190D0ED0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x190D0C90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x190D0A90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_2_OFFSET UNITYSDK_OFFSET(0x190D0B00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_3_OFFSET UNITYSDK_OFFSET(0x190D0B60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_4_OFFSET UNITYSDK_OFFSET(0x190D0BD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_5_OFFSET UNITYSDK_OFFSET(0x190D0C30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x190D0A30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D0F80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifier_TypeDefinitionIndex = 52429;

	class ConfigMaterialPropertyModifier : public ::System::Object
	{
	public:
		// static const ::System::Single MAX_DURATION; // 0x0
		::UnityEngine::AnimationCurve* enterCurve; // 0x10
		::UnityEngine::AnimationCurve* exitCurve; // 0x18
		::System::String* keepCurveGroupKey; // 0x20
		::System::Boolean IgnoreWorldTimescale; // 0x28
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0x29
		::System::Boolean EndPerformBlackList; // 0x2D
		::System::Boolean CanCarryIntoBlackCurtain; // 0x2E
		::System::Boolean ApplyToAllShaders; // 0x2F
		::System::Boolean IgnoreWitchTimescale; // 0x30
		::System::Boolean ForbidSuspendByBlackCurtain; // 0x31
		::System::Boolean IgnoreOwnerTimescale; // 0x32
		::System::Single EnterDuration; // 0x34
		::System::Single ExitDuration; // 0x38
		::System::Single KeepDuration; // 0x3C
		::System::Int32 Priority; // 0x40
		::System::Boolean EndPerformWhiteList; // 0x44
		::System::Boolean UseQuaSetting; // 0x45

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

		::System::Void OnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONENTER_OFFSET))(this, instance);
		}

		::System::Void OnKeep(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONKEEP_OFFSET))(this, instance);
		}

		::System::Void OnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONEXIT_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_ONDONE_OFFSET))(this, instance);
		}

		::System::Void ProcessEnterWrap(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTERWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void CreateCalcData(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer, ::Enum_3_CC22F13312585645 state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_CREATECALCDATA_OFFSET))(this, instance, timer, state);
		}

		::System::Void ProcessExitWrap(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXITWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void ProcessKeepWrap(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PROCESSKEEPWRAP_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnterFromJob(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOAFTERONENTERFROMJOB_OFFSET))(this, instance);
		}

		::System::Void SetupMaterialInstances(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_SETUPMATERIALINSTANCES_OFFSET))(this, instance);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void DoOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMODIFIER_DOONEXIT_OFFSET))(this, instance);
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
