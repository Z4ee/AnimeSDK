#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAbnormalPropertyType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x19BA57B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19BA5670)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x19BA9450)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x19BA5040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x19BA5970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x19BA5810)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x19BA59F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x19BA7290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x19BA66C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x19BA5C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA9790)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyModifier_TypeDefinitionIndex = 54586;

	class ConfigMaterialPropertyAbnormalPropertyModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x108
		::UnityEngine::Color _DetailColorRef; // 0x110
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x120
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x128
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x130
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x148
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x15C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x170
		::UnityEngine::Color _PropertyColorRef; // 0x188
		::System::Single _FresnelFlashingRef; // 0x198
		::UnityEngine::Color _DetailColorDefault; // 0x19C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x1AC
		::UnityEngine::Color _FresnelColorDefault; // 0x1B4
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x1E4
		::UnityEngine::Color _PropertyColorDefault; // 0x1EC
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalProperty; // 0x1FC
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x1FF
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x202
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType _PropertyType; // 0x205
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x208
		::System::Single _FresnelFlashingDefault; // 0x210
		::UnityEngine::Color _FresnelColorRef; // 0x214
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x224
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x22C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x244
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x24C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
