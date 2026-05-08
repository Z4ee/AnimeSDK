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

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x181E0290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x181E0140)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x181E34F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x181DFBC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x181E04A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x181E0330)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x181E0550)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x181E19C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x181E1010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x181E0770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x181E3650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x181E3680)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x181E3690)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x181E3770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x181E3800)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x181E3890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x181E3920)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x181E39F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyBurnModifier_TypeDefinitionIndex = 68883;

	class ConfigMaterialPropertyAbnormalPropertyBurnModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0xD8
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0xE0
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0xF4
		::System::Single _FresnelFlashingRef; // 0xFC
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x100
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x108
		::System::Single _FresnelFlashingDefault; // 0x110
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x114
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x11C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x134
		::UnityEngine::Color _PropertyColorDefault; // 0x13C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x14C
		::UnityEngine::Color _DetailColorDefault; // 0x164
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x174
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyBurn; // 0x177
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x17A
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x180
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x198
		::UnityEngine::Color _PropertyColorRef; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x1BC
		::UnityEngine::Color _DetailColorRef; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYBURNMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
