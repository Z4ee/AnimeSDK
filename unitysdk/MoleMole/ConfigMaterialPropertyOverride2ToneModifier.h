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

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x161AA0E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x161A9FB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x161ABC10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x161A98E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x161AA280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x161AA140)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x161AA300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x161AAEF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x161AA990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x161AA4D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDE2TONEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x161ABCA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverride2ToneModifier_TypeDefinitionIndex = 49838;

	class ConfigMaterialPropertyOverride2ToneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _Softness; // 0x48
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace _PointSpace; // 0x50
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueLightSource _LightSource; // 0x53
		::UnityEngine::Vector4 _PointPositionDefault; // 0x58
		::System::Single _ShiftAngleDefault; // 0x68
		::UnityEngine::Color _ColorBDefault; // 0x6C
		::System::Single _ShiftAngleRef; // 0x7C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueAvatarShaderBlendMode _Override2ToneBlendMode; // 0x80
		::MoleMole::MaterialPropertyModifierValueBool _Override2ToneMultiplyAlbedo; // 0x83
		::MoleMole::MaterialPropertyModifierValueBool _Override2Tone; // 0x86
		::MoleMole::MaterialPropertyModifierValueFloat _ShiftAngle; // 0x8C
		::UnityEngine::Color _ColorBRef; // 0x94
		::UnityEngine::Vector4 _PointPositionRef; // 0xA4
		::UnityEngine::Color _ColorARef; // 0xB4
		::MoleMole::MaterialPropertyModifierValueVector _PointPosition; // 0xC4
		::UnityEngine::Color _ColorADefault; // 0xDC
		::MoleMole::MaterialPropertyModifierValueFloat _LerpPosition; // 0xEC
		::MoleMole::MaterialPropertyModifierValueColor _ColorA; // 0xF4
		::MoleMole::MaterialPropertyModifierValueColor _ColorB; // 0x108

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
	};
}
