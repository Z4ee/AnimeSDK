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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A363CF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A363BB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A366540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A3634E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A363EB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A363D50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A363F30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A364F40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A3647E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A364140)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A366720)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyElectroModifier_TypeDefinitionIndex = 75649;

	class ConfigMaterialPropertyAbnormalPropertyElectroModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0xA8
		::UnityEngine::Color _FresnelColorDefault; // 0xB0
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0xC0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0xD4
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0xDC
		::UnityEngine::Color _PropertyColorRef; // 0xF4
		::UnityEngine::Color _FresnelColorRef; // 0x104
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x114
		::System::Single _FresnelFlashingRef; // 0x11C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x120
		::UnityEngine::Color _DetailColorRef; // 0x128
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x138
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyElectro; // 0x13B
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x140
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x154
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x168
		::System::Single _FresnelFlashingDefault; // 0x170
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x174
		::UnityEngine::Color _DetailColorDefault; // 0x18C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x19C
		::UnityEngine::Color _PropertyColorDefault; // 0x1A4

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
	};
}
