#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD861940)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GETCURATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xD861CD0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xD861920)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD8618A0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xD8618E0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xD861900)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD8618C0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONENTERHOVER_OFFSET UNITYSDK_OFFSET(0xD861DB0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONEXITHOVER_OFFSET UNITYSDK_OFFSET(0xD861E00)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONSELECT_OFFSET UNITYSDK_OFFSET(0xD861E50)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xD861EA0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_RESETRUNTIME_OFFSET UNITYSDK_OFFSET(0xD861C60)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETATTACHPOINTINDEXRUNTIME_OFFSET UNITYSDK_OFFSET(0xD8619F0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SETSHOWRUNTIME_OFFSET UNITYSDK_OFFSET(0xD861990)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_CURATTACHPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xD861930)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD8618B0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISHOVERED_OFFSET UNITYSDK_OFFSET(0xD8618F0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xD861910)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD8618D0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xD861EF0)
#define RPG_CLIENT_MONOSCENEOBJCLICKHINT__ISATTACHPOINTINDEXVALID_OFFSET UNITYSDK_OFFSET(0xD861BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSceneObjClickHint_TypeDefinitionIndex = 68930;

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
