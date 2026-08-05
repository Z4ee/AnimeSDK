#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B817BD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B818830)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B817B10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B8187A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B8188A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B8179B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B817CC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B817C30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B817D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B8181A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B817FA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B817DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B818920)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOutlineModifier_TypeDefinitionIndex = 61767;

	class ConfigMaterialPropertyOutlineModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x50
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x64
		::MoleMole::MaterialPropertyModifierValueBool _Outline; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOUTLINEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
