#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x162744C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16274400)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x16275310)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x162742A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x162745B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x16274520)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x162745F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x162749D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x16274840)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x162746E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x162753A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyRimGlowModifier_TypeDefinitionIndex = 63318;

	class ConfigMaterialPropertyRimGlowModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _RimGlow; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowShadowColor; // 0x4C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYRIMGLOWMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
