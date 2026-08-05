#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/MoleMole/NotificationBadge_Enum_3_7B97D93BA02AC00D.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1EA8435E138F2E03;
class Class_1_CA1C390EF4AF39B6;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NOTIFICATIONBADGE_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1997D980)
#define MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGETYPE_OFFSET UNITYSDK_OFFSET(0x1997C9D0)
#define MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGEVIEWSTYLE_OFFSET UNITYSDK_OFFSET(0x1997D7A0)
#define MOLEMOLE_NOTIFICATIONBADGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1997CB50)
#define MOLEMOLE_NOTIFICATIONBADGE_DISABLEWIDGET_OFFSET UNITYSDK_OFFSET(0x1997CD20)
#define MOLEMOLE_NOTIFICATIONBADGE_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1997D930)
#define MOLEMOLE_NOTIFICATIONBADGE_ENABLEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1997CCC0)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_INITED_OFFSET UNITYSDK_OFFSET(0x1997C2B0)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x1997C2C0)
#define MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1997C2D0)
#define MOLEMOLE_NOTIFICATIONBADGE_HIDE_OFFSET UNITYSDK_OFFSET(0x1997CC00)
#define MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1997C4C0)
#define MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_4E69EDA106390AF6_OFFSET UNITYSDK_OFFSET(0x1997DAD0)
#define MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_EE78BC891AD0F064_OFFSET UNITYSDK_OFFSET(0x1997DC70)
#define MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_EF08AB985B71A773_OFFSET UNITYSDK_OFFSET(0x1997DD10)
#define MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x1997C6D0)
#define MOLEMOLE_NOTIFICATIONBADGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1997C450)
#define MOLEMOLE_NOTIFICATIONBADGE_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x1997C800)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1997CDE0)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERSINGLESUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x1997D4C0)
#define MOLEMOLE_NOTIFICATIONBADGE_REGISTERSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x1997CFA0)
#define MOLEMOLE_NOTIFICATIONBADGE_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0x1997CBB0)
#define MOLEMOLE_NOTIFICATIONBADGE_SETARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1997CF50)
#define MOLEMOLE_NOTIFICATIONBADGE_SETDYNAMICTYPE_OFFSET UNITYSDK_OFFSET(0x1997CD80)
#define MOLEMOLE_NOTIFICATIONBADGE_SETINVOKESTATECHGCBONSAMESTATE_OFFSET UNITYSDK_OFFSET(0x1997C7B0)
#define MOLEMOLE_NOTIFICATIONBADGE_SHOW_OFFSET UNITYSDK_OFFSET(0x1997CC60)
#define MOLEMOLE_NOTIFICATIONBADGE_START_OFFSET UNITYSDK_OFFSET(0x1997C2E0)
#define MOLEMOLE_NOTIFICATIONBADGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1997DA80)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadge_TypeDefinitionIndex = 53455;

	class NotificationBadge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::Enum_3_F019D5BE4A3284F8 notificationShowType; // 0x1C
		::System::Boolean _dynamicBind; // 0x20
		::System::Int32 _arrayIndex; // 0x24
		::UnityEngine::GameObject* _selfEffectObj; // 0x28
		::MoleMole::NotificationBadge_Enum_3_7B97D93BA02AC00D Field_5_11; // 0x30
		::NodeGraph::VariantUnion Field_5_10; // 0x38
		::System::Boolean Field_5_9; // 0x50
		::System::Action_2<::MoleMole::NotificationBadge*, ::System::Boolean>* OnStateUpdate; // 0x58
		::Class_1_CA1C390EF4AF39B6* Field_5_15; // 0x60
		::Class_1_1EA8435E138F2E03* Field_5_14; // 0x68
		::System::Boolean ShowState; // 0x70
		::System::Boolean Field_5_12; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_INITED_OFFSET))(this);
		}

		::Class_1_1EA8435E138F2E03* get_NotificationNode()
		{
			return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONNODE_OFFSET))(this);
		}

		::Enum_3_F019D5BE4A3284F8 get_NotificationShowType()
		{
			return ((::Enum_3_F019D5BE4A3284F8(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_GET_NOTIFICATIONSHOWTYPE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetInvokeStateChgCBOnSameState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETINVOKESTATECHGCBONSAMESTATE_OFFSET))(this, a1);
		}

		::System::Void OnNotify(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ONNOTIFY_OFFSET))(this, a1);
		}

		::System::Void ChangeBadgeType(::Share::ENotificationBadgeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGETYPE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CLEAR_OFFSET))(this);
		}

		::System::Void ResetNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_RESETNOTIFY_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_HIDE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SHOW_OFFSET))(this);
		}

		::System::Void EnableWeight(::Enum_3_F019D5BE4A3284F8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_ENABLEWEIGHT_OFFSET))(this, a1);
		}

		::System::Void DisableWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_DISABLEWIDGET_OFFSET))(this);
		}

		::System::Void SetDynamicType(::Share::ENotificationBadgeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETDYNAMICTYPE_OFFSET))(this, a1);
		}

		::System::Void RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void SetArrayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_SETARRAYINDEX_OFFSET))(this, a1);
		}

		::System::Void RegisterSubNotify(::NodeGraph::VariantUnion a1)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERSUBNOTIFY_OFFSET))(this, a1);
		}

		::System::Void RegisterSingleSubNotify(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_REGISTERSINGLESUBNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeBadgeViewStyle(::Enum_3_F019D5BE4A3284F8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_CHANGEBADGEVIEWSTYLE_OFFSET))(this, a1);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void BindNotificationNode(::Class_1_1EA8435E138F2E03* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_BINDNOTIFICATIONNODE_OFFSET))(this, a1);
		}

		::System::Void Method_5_4E69EDA106390AF6(::NodeGraph::VariantUnion a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_4E69EDA106390AF6_OFFSET))(this, a1, a2);
		}

		::Class_1_CA1C390EF4AF39B6* Method_5_F2B94768004EB1C1()
		{
			return ((::Class_1_CA1C390EF4AF39B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_F2B94768004EB1C1_OFFSET))(this);
		}

		::System::Void Method_5_EE78BC891AD0F064(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_EE78BC891AD0F064_OFFSET))(this, a1);
		}

		::System::Void Method_5_EF08AB985B71A773(::NodeGraph::VariantUnion a1)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_EF08AB985B71A773_OFFSET))(this, a1);
		}

		::System::Void Method_5_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGE_METHOD_5_10054BB010E03EDD_OFFSET))(this);
		}
	};
}
