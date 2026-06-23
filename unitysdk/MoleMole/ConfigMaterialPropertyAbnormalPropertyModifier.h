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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x17E41890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17E41760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x17E45530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x17E41130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x17E41A40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x17E418F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x17E41AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x17E43360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x17E42780)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x17E41CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E45870)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyModifier_TypeDefinitionIndex = 59554;

	class ConfigMaterialPropertyAbnormalPropertyModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xD8
		::UnityEngine::Color _DetailColorDefault; // 0x108
		::UnityEngine::Color _DetailColorRef; // 0x118
		::UnityEngine::Color _FresnelColorDefault; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x138
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x140
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x148
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x160
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x178
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x180
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x194
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x1A8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x1B0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x1C8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAbnormalPropertyType _PropertyType; // 0x1CB
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x1CE
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalProperty; // 0x1D1
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x1D4
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x1E8
		::System::Single _FresnelFlashingRef; // 0x200
		::UnityEngine::Color _PropertyColorRef; // 0x204
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x214
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x21C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x224
		::UnityEngine::Color _PropertyColorDefault; // 0x22C
		::UnityEngine::Color _FresnelColorRef; // 0x23C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x24C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x254
		::System::Single _FresnelFlashingDefault; // 0x25C

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
