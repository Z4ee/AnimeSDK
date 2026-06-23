#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x115EBC90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x115EBBB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x115ECCE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x115EB8F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x115EBDB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x115EBCF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x115EBE10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x115EC290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x115EC0E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x115EBF60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x115ECE10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyBlushModifier_TypeDefinitionIndex = 58200;

	class ConfigMaterialPropertyBlushModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _BlushTexture; // 0x48
		::MoleMole::MaterialPropertyModifierValueBool _Blush; // 0x78
		::UnityEngine::Color _BlushColorDefault; // 0x7C
		::MoleMole::MaterialPropertyModifierValueColor _BlushColor; // 0x8C
		::UnityEngine::Color _BlushColorRef; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYBLUSHMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
