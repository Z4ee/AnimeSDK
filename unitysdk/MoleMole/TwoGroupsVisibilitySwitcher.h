#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TwoGroupsVisibilitySwitcher_SubgroupGroupWrapper.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x170670F0)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x170670A0)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHTEST_OFFSET UNITYSDK_OFFSET(0x17067140)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHVISIBILITYCUSTOM_OFFSET UNITYSDK_OFFSET(0x17067460)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x170671A0)
#define MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x17067840)

namespace MoleMole
{
	inline static constexpr unsigned int TwoGroupsVisibilitySwitcher_TypeDefinitionIndex = 76155;

	class TwoGroupsVisibilitySwitcher : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::MoleMole::TwoGroupsVisibilitySwitcher** StaticGet_instance()
		{
			return (::MoleMole::TwoGroupsVisibilitySwitcher**)Il2CppClass::FromTypeDefinitionIndex(TwoGroupsVisibilitySwitcher_TypeDefinitionIndex)->GetStaticField(0x31510);
		}
		::System::Boolean useCustomGroups; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* groupA; // 0x60
		::Il2CppArray<::UnityEngine::GameObject*>* groupB; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::TwoGroupsVisibilitySwitcher_SubgroupGroupWrapper>*>* customGroups; // 0x70
		::System::Boolean testBool; // 0x78

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

		::System::Void SwitchVisibilityCustom(::System::String* groupKey, ::System::Int32 subGroupIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TWOGROUPSVISIBILITYSWITCHER_SWITCHVISIBILITYCUSTOM_OFFSET))(this, groupKey, subGroupIndex);
		}
	};
}
