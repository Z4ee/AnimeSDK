#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B36E10)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_INIT_OFFSET UNITYSDK_OFFSET(0x15B354E0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_4254ECBCC8032C4E_OFFSET UNITYSDK_OFFSET(0x15B36F80)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_94631B8CCB6F34EF_OFFSET UNITYSDK_OFFSET(0x15B36120)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_D802AFB1EA914FA9_OFFSET UNITYSDK_OFFSET(0x15B35A90)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETBLOCKEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B364D0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETENDEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B362A0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETSTARTEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B35EF0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x15B357C0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWBLOCKEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B35740)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWENDEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B356C0)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWSTARTEFFECTS_OFFSET UNITYSDK_OFFSET(0x15B35640)
#define MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15B371C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLaserLineLightingAggregation_TypeDefinitionIndex = 39787;

	class MonoEffectPluginLaserLineLightingAggregation : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* startTransform; // 0x18
		::UnityEngine::Transform* endTransform; // 0x20
		::System::Boolean useUnifiedStartEffect; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* startEffectList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_6_4; // 0x38
		::System::Boolean Field_6_5; // 0x40
		::System::Boolean useUnifiedEndEffect; // 0x41
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* endEffectList; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_6_8; // 0x50
		::System::Boolean Field_6_9; // 0x58
		::System::Boolean useUnifiedBlockEffect; // 0x59
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* blockEffectList; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_6_12; // 0x68
		::System::Boolean Field_6_13; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_INIT_OFFSET))(this);
		}

		::System::Void SetTransformPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETTRANSFORMPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void ShowStartEffects(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWSTARTEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowEndEffects(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWENDEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowBlockEffects(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SHOWBLOCKEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetStartEffects(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETSTARTEFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void SetEndEffects(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETENDEFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockEffects(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_SETBLOCKEFFECTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_AWAKE_OFFSET))(this);
		}

		::System::Void Method_6_4254ECBCC8032C4E(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_4254ECBCC8032C4E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_94631B8CCB6F34EF(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_94631B8CCB6F34EF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_D802AFB1EA914FA9(::System::Boolean a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINELIGHTINGAGGREGATION_METHOD_6_D802AFB1EA914FA9_OFFSET))(this, a1, a2, a3);
		}
	};
}
