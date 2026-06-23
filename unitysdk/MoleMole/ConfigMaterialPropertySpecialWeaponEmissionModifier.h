#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x115F0290)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x115F01D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x115F2030)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x115F0070)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x115F0380)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x115F02F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x115F03C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x115F0DB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x115F0910)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x115F04B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2210)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySpecialWeaponEmissionModifier_TypeDefinitionIndex = 79439;

	class ConfigMaterialPropertySpecialWeaponEmissionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _SpecialWeaponEmissionTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _SpecialWeaponEmissionMaskTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueColor _SpecialWeaponEmissionColor2; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _SpecialWeaponEmissionTexSpeed; // 0xBC
		::MoleMole::MaterialPropertyModifierValueBool _SpecialWeaponEmission; // 0xD4
		::MoleMole::MaterialPropertyModifierValueColor _SpecialWeaponEmissionColor; // 0xD8
		::MoleMole::MaterialPropertyModifierValueVector _SpecialWeaponMergeParam01; // 0xEC
		::MoleMole::MaterialPropertyModifierValueVector _SpecialWeaponMergeParam02; // 0x104
		::MoleMole::MaterialPropertyModifierValueVector _SpecialWeaponMergeParam03; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSPECIALWEAPONEMISSIONMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
