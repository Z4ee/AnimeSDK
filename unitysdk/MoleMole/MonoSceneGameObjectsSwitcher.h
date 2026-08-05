#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16876CF0)
#define MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16876B40)
#define MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_SWITCHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16876A20)
#define MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x16876D90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneGameObjectsSwitcher_TypeDefinitionIndex = 43117;

	class MonoSceneGameObjectsSwitcher : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::String* Description; // 0x58
		::System::String* Key; // 0x60
		::Il2CppArray<::UnityEngine::GameObject*>* Groups; // 0x68
		::System::Int32 targetStateBindIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void SwitchVisibility(::System::Int32 visibleGroupIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_SWITCHVISIBILITY_OFFSET))(this, visibleGroupIndex);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEGAMEOBJECTSSWITCHER_ONDISABLE_OFFSET))(this);
		}
	};
}
