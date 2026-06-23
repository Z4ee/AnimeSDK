#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET_GET_DELAYDISABLEANIMATORREMAIN_OFFSET UNITYSDK_OFFSET(0x674F40)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET_SET_DELAYDISABLEANIMATORREMAIN_OFFSET UNITYSDK_OFFSET(0x85D030)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET__CTOR_OFFSET UNITYSDK_OFFSET(0x85D040)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelAnimatorSwitcher_ModelSet_TypeDefinitionIndex = 75543;

	struct alignas(8) MonoModelAnimatorSwitcher_ModelSet
	{
		::System::String* Name; // 0x10
		::UnityEngine::Animator* Animator; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x20
		::System::Single _DelayDisableAnimatorRemain_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_DelayDisableAnimatorRemain()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET_GET_DELAYDISABLEANIMATORREMAIN_OFFSET))(this);
		}

		::System::Void set_DelayDisableAnimatorRemain(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_MODELSET_SET_DELAYDISABLEANIMATORREMAIN_OFFSET))(this, a1);
		}
	};
}
