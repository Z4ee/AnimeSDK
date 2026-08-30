#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_644;
class Class_1_A0302E9AE0B8A2B9;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_03F1BFA7AF4C70C7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A79CD50)
#define CLASS_1_03F1BFA7AF4C70C7_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1A79C9E0)
#define CLASS_1_03F1BFA7AF4C70C7_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A79CA00)
#define CLASS_1_03F1BFA7AF4C70C7_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1A79CBD0)
#define CLASS_1_03F1BFA7AF4C70C7_METHOD_1_3F964D65BE80DA02_OFFSET UNITYSDK_OFFSET(0x1A79CB30)
#define CLASS_1_03F1BFA7AF4C70C7_METHOD_1_6564505CB5F19BFD_OFFSET UNITYSDK_OFFSET(0x1A79CA20)
#define CLASS_1_03F1BFA7AF4C70C7_METHOD_1_FC38363DF3864613_OFFSET UNITYSDK_OFFSET(0x1A79CA90)
#define CLASS_1_03F1BFA7AF4C70C7_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1A79CCC0)
#define CLASS_1_03F1BFA7AF4C70C7_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1A79CC30)
#define CLASS_1_03F1BFA7AF4C70C7_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1A79C9F0)
#define CLASS_1_03F1BFA7AF4C70C7_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A79CA10)
#define CLASS_1_03F1BFA7AF4C70C7_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A79CD10)
#define CLASS_1_03F1BFA7AF4C70C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79CDA0)

inline static constexpr unsigned int Class_1_03F1BFA7AF4C70C7_TypeDefinitionIndex = 59525;

class Class_1_03F1BFA7AF4C70C7 : public ::System::Object
{
public:
	::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_644*>* GPOMBCJHLDP; // 0x10
	::Class_1_A0302E9AE0B8A2B9* _Owner_k__BackingField; // 0x18
	::System::Action_1<::UnityEngine::GameObject*>* IMDLGFPMPEK; // 0x20
	::RPG::Client::GameObjectSpawnPriority _Priority_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7__CTOR_OFFSET))(this);
	}

	::Class_1_A0302E9AE0B8A2B9* get_Owner()
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_SET_OWNER_OFFSET))(this, a1);
	}

	::RPG::Client::GameObjectSpawnPriority get_Priority()
	{
		return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::RPG::Client::GameObjectSpawnPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectSpawnPriority))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_SET_PRIORITY_OFFSET))(this, a1);
	}

	static ::Class_1_03F1BFA7AF4C70C7* Method_1_6564505CB5F19BFD(::System::Action_1<::UnityEngine::GameObject*>* a1, ::RPG::Client::GameObjectSpawnPriority a2)
	{
		return ((::Class_1_03F1BFA7AF4C70C7*(*)(::System::Action_1<::UnityEngine::GameObject*>*, ::RPG::Client::GameObjectSpawnPriority))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_METHOD_1_6564505CB5F19BFD_OFFSET))(a1, a2);
	}

	::Class_1_03F1BFA7AF4C70C7* Method_1_FC38363DF3864613(::System::Action_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::Class_1_03F1BFA7AF4C70C7*(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_METHOD_1_FC38363DF3864613_OFFSET))(this, a1);
	}

	::Class_1_03F1BFA7AF4C70C7* Method_1_3F964D65BE80DA02(::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_644*>* a1)
	{
		return ((::Class_1_03F1BFA7AF4C70C7*(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_644*>*))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_METHOD_1_3F964D65BE80DA02_OFFSET))(this, a1);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F1BFA7AF4C70C7_CLEAR_OFFSET))(this);
	}
};
