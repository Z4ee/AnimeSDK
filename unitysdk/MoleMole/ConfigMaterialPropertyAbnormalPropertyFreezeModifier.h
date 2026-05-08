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

#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x183D9280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x183D9110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x183DCF90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x183D8A90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x183D94D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x183D9320)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x183D9590)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x183DAE10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x183DA270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x183D97F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x183DD140)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x183DD180)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x183DD190)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x183DD270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x183DD300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x183DD390)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x183DD420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x183DD4F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyAbnormalPropertyFreezeModifier_TypeDefinitionIndex = 42301;

	class ConfigMaterialPropertyAbnormalPropertyFreezeModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideRimGlowTexFX; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyNormalUseUV2; // 0x108
		::System::Single _FresnelFlashingRef; // 0x110
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUVFlipSpeed; // 0x114
		::MoleMole::MaterialPropertyModifierValueColor _PropertyColor; // 0x11C
		::UnityEngine::Color _DetailColorRef; // 0x130
		::UnityEngine::Color _PropertyColorDefault; // 0x140
		::System::Single _FresnelFlashingDefault; // 0x150
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelWidth; // 0x154
		::UnityEngine::Color _FresnelColorDefault; // 0x15C
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMaskUVSpeed; // 0x16C
		::UnityEngine::Color _DetailColorDefault; // 0x184
		::UnityEngine::Color _FresnelColorRef; // 0x194
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMaskChannel; // 0x1A4
		::MoleMole::MaterialPropertyModifierValueBool _AbnormalPropertyFreeze; // 0x1A7
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _PropertyMask2Channel; // 0x1AA
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelFlashing; // 0x1B0
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelMaskWidth; // 0x1B8
		::MoleMole::MaterialPropertyModifierValueVector _PropertyNormalUVSpeed; // 0x1C0
		::MoleMole::MaterialPropertyModifierValueVector _PropertyTexUVSpeed; // 0x1D8
		::MoleMole::MaterialPropertyModifierValueColor _DetailColor; // 0x1F0
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x204
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMask2UseUV2; // 0x218
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUVFlipSpeed; // 0x220
		::UnityEngine::Color _PropertyColorRef; // 0x228
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyTexUseUV2; // 0x238
		::MoleMole::MaterialPropertyModifierValueFloat _PropertyMaskUseUV2; // 0x240
		::MoleMole::MaterialPropertyModifierValueVector _PropertyMask2UVSpeed; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYABNORMALPROPERTYFREEZEMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
