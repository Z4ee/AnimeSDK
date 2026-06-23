#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x18AE4100)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x18AE3FF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x18AE4F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x18AE3D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x18AE4270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x18AE4160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x18AE42E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x18AE4760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x18AE45D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x18AE4490)
#define MOLEMOLE_CONFIGMATERIALPROPERTYWEAPONBALLMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE5020)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyWeaponBallMainMapsModifier_TypeDefinitionIndex = 62783;

	class ConfigMaterialPropertyWeaponBallMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::System::Single _SmoothnessDefault; // 0x48
		::System::Single _MetallicRef; // 0x4C
		::System::Single _SmoothnessRef; // 0x50
		::System::Single _MetallicDefault; // 0x54
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x58
		::UnityEngine::Color _BaseColorDefault; // 0x60
		::MoleMole::MaterialPropertyModifierValueFloat _Smoothness; // 0x70
		::UnityEngine::Color _BaseColorRef; // 0x78
		::MoleMole::MaterialPropertyModifierValueColor _BaseColor; // 0x88

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
