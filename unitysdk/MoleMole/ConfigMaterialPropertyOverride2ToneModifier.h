#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueAvatarShaderBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueLightSource.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValuePointSpace.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B932D30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B934900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B932C00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B934870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B934970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B932540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B932ED0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B932D90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B932F50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B933B60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B933600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B933130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9349F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverride2ToneModifier_TypeDefinitionIndex = 59748;

	class ConfigMaterialPropertyOverride2ToneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::UnityEngine::Color _ColorADefault; // 0x48
		::UnityEngine::Color _ColorBRef; // 0x58
		::UnityEngine::Color _ColorARef; // 0x68
		::MoleMole::MaterialPropertyModifierValueFloat _ShiftAngle; // 0x78
		::MoleMole::MaterialPropertyModifierValueColor _ColorA; // 0x80
		::MoleMole::MaterialPropertyModifierValueFloat _Softness; // 0x94
		::System::Single _ShiftAngleRef; // 0x9C
		::UnityEngine::Vector4 _PointPositionDefault; // 0xA0
		::System::Single _ShiftAngleDefault; // 0xB0
		::MoleMole::MaterialPropertyModifierValueVector _PointPosition; // 0xB4
		::MoleMole::MaterialPropertyModifierValueBool _Override2Tone; // 0xCC
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource _LightSource; // 0xCF
		::MoleMole::MaterialPropertyModifierValueColor _ColorB; // 0xD4
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace _PointSpace; // 0xE8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _Override2ToneBlendMode; // 0xEB
		::MoleMole::MaterialPropertyModifierValueBool _Override2ToneMultiplyAlbedo; // 0xEE
		::UnityEngine::Vector4 _PointPositionRef; // 0xF4
		::MoleMole::MaterialPropertyModifierValueFloat _LerpPosition; // 0x104
		::UnityEngine::Color _ColorBDefault; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
