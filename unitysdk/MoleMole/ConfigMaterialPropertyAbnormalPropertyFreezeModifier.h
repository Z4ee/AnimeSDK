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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B56EA50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B572890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B56E910)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B572550)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B572900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B56E2E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B56EC10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B56EAB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B56EC90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B570430)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B56F8E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B56EEA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B572980)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyFreezeModifier_TypeDefinitionIndex = 85314;

	class ConfigMaterialPropertyAbnormalPropertyFreezeModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0xD8
		::UnityEngine::Color _DetailColorRef; // 0x108
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x120
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x130
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x138
		::System::Single _FresnelFlashingDefault; // 0x140
		::UnityEngine::Color _FresnelColorRef; // 0x144
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x154
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x15C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x170
		::UnityEngine::Color _PropertyColorDefault; // 0x188
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x198
		::System::Single _FresnelFlashingRef; // 0x1B0
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x1B4
		::UnityEngine::Color _DetailColorDefault; // 0x1C8
		::UnityEngine::Color _FresnelColorDefault; // 0x1D8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x1E8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x200
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyFreeze; // 0x203
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x206
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x20C
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x214
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x21C
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x224
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x238
		::UnityEngine::Color _PropertyColorRef; // 0x250

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

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
