#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x17D6EAA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x17D70160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17D6E9E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x17D700D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x17D702E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x17D6E880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x17D6EB90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x17D6EB00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x17D6EBD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x17D6F580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x17D6F0E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x17D6ECC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D70370)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyClipPlaneModifier_TypeDefinitionIndex = 51563;

	class ConfigMaterialPropertyClipPlaneModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _HardLightWidth; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _SoftLightWidth; // 0x50
		::MoleMole::MaterialPropertyModifierValueBool _PlaneClipReverse; // 0x58
		::MoleMole::MaterialPropertyModifierValueBool _ReversePlaneXZ; // 0x5B
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlaneXZ; // 0x5E
		::MoleMole::MaterialPropertyModifierValueBool _HardLight; // 0x61
		::MoleMole::MaterialPropertyModifierValueColor _SoftLightColor; // 0x64
		::MoleMole::MaterialPropertyModifierValueBool _ClipPlane; // 0x78
		::MoleMole::MaterialPropertyModifierValueBool _SoftLight; // 0x7B
		::MoleMole::MaterialPropertyModifierValueColor _HardLightColor; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYCLIPPLANEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
