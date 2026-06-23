#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x192B3360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x192B3280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x192B3D50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x192B30D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x192B3470)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x192B33C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x192B34C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x192B3800)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x192B36F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x192B3600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B3DE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOtherModifier_TypeDefinitionIndex = 75687;

	class ConfigMaterialPropertyOtherModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::System::Single _CurrentColorStagmentRef; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _MarkAsVfxMask; // 0x4C
		::System::Single _CurrentColorStagmentDefault; // 0x50
		::MoleMole::MaterialPropertyModifierValueFloat _CurrentColorStagment; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
