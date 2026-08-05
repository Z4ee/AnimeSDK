#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A94AFE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1A94C8D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A94AEB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A94C6F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1A94CA50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A94ABA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A94B170)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A94B040)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A94B1F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A94BAA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A94B700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A94B3C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94CAD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyTransitionModifier_TypeDefinitionIndex = 73440;

	class ConfigMaterialPropertyTransitionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _TransitionTex; // 0x78
		::System::Single _TransitionCompletionRef; // 0xA8
		::MoleMole::MaterialPropertyModifierValueColor _TransitionColor; // 0xAC
		::UnityEngine::Color _TransitionColorDefault; // 0xC0
		::System::Single _TransitionCompletionDefault; // 0xD0
		::UnityEngine::Color _TransitionColorRef; // 0xD4
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionWidth; // 0xE4
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionCompletion; // 0xEC
		::System::Single _TransitionWidthRef; // 0xF4
		::System::Single _TransitionWidthDefault; // 0xF8
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutlineUseUV2; // 0xFC
		::MoleMole::MaterialPropertyModifierValueBool _Transition; // 0xFF

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
