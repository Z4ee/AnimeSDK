#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C8630)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C8510)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A4C9510)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C8220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A4C87B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A4C8690)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A4C8820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A4C8CD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A4C8B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A4C89E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C95A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyWeaponBallMainMapsModifier_TypeDefinitionIndex = 55463;

	class ConfigMaterialPropertyWeaponBallMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::UnityEngine::Color _BaseColorRef; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _Smoothness; // 0x58
		::UnityEngine::Color _BaseColorDefault; // 0x60
		::MoleMole::MaterialPropertyModifierValueColor _BaseColor; // 0x70
		::System::Single _SmoothnessRef; // 0x84
		::System::Single _MetallicRef; // 0x88
		::System::Single _MetallicDefault; // 0x8C
		::System::Single _SmoothnessDefault; // 0x90
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
