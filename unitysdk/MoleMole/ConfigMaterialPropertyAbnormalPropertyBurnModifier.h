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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x19FFEFE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19FFEEC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A002040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x19FFE990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x19FFF160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x19FFF040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x19FFF1D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A000560)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x19FFFC00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x19FFF3A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0022D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyBurnModifier_TypeDefinitionIndex = 57653;

	class ConfigMaterialPropertyAbnormalPropertyBurnModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0xE0
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0xE8
		::UnityEngine::Color _PropertyColorRef; // 0x100
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x110
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x118
		::UnityEngine::Color _DetailColorDefault; // 0x130
		::System::Single _FresnelFlashingDefault; // 0x140
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x144
		::UnityEngine::Color _DetailColorRef; // 0x14C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x15C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x164
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x17C
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x184
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x198
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x1A0
		::UnityEngine::Color _PropertyColorDefault; // 0x1B4
		::System::Single _FresnelFlashingRef; // 0x1C4
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyBurn; // 0x1CB
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x1CE
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
