#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCStreamingProxy_StreamingState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define NPCSTREAMINGPROXY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xD4616C0)
#define NPCSTREAMINGPROXY_CHECKDUMMY_OFFSET UNITYSDK_OFFSET(0xD461A40)
#define NPCSTREAMINGPROXY_CREATENPCSTREAMINGPROXY_OFFSET UNITYSDK_OFFSET(0xD4619D0)
#define NPCSTREAMINGPROXY_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xD461190)
#define NPCSTREAMINGPROXY_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0xD461880)
#define NPCSTREAMINGPROXY_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0xD461920)
#define NPCSTREAMINGPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD461200)
#define NPCSTREAMINGPROXY_START_OFFSET UNITYSDK_OFFSET(0xD4611A0)
#define NPCSTREAMINGPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xD461410)
#define NPCSTREAMINGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0xD461C40)
#define NPCSTREAMINGPROXY__CHANGESTATE_B__20_0_OFFSET UNITYSDK_OFFSET(0xD461D20)
#define NPCSTREAMINGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xD461BF0)

inline static constexpr unsigned int NPCStreamingProxy_TypeDefinitionIndex = 62140;

class NPCStreamingProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_DUMMY_PATHES()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCStreamingProxy_TypeDefinitionIndex)->GetStaticField(0x48C20);
	}
	static ::System::Boolean* StaticGet_OpenStreaming()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCStreamingProxy_TypeDefinitionIndex)->GetStaticField(0x118A0);
	}
	static ::System::Single* StaticGet_CachedTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCStreamingProxy_TypeDefinitionIndex)->GetStaticField(0x118A4);
	}
	static ::System::Single* StaticGet_CachedDistance()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCStreamingProxy_TypeDefinitionIndex)->GetStaticField(0x118A8);
	}
	// static const ::System::String* PROXY_PATH; // 0x0
	::System::Single _nowTime; // 0x18
	::System::Boolean _needStreamingOut; // 0x1C
	::System::String* _path; // 0x20
	::Foundation::AssetRequestHandle _request; // 0x28
	::NPCStreamingProxy_StreamingState NowState; // 0x48
	::System::Action_2<::UnityEngine::GameObject*, ::System::UInt32>* OnStreamingIn; // 0x50
	::System::Action_1<::System::UInt32>* OnStreamingOut; // 0x58
	::System::UInt32 CachedEntityId; // 0x60
	::UnityEngine::Transform* _mainCameraTr; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY__CCTOR_OFFSET))();
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void ChangeState(::NPCStreamingProxy_StreamingState state)
	{
		return ((::System::Void(*)(::PVOID, ::NPCStreamingProxy_StreamingState))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_CHANGESTATE_OFFSET))(this, state);
	}

	::System::Void OnBecameInvisible()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_ONBECAMEINVISIBLE_OFFSET))(this);
	}

	::System::Void OnBecameVisible()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_ONBECAMEVISIBLE_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* CreateNPCStreamingProxy(::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornQuaternion, ::System::String* loadPath)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_CREATENPCSTREAMINGPROXY_OFFSET))(bornPosition, bornQuaternion, loadPath);
	}

	static ::System::Boolean CheckDummy(::System::String* loadPath)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY_CHECKDUMMY_OFFSET))(loadPath);
	}

	::System::Void _ChangeState_b__20_0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle request)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NPCSTREAMINGPROXY__CHANGESTATE_B__20_0_OFFSET))(this, asset, request);
	}
};
