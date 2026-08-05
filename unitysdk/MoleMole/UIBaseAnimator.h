#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x193168D0)
#define MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0x19315910)
#define MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x19316910)
#define MOLEMOLE_UIBASEANIMATOR_METHOD_5_1587E27051DE9F65_OFFSET UNITYSDK_OFFSET(0x19315960)
#define MOLEMOLE_UIBASEANIMATOR_METHOD_5_CA2A811F88C8CC86_OFFSET UNITYSDK_OFFSET(0x19316AF0)
#define MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET UNITYSDK_OFFSET(0x19316190)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET UNITYSDK_OFFSET(0x19316500)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET UNITYSDK_OFFSET(0x193166E0)
#define MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x19316340)
#define MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET UNITYSDK_OFFSET(0x19315C80)
#define MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x19315E30)
#define MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET UNITYSDK_OFFSET(0x19315FE0)
#define MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x19315AE0)
#define MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19316AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseAnimator_TypeDefinitionIndex = 81827;

	class UIBaseAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18
		::UnityEngine::MdbComponent* Field_5_7; // 0x20
		::System::Boolean Field_5_6; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_GETANIMATOR_OFFSET))(this);
		}

		::System::Void SetTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAllLayerAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYALLLAYERANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayAnimation(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAnimation_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_1_OFFSET))(this, a1, a2);
		}

		::System::Void PlayAnimation_2(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_PLAYANIMATION_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitializeForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_INITIALIZEFORCEUPDATE_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* Method_5_CA2A811F88C8CC86()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_METHOD_5_CA2A811F88C8CC86_OFFSET))(this);
		}

		::UnityEngine::Animator* Method_5_1587E27051DE9F65()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEANIMATOR_METHOD_5_1587E27051DE9F65_OFFSET))(this);
		}
	};
}
