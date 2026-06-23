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

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1AA7FC70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1AA7FB40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1AA81E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1AA7F460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1AA7FE20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1AA7FCD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1AA7FEA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1AA80CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1AA80650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1AA800A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDERIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA81F30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideRimGlowModifier_TypeDefinitionIndex = 80557;

	class ConfigMaterialPropertyOverrideRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::UnityEngine::Color _DetailColorDefault; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x88
		::MoleMole::MaterialPropertyModifierValueVector _OverrideRimGlowSpeed; // 0x90
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _OverrideRimGlowColor; // 0xB0
		::MoleMole::MaterialPropertyModifierValueFloat _OverrideRimGlowUseUV2; // 0xC4
		::System::Single _OverrideRimGlowUseUV2Default; // 0xCC
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0xD0
		::System::Single _OverrideRimGlowUseUV2Ref; // 0xE4
		::UnityEngine::Color _FresnelColorDefault; // 0xE8
		::UnityEngine::Color _DetailColorRef; // 0xF8
		::UnityEngine::Color _OverrideRimGlowColorDefault; // 0x108
		::UnityEngine::Color _OverrideRimGlowColorRef; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x130
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueOverrideRimGlowFresnelBlendMode _PropertyMaskChannel; // 0x138
		::MoleMole::MaterialPropertyModifierValueBool _OverrideRimGlow; // 0x13B
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _OverrideRimGlowMode; // 0x13E
		::UnityEngine::Color _FresnelColorRef; // 0x144
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x154

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
	};
}
