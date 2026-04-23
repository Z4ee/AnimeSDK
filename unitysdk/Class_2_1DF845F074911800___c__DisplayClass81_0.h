#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A6989C352B0F0F0;
class Class_2_1DF845F074911800;
namespace RPG::Client { class MonoRenderPerfOptIndicator; }
namespace RPG::Client { class PolymerEffectControllBase; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B37D30)
#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__0_OFFSET UNITYSDK_OFFSET(0x12B39A70)
#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__1_OFFSET UNITYSDK_OFFSET(0x12B39B90)
#define CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__2_OFFSET UNITYSDK_OFFSET(0x12B39E70)

inline static constexpr unsigned int Class_2_1DF845F074911800___c__DisplayClass81_0_TypeDefinitionIndex = 68001;

class Class_2_1DF845F074911800___c__DisplayClass81_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::PolymerEffectControllBase*>* effectController; // 0x10
	::UnityEngine::GameObject* instObj; // 0x18
	::UnityEngine::Animator* animator; // 0x20
	::RPG::Client::MonoRenderPerfOptIndicator* monoRenderPerfOptIndicator; // 0x28
	::Class_2_1DF845F074911800* __4__this; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
	}

	::System::Void _InstanceRenderStub_b__0(::RPG::Client::OpenWorld::StreamingItemData* itemData, ::UnityEngine::GameObject* before, ::UnityEngine::GameObject* after)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__0_OFFSET))(this, itemData, before, after);
	}

	::System::Void _InstanceRenderStub_b__1(::RPG::Client::OpenWorld::StreamingItemData* itemData, ::UnityEngine::GameObject* renderInstance)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__1_OFFSET))(this, itemData, renderInstance);
	}

	::System::Void _InstanceRenderStub_b__2(::Class_1_8A6989C352B0F0F0* instance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1DF845F074911800___C__DISPLAYCLASS81_0__INSTANCERENDERSTUB_B__2_OFFSET))(this, instance);
	}
};
