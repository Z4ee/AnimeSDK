#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x16AB78D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16AB7770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x16AB91E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x16AB7410)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x16AB7AF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x16AB7970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x16AB7BA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x16AB8540)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x16AB8150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x16AB7DD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB92D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x16AB92E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16AB92F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x16AB93D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x16AB9460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x16AB94F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x16AB9580)
#define MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x16AB9650)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyTransitionModifier_TypeDefinitionIndex = 42951;

	class ConfigMaterialPropertyTransitionModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _TransitionTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _OverrideOutlineTex; // 0x78
		::UnityEngine::Color _TransitionColorRef; // 0xA8
		::System::Single _TransitionCompletionRef; // 0xB8
		::System::Single _TransitionWidthDefault; // 0xBC
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionCompletion; // 0xC0
		::System::Single _TransitionCompletionDefault; // 0xC8
		::UnityEngine::Color _TransitionColorDefault; // 0xCC
		::System::Single _TransitionWidthRef; // 0xDC
		::MoleMole::MaterialPropertyModifierValueFloat _TransitionWidth; // 0xE0
		::MoleMole::MaterialPropertyModifierValueBool _OverrideOutlineUseUV2; // 0xE8
		::MoleMole::MaterialPropertyModifierValueBool _Transition; // 0xEB
		::MoleMole::MaterialPropertyModifierValueColor _TransitionColor; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYTRANSITIONMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
