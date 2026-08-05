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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B806570)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B809860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B806450)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B8095D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B8098D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B805FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B806700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B8065D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B806780)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B807B00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B8071B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B806950)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B809950)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyBurnModifier_TypeDefinitionIndex = 89097;

	class ConfigMaterialPropertyAbnormalPropertyBurnModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0xF0
		::UnityEngine::Color _PropertyColorDefault; // 0xF8
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x108
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x110
		::UnityEngine::Color _PropertyColorRef; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x130
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x138
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyBurn; // 0x150
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x153
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x156
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x15C
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x164
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x178
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x180
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x198
		::System::Single _FresnelFlashingDefault; // 0x1AC
		::System::Single _FresnelFlashingRef; // 0x1B0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x1B4
		::UnityEngine::Color _DetailColorDefault; // 0x1BC
		::UnityEngine::Color _DetailColorRef; // 0x1CC

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

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
