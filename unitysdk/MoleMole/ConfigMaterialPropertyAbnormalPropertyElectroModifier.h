#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B56B780)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B56E1B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B56B640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B56DFD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B56E220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B56B010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B56B940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B56B7E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B56B9C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B56C9E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B56C280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B56BBD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56E2A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyElectroModifier_TypeDefinitionIndex = 85730;

	class ConfigMaterialPropertyAbnormalPropertyElectroModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0xA8
		::UnityEngine::Color _FresnelColorDefault; // 0xB0
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0xC0
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0xC8
		::System::Single _FresnelFlashingDefault; // 0xE0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0xE4
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyElectro; // 0xEC
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0xEF
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0xF4
		::UnityEngine::Color _DetailColorRef; // 0x108
		::UnityEngine::Color _PropertyColorDefault; // 0x118
		::UnityEngine::Color _DetailColorDefault; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x138
		::UnityEngine::Color _PropertyColorRef; // 0x140
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x150
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x158
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x170
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x184
		::UnityEngine::Color _FresnelColorRef; // 0x198
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x1A8
		::System::Single _FresnelFlashingRef; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
