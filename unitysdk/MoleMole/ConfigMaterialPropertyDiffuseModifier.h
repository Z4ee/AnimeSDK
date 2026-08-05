#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C40D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C4010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A4C4DE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A4C3EB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A4C41C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A4C4130)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A4C4200)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A4C46C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A4C44C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A4C42F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C4E70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDiffuseModifier_TypeDefinitionIndex = 91417;

	class ConfigMaterialPropertyDiffuseModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _ShadowColorFadeByZ; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x4C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x60
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDIFFUSEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
