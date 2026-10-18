#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A6989C352B0F0F0;
class Class_2_1A304D4C36D43D86;
namespace RPG::Client { class MonoRenderPerfOptIndicator; }
namespace RPG::Client { class PolymerEffectControllBase; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDBA950)
#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__0_OFFSET UNITYSDK_OFFSET(0xBDBC7C0)
#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__1_OFFSET UNITYSDK_OFFSET(0xBDBC980)
#define CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__2_OFFSET UNITYSDK_OFFSET(0xBDBCC90)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86___c__DisplayClass92_0_TypeDefinitionIndex = 73881;

class Class_2_1A304D4C36D43D86___c__DisplayClass92_0 : public ::System::Object
{
public:
	::Class_2_1A304D4C36D43D86* __4__this; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::PolymerEffectControllBase*>* effectController; // 0x18
	::RPG::Client::MonoRenderPerfOptIndicator* monoRenderPerfOptIndicator; // 0x20
	::UnityEngine::GameObject* instObj; // 0x28
	::UnityEngine::Animator* animator; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__CTOR_OFFSET))(this);
	}

	::System::Void _InstanceRenderStub_b__0(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _InstanceRenderStub_b__1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__1_OFFSET))(this, a1, a2);
	}

	::System::Void _InstanceRenderStub_b__2(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86___C__DISPLAYCLASS92_0__INSTANCERENDERSTUB_B__2_OFFSET))(this, a1);
	}
};
