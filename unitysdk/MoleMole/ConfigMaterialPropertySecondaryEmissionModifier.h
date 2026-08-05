#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueSecondaryEmissionBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B5747E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B576FE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B5746E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B576E00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B577050)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B574210)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B574930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B574840)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B5749A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B575940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B5751E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B574B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5770D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryEmissionModifier_TypeDefinitionIndex = 64935;

	class ConfigMaterialPropertySecondaryEmissionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryEmissionMaskTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryEmissionTex; // 0x78
		::UnityEngine::Color _SecondaryEmissionColorDefault; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0xB8
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0xCC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0xD4
		::UnityEngine::Color _MatCapColorTintFxDefault; // 0xDC
		::MoleMole::MaterialPropertyModifierValueColor _SecondaryEmissionColor; // 0xEC
		::MoleMole::MaterialPropertyModifierValueVector _ColorOverrideAlbedo; // 0x100
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueSecondaryEmissionBlendMode _MatCapFX; // 0x118
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType _SecondaryEmissionChannel; // 0x11B
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmission; // 0x11E
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmissionUseUV2; // 0x121
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x124
		::UnityEngine::Color _SecondaryEmissionColorRef; // 0x12C
		::UnityEngine::Color _MatCapColorTintFxRef; // 0x13C
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryEmissionTexSpeed; // 0x14C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _SecondaryEmissionMaskChannel; // 0x164
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryEmissionMultiplyAlbedo; // 0x167

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYEMISSIONMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
