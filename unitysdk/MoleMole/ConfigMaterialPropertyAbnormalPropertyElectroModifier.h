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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x183D5AE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x183D5970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x183D8520)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x183D52F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x183D5D30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x183D5B80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x183D5DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x183D6EE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x183D6730)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x183D6050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D8610)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x183D8650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x183D8660)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x183D8740)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x183D87D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x183D8860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x183D88F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x183D89C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyElectroModifier_TypeDefinitionIndex = 56474;

	class ConfigMaterialPropertyAbnormalPropertyElectroModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::UnityEngine::Color _FresnelColorDefault; // 0xA8
		::System::Single _FresnelFlashingRef; // 0xB8
		::UnityEngine::Color _PropertyColorDefault; // 0xBC
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0xCC
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0xE4
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0xEC
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x100
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x108
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x110
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x128
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x13C
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x144
		::UnityEngine::Color _PropertyColorRef; // 0x158
		::System::Single _FresnelFlashingDefault; // 0x168
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyElectro; // 0x16C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x16F
		::UnityEngine::Color _DetailColorDefault; // 0x174
		::UnityEngine::Color _DetailColorRef; // 0x184
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x194
		::UnityEngine::Color _FresnelColorRef; // 0x19C
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x1AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYELECTROMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
