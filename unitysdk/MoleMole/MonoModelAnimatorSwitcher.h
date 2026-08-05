#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoModelAnimatorSwitcher_ModelSet.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_MONOMODELANIMATORSWITCHER_CHECKDELAYDISABLE_OFFSET UNITYSDK_OFFSET(0x136DDAD0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_GETMODELSETINDEX_OFFSET UNITYSDK_OFFSET(0x136DD9B0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_GET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET UNITYSDK_OFFSET(0x136DD990)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_METHOD_5_7A2E89572E7E9DB4_OFFSET UNITYSDK_OFFSET(0x136DDCE0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SETMODELSETACTIVE_OFFSET UNITYSDK_OFFSET(0x136DDDE0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET UNITYSDK_OFFSET(0x136DD9A0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SWITCHMODELSET_OFFSET UNITYSDK_OFFSET(0x136DDD40)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x136DE020)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelAnimatorSwitcher_TypeDefinitionIndex = 70615;

	class MonoModelAnimatorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::MonoModelAnimatorSwitcher_ModelSet>* ModelSets; // 0x18
		::System::Int32 currentModelSetIndex; // 0x20
		::System::Boolean Field_5_6; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_needUpdateDelayAnimatorDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_GET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET))(this);
		}

		::System::Void set_needUpdateDelayAnimatorDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET))(this, a1);
		}

		::System::Int32 GetModelSetIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_GETMODELSETINDEX_OFFSET))(this, a1);
		}

		::System::Void CheckDelayDisable(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_CHECKDELAYDISABLE_OFFSET))(this, a1);
		}

		::System::Void SwitchModelSet(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SWITCHMODELSET_OFFSET))(this, a1, a2);
		}

		::System::Void SetModelSetActive(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SETMODELSETACTIVE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_7A2E89572E7E9DB4(::UnityEngine::Animator* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_METHOD_5_7A2E89572E7E9DB4_OFFSET))(a1, a2);
		}
	};
}
