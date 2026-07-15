#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyRouteBird; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BB15C35EB66E7EA8_GET_OFFSET UNITYSDK_OFFSET(0x13A248C0)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_79B8A499B368D483_OFFSET UNITYSDK_OFFSET(0x13A24990)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x15F06430)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_A70A924C6A2795D2_OFFSET UNITYSDK_OFFSET(0x13A24B20)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_F10CDB08E0E6C4E8_OFFSET UNITYSDK_OFFSET(0x13A24780)
#define CLASS_1_BB15C35EB66E7EA8_PRELOAD_OFFSET UNITYSDK_OFFSET(0x13A247E0)
#define CLASS_1_BB15C35EB66E7EA8_RETURN_OFFSET UNITYSDK_OFFSET(0x13A24A50)
#define CLASS_1_BB15C35EB66E7EA8__CTOR_OFFSET UNITYSDK_OFFSET(0x13A24BC0)

inline static constexpr unsigned int Class_1_BB15C35EB66E7EA8_TypeDefinitionIndex = 59540;

class Class_1_BB15C35EB66E7EA8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::Stack_1<::RPG::Client::AlleyRouteBird*>* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::RPG::Client::UIPrefabLoader* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8__CTOR_OFFSET))(this);
	}

	static ::Class_1_BB15C35EB66E7EA8* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BB15C35EB66E7EA8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_F10CDB08E0E6C4E8(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_METHOD_1_F10CDB08E0E6C4E8_OFFSET))(this, a1, a2);
	}

	::System::Void PreLoad(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_PRELOAD_OFFSET))(this, a1);
	}

	::RPG::Client::AlleyRouteBird* Get()
	{
		return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_GET_OFFSET))(this);
	}

	::System::Void Return(::RPG::Client::AlleyRouteBird* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyRouteBird*))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_RETURN_OFFSET))(this, a1);
	}

	::RPG::Client::AlleyRouteBird* Method_1_79B8A499B368D483()
	{
		return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_METHOD_1_79B8A499B368D483_OFFSET))(this);
	}

	::System::Void Method_1_A70A924C6A2795D2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_METHOD_1_A70A924C6A2795D2_OFFSET))(this, a1);
	}
};
