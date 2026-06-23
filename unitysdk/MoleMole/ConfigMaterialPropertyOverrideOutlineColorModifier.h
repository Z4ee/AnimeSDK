#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x17D7AD60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x17D7AC60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x17D7C110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x17D7A960)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x17D7AEB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x17D7ADC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x17D7AF20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x17D7B690)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x17D7B370)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x17D7B0A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7C240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyOverrideOutlineColorModifier_TypeDefinitionIndex = 58463;

	class ConfigMaterialPropertyOverrideOutlineColorModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::UnityEngine::Color _OverrideOutlineColorDefault; // 0x78
		::MoleMole::MaterialPropertyModifierValueColor _OverrideOutlineColor; // 0x88
		::System::Single _OutlineWidthRef; // 0x9C
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutlineUseUV2; // 0xA0
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutline; // 0xA3
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0xA8
		::System::Single _OutlineWidthDefault; // 0xB0
		::MoleMole::MaterialPropertyModifierValueVector _OverrideOutlineSpeed; // 0xB4
		::UnityEngine::Color _OverrideOutlineColorRef; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYOVERRIDEOUTLINECOLORMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
