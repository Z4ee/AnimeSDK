#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AlleyRouteBird; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BB15C35EB66E7EA8_GET_OFFSET UNITYSDK_OFFSET(0x158FE7F0)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0x158FE4C0)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_79B8A499B368D483_OFFSET UNITYSDK_OFFSET(0x158FE8C0)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_A70A924C6A2795D2_OFFSET UNITYSDK_OFFSET(0x158FEA50)
#define CLASS_1_BB15C35EB66E7EA8_METHOD_1_F10CDB08E0E6C4E8_OFFSET UNITYSDK_OFFSET(0x158FE6B0)
#define CLASS_1_BB15C35EB66E7EA8_PRELOAD_OFFSET UNITYSDK_OFFSET(0x158FE710)
#define CLASS_1_BB15C35EB66E7EA8_RETURN_OFFSET UNITYSDK_OFFSET(0x158FE980)
#define CLASS_1_BB15C35EB66E7EA8__CTOR_OFFSET UNITYSDK_OFFSET(0x158FE600)

inline static constexpr unsigned int Class_1_BB15C35EB66E7EA8_TypeDefinitionIndex = 62379;

class Class_1_BB15C35EB66E7EA8 : public ::System::Object
{
public:
	// static const ::System::String* BBOCHKNNMCC; // 0x0
	::System::Collections::Generic::Stack_1<::RPG::Client::AlleyRouteBird*>* GCIKKMGIPIO; // 0x10
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x18
	::UnityEngine::Transform* LJIELCLFKIK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8__CTOR_OFFSET))(this);
	}

	static ::Class_1_BB15C35EB66E7EA8* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_BB15C35EB66E7EA8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB15C35EB66E7EA8_METHOD_1_2F8C1CDF056C52FC_OFFSET))();
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
