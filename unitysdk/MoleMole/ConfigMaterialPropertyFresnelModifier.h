#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x192B15A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x192B14E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x192B2310)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x192B1380)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x192B1690)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x192B1600)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x192B16D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x192B1C40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x192B19D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x192B17C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B23A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyFresnelModifier_TypeDefinitionIndex = 47904;

	class ConfigMaterialPropertyFresnelModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelOffset; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _FresnelColor; // 0x50
		::MoleMole::MaterialPropertyModifierValueBool _Fresnel; // 0x64
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelScale; // 0x68
		::MoleMole::MaterialPropertyModifierValueFloat _FresnelPower; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYFRESNELMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
