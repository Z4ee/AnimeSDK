#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1C526DF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1C526CD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1C527D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1C5269E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1C526F70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1C526E50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1C526FF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1C527640)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1C5273D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1C5271B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C527D90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySceneEmissionModifier_TypeDefinitionIndex = 71248;

	class ConfigMaterialPropertySceneEmissionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueBool _DisableGlobalEmissionIntensity; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _AffectByGlobalEmissionColor; // 0x4B
		::System::Single _RTXGIStylizedScaleDefault; // 0x50
		::MoleMole::MaterialPropertyModifierValueFloat _RTXGIStylizedScale; // 0x54
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x5C
		::MoleMole::MaterialPropertyModifierValueFloat _RTXGIEmissionScale; // 0x70
		::UnityEngine::Color _EmissionColorDefault; // 0x78
		::System::Single _RTXGIEmissionScaleRef; // 0x88
		::System::Single _RTXGIStylizedScaleRef; // 0x8C
		::UnityEngine::Color _EmissionColorRef; // 0x90
		::System::Single _RTXGIEmissionScaleDefault; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCENEEMISSIONMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
