#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B4F7760)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B4F76A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B4F8CE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B4F7540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4F7850)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B4F77C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B4F7890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B4F8100)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B4F7D00)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B4F7980)
#define MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F8E10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyNoiseLerpModifier_TypeDefinitionIndex = 46995;

	class ConfigMaterialPropertyNoiseLerpModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _NoiseLerpMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _NoiseLerpValue; // 0x78
		::MoleMole::MaterialPropertyModifierValueColor _NoiseLerpColor; // 0x80
		::MoleMole::MaterialPropertyModifierValueColor _NoiseLerpEdgeColor; // 0x94
		::MoleMole::MaterialPropertyModifierValueFloat _NoiseLerpEdgeRange; // 0xA8
		::MoleMole::MaterialPropertyModifierValueBool _UseLerpEdgeColor; // 0xB0
		::MoleMole::MaterialPropertyModifierValueBool _NoiseLerp; // 0xB3
		::MoleMole::MaterialPropertyModifierValueBool _NoiseUseUV2; // 0xB6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYNOISELERPMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
