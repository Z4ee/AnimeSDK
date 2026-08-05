#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x14880DC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x14880CE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x148817B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x14880B30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x14880ED0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x14880E20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x14880F20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x14881260)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x14881150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x14881060)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOTHERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x14881840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOtherModifier_TypeDefinitionIndex = 89501;

	class ConfigMaterialPropertyOtherModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _MarkAsVfxMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _CurrentColorStagment; // 0x4C
		::System::Single _CurrentColorStagmentDefault; // 0x54
		::System::Single _CurrentColorStagmentRef; // 0x58

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
