#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1685EC66FBD28897;
class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class ItemIconUI; }
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE_REFRESHICON_OFFSET UNITYSDK_OFFSET(0x183CE0A0)
#define MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x183CE910)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleExpNodeReference_TypeDefinitionIndex = 55255;

	class UICampIdleExpNodeReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* AddIcon; // 0x18
		::UnityEngine::UI::Image* RoleIconImg; // 0x20
		::Class_2_1A39E1B51756BF41* RoleIcon; // 0x28
		::UnityEngine::GameObject* expBarRoot; // 0x30
		::UnityEngine::RectTransform* expBar; // 0x38
		::MoleMole::NotificationBadge* m_notificationBadge; // 0x40
		::Il2CppArray<::UnityEngine::GameObject*>* onlyShowInExp; // 0x48
		::UnityEngine::GameObject* upIcon; // 0x50
		::Il2CppArray<::MoleMole::ItemIconUI*>* itemRewards; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* onlyShowInItem; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshIcon(::System::Boolean a1, ::System::String* a2, ::Class_2_A4D62D05D5EA8464* a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::Class_2_A4D62D05D5EA8464*, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE_REFRESHICON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
