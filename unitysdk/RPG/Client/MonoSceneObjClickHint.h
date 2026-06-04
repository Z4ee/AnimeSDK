#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_AWAKE_OFFSET UNITYSDK_OFFSET(0xC143F50)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GETCURATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xC1442E0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xC143F30)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC143EB0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xC143EF0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xC143F10)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC143ED0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONENTERHOVER_OFFSET UNITYSDK_OFFSET(0xC1443C0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONEXITHOVER_OFFSET UNITYSDK_OFFSET(0xC144410)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONSELECT_OFFSET UNITYSDK_OFFSET(0xC144460)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xC1444B0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_RESETRUNTIME_OFFSET UNITYSDK_OFFSET(0xC144270)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETATTACHPOINTINDEXRUNTIME_OFFSET UNITYSDK_OFFSET(0xC144000)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETSHOWRUNTIME_OFFSET UNITYSDK_OFFSET(0xC143FA0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xC143F40)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC143EC0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xC143F00)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xC143F20)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC143EE0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xC144500)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__ISATTACHPOINTINDEXVALID_OFFSET UNITYSDK_OFFSET(0xC144200)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSceneObjClickHint_TypeDefinitionIndex = 64491;

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

		::System::Void set_EntityRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ENTITYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHovered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISHOVERED_OFFSET))(this);
		}

		::System::Void set_IsHovered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISHOVERED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAttachPointIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_CURATTACHPOINTINDEX_OFFSET))(this);
		}

		::System::Void set_CurAttachPointIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_CURATTACHPOINTINDEX_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_AWAKE_OFFSET))(this);
		}

		::System::Void SetShowRuntime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETSHOWRUNTIME_OFFSET))(this, a1);
		}

		::System::Void SetAttachPointIndexRuntime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETATTACHPOINTINDEXRUNTIME_OFFSET))(this, a1);
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

		::System::Boolean _IsAttachPointIndexValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCENEOBJCLICKHINT__ISATTACHPOINTINDEXVALID_OFFSET))(this, a1);
		}
	};
}
