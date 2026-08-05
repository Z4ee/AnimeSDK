#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1C483E10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1C4860B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1C483CE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1C485F80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1C486120)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1C483600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1C483FD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1C483E70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1C484050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1C484E50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1C484800)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1C484260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4861A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_TypeDefinitionIndex = 41656;

	class ConfigMaterialPropertyOverrideRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::System::Single _OverrideRimGlowUseUV2Default; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x7C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x84
		::UnityEngine::Color _OverrideRimGlowColorDefault; // 0x8C
		::UnityEngine::Color _FresnelColorRef; // 0x9C
		::System::Single _OverrideRimGlowUseUV2Ref; // 0xAC
		::UnityEngine::Color _OverrideRimGlowColorRef; // 0xB0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _OverrideRimGlowMode; // 0xC0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode _PropertyMaskChannel; // 0xC3
		::MoleMole::MaterialPropertyModifierValueBool _OverrideRimGlow; // 0xC6
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0xCC
		::UnityEngine::Color _DetailColorRef; // 0xE0
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0xF0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0xF8
		::MoleMole::MaterialPropertyModifierValueVector _OverrideRimGlowSpeed; // 0x100
		::MoleMole::MaterialPropertyModifierValueColor _OverrideRimGlowColor; // 0x118
		::UnityEngine::Color _FresnelColorDefault; // 0x12C
		::UnityEngine::Color _DetailColorDefault; // 0x13C
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x14C
		::MoleMole::MaterialPropertyModifierValueFloat _OverrideRimGlowUseUV2; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
