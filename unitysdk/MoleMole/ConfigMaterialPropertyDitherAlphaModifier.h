#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x19AD6820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x19AD77A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19AD6730)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x19AD7710)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x19AD7920)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x19AD6580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x19AD6930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x19AD6880)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x19AD6980)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x19AD6EE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x19AD6CD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x19AD6AD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD79A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyDitherAlphaModifier_TypeDefinitionIndex = 45136;

	class ConfigMaterialPropertyDitherAlphaModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _DitherAlpha2; // 0x48
		::MoleMole::MaterialPropertyModifierValueVector _FxUVDitherValue; // 0x50
		::System::Single _DitherAlpha2Ref; // 0x68
		::MoleMole::MaterialPropertyModifierValueVector _DecolorizationContrast; // 0x6C
		::MoleMole::MaterialPropertyModifierValueVector _FxTransparentValue; // 0x84
		::System::Single _DitherAlpha2Default; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYDITHERALPHAMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
