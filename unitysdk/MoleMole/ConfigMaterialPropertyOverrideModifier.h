#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x19AD7D30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x19AD7C50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x19AD8870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x19AD79B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x19AD7E40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x19AD7D90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x19AD7E90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x19AD81E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x19AD80D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x19AD7FE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD8900)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideModifier_TypeDefinitionIndex = 63948;

	class ConfigMaterialPropertyOverrideModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::UnityEngine::Color _OverrideColorRef; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _OverrideColor; // 0x58
		::MoleMole::MaterialPropertyModifierValueBool _Override; // 0x6C
		::UnityEngine::Color _OverrideColorDefault; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
