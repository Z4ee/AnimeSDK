#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xDD66F80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_METHOD_5_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xDD67400)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD670A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_REMOVEROTATE_OFFSET UNITYSDK_OFFSET(0xDD644D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_ROTATE_OFFSET UNITYSDK_OFFSET(0xDD61CC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD671C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xDD67490)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY__ONROTATEREMOVE_OFFSET UNITYSDK_OFFSET(0xDD67390)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleRotateProxy_TypeDefinitionIndex = 78464;

	class WormCompassPuzzleRotateProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* RotateRoot; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KKCNMLOOPHE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Rotate(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_ROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveRotate(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_REMOVEROTATE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void _OnRotateRemove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY__ONROTATEREMOVE_OFFSET))(this, a1);
		}

		::System::Void Method_5_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEROTATEPROXY_METHOD_5_C450A961450309C9_OFFSET))(this, a1);
		}
	};
}
