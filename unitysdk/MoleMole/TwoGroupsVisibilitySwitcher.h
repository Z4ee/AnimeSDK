#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18D279E0)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18D27990)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHTEST_OFFSET UNITYSDK_OFFSET(0x18D27A30)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18D27A90)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D27D50)

namespace MoleMole
{
	inline static constexpr unsigned int TwoGroupsVisibilitySwitcher_TypeDefinitionIndex = 41660;

	class TwoGroupsVisibilitySwitcher : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::MoleMole::TwoGroupsVisibilitySwitcher** StaticGet_instance()
		{
			return (::MoleMole::TwoGroupsVisibilitySwitcher**)Il2CppClass::FromTypeDefinitionIndex(TwoGroupsVisibilitySwitcher_TypeDefinitionIndex)->GetStaticField(0x32CD0);
		}
		::Il2CppArray<::UnityEngine::GameObject*>* groupA; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* groupB; // 0x60
		::System::Boolean testBool; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SwitchTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHTEST_OFFSET))(this);
		}

		::System::Void SwitchVisibility(::System::Boolean groupBVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHVISIBILITY_OFFSET))(this, groupBVisible);
		}
	};
}
