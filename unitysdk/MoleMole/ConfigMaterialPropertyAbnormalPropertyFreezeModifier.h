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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A366F70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A366E30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A36AA90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A366760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A367130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A366FD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A3671B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A368960)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A367E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A3673C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36ADD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyFreezeModifier_TypeDefinitionIndex = 51475;

	class ConfigMaterialPropertyAbnormalPropertyFreezeModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xD8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x108
		::System::Single _FresnelFlashingDefault; // 0x120
		::UnityEngine::Color _FresnelColorDefault; // 0x124
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x134
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x13C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x144
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x15C
		::System::Single _FresnelFlashingRef; // 0x164
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x168
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x17C
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyFreeze; // 0x17F
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x182
		::UnityEngine::Color _FresnelColorRef; // 0x188
		::UnityEngine::Color _PropertyColorRef; // 0x198
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x1A8
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x1C0
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x1C8
		::UnityEngine::Color _PropertyColorDefault; // 0x1E0
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x1F0
		::UnityEngine::Color _DetailColorDefault; // 0x204
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x214
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x228
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x230
		::UnityEngine::Color _DetailColorRef; // 0x238
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x248
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x250
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
