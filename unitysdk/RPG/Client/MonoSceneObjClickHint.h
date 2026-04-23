#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9F5F00)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GETCURATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA9F62D0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA9F5EE0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9F5E60)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xA9F5EA0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xA9F5EC0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA9F5E80)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONENTERHOVER_OFFSET UNITYSDK_OFFSET(0xA9F6390)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONEXITHOVER_OFFSET UNITYSDK_OFFSET(0xA9F63E0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA9F6430)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xA9F6480)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_RESETRUNTIME_OFFSET UNITYSDK_OFFSET(0xA9F6260)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETATTACHPOINTINDEXRUNTIME_OFFSET UNITYSDK_OFFSET(0xA9F5FB0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETSHOWRUNTIME_OFFSET UNITYSDK_OFFSET(0xA9F5F50)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA9F5EF0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA9F5E70)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xA9F5EB0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xA9F5ED0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA9F5E90)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F64D0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__ISATTACHPOINTINDEXVALID_OFFSET UNITYSDK_OFFSET(0xA9F61F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSceneObjClickHint_TypeDefinitionIndex = 63570;

	class MonoSceneObjClickHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* AttachPointList; // 0x18
		::System::UInt32 DefaultAttachPointIndex; // 0x20
		::System::UInt32 _EntityRuntimeID_k__BackingField; // 0x24
		::System::Boolean _IsShow_k__BackingField; // 0x28
		::System::Boolean _IsHovered_k__BackingField; // 0x29
		::System::Boolean _IsSelected_k__BackingField; // 0x2A
		::System::UInt32 _CurAttachPointIndex_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_EntityRuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ENTITYRUNTIMEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_IsHovered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISHOVERED_OFFSET))(this);
		}

		::System::Void set_IsHovered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISHOVERED_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_CurAttachPointIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_CURATTACHPOINTINDEX_OFFSET))(this);
		}

		::System::Void set_CurAttachPointIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_CURATTACHPOINTINDEX_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_AWAKE_OFFSET))(this);
		}

		::System::Void SetShowRuntime(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETSHOWRUNTIME_OFFSET))(this, isShow);
		}

		::System::Void SetAttachPointIndexRuntime(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETATTACHPOINTINDEXRUNTIME_OFFSET))(this, index);
		}

		::System::Void ResetRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_RESETRUNTIME_OFFSET))(this);
		}

		::UnityEngine::Transform* GetCurAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GETCURATTACHPOINT_OFFSET))(this);
		}

		::System::Void OnEnterHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONENTERHOVER_OFFSET))(this);
		}

		::System::Void OnExitHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONEXITHOVER_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONSELECT_OFFSET))(this);
		}

		::System::Void OnUnselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONUNSELECT_OFFSET))(this);
		}

		::System::Boolean _IsAttachPointIndexValid(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT__ISATTACHPOINTINDEXVALID_OFFSET))(this, index);
		}
	};
}
