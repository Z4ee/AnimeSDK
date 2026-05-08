#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D442DADFF54EB830.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1EA8435E138F2E03;
class Class_3_4E47F36769F2B13F_1;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x10E4A7F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x10E4B0F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET UNITYSDK_OFFSET(0x10E4B020)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x10E4AB50)
#define MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET UNITYSDK_OFFSET(0x10E4B4E0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x10E4B650)
#define MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET UNITYSDK_OFFSET(0x10E4B480)
#define MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET UNITYSDK_OFFSET(0x10E4B600)
#define MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x10E4A850)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_97D0AD0D877DE9D8_OFFSET UNITYSDK_OFFSET(0x10E4B700)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x10E4B250)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10E4AF70)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10E4AD60)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10E4AC80)
#define MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET UNITYSDK_OFFSET(0x10E4AD00)
#define MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0x10E4ADB0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x10E4B530)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET UNITYSDK_OFFSET(0x10E4B5B0)
#define MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x10E4B6B0)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadgeEx_TypeDefinitionIndex = 51470;

	class NotificationBadgeEx : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::UnityEngine::Transform* _newTransform; // 0x20
		::UnityEngine::Transform* _redPointTransform; // 0x28
		::UnityEngine::GameObject* _effectObj; // 0x30
		::System::Boolean copyDontClear; // 0x38
		::Enum_3_D442DADFF54EB830 uiDisplayOrder; // 0x3A
		::Class_3_4E47F36769F2B13F_1* Field_5_6; // 0x40
		::Class_1_1EA8435E138F2E03* Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitGeneralNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET))(this);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET))(this, a1, a2);
		}

		::System::Void BindNotificationNode_1(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindNotificationNode_2(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetRedSignCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET))(this);
		}

		::System::Void ResetNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET))(this);
		}

		::System::Void ClearNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET))(this);
		}

		::System::Void RebindNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET))(this);
		}

		::System::Void SetUIDisplayOrder(::Enum_3_D442DADFF54EB830 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D442DADFF54EB830))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_97D0AD0D877DE9D8(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_97D0AD0D877DE9D8_OFFSET))(this, a1);
		}
	};
}
