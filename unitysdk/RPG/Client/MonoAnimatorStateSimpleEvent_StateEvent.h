#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }
namespace RPG::Client { class MonoAnimatorStateSimpleEvent_Event; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_METHOD_1_9E6A43039EB02D1E_OFFSET UNITYSDK_OFFSET(0xC058510)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0587B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_StateEvent_TypeDefinitionIndex = 64098;

	class MonoAnimatorStateSimpleEvent_StateEvent : public ::System::Object
	{
	public:
		::System::Int32 LayerIndex; // 0x10
		::System::String* StateName; // 0x18
		::Il2CppArray<::RPG::Client::MonoAnimatorStateSimpleEvent_Event*>* Events; // 0x20
		::RPG::Client::MonoAnimatorStateSimpleEvent* _Mono; // 0x28
		::System::Int32 _EventIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9E6A43039EB02D1E(::RPG::Client::MonoAnimatorStateSimpleEvent* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_METHOD_1_9E6A43039EB02D1E_OFFSET))(this, a1, a2);
		}
	};
}
