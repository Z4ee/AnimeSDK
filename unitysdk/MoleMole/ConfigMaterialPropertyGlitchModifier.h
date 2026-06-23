#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x115EE8E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x115EE820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x115EFF30)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x115EE6C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x115EE9D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x115EE940)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x115EEA10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x115EF1C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x115EEE40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x115EEB00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x115F0060)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyGlitchModifier_TypeDefinitionIndex = 83507;

	class ConfigMaterialPropertyGlitchModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _BlockMaskTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorC; // 0x78
		::MoleMole::MaterialPropertyModifierValueBool _ScreenScale; // 0x8C
		::MoleMole::MaterialPropertyModifierValueBool _Glitch; // 0x8F
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorD; // 0x94
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorA; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _BlockColorB; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYGLITCHMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
