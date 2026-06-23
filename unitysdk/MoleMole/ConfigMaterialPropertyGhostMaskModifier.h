#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x192B2640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x192B2560)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x192B3030)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x192B23B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x192B2750)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x192B26A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x192B27A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x192B2AE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x192B29D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x192B28E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B30C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGhostMaskModifier_TypeDefinitionIndex = 65349;

	class ConfigMaterialPropertyGhostMaskModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueFloat _MarkAsGhostMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _GhostMask; // 0x50
		::System::Single _MarkAsGhostMaskDefault; // 0x54
		::System::Single _MarkAsGhostMaskRef; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGHOSTMASKMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
