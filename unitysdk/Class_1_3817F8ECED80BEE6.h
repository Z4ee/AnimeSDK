#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_1_9DFC523FA52CA703;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3817F8ECED80BEE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x19212E90)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_34DA542281C267E6_OFFSET UNITYSDK_OFFSET(0x192127B0)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x19212C40)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_50524984576ED204_OFFSET UNITYSDK_OFFSET(0x19213070)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_5264B2663C5820DC_OFFSET UNITYSDK_OFFSET(0x19212D00)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_55904F20EA70E56E_OFFSET UNITYSDK_OFFSET(0x19212C30)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x19212EF0)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_D52AC064A3A894D4_OFFSET UNITYSDK_OFFSET(0x19212FD0)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_DF3389DCFA6E8465_OFFSET UNITYSDK_OFFSET(0x19212900)
#define CLASS_1_3817F8ECED80BEE6_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x19212F80)
#define CLASS_1_3817F8ECED80BEE6__CTOR_OFFSET UNITYSDK_OFFSET(0x192130E0)

inline static constexpr unsigned int Class_1_3817F8ECED80BEE6_TypeDefinitionIndex = 73377;

class Class_1_3817F8ECED80BEE6 : public ::System::Object
{
public:
	::Entitas::IEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_1_9DFC523FA52CA703* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_34DA542281C267E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_34DA542281C267E6_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_DF3389DCFA6E8465()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_DF3389DCFA6E8465_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_55904F20EA70E56E()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_55904F20EA70E56E_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_1_5264B2663C5820DC(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_116* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_116*))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_5264B2663C5820DC_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_D52AC064A3A894D4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_D52AC064A3A894D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_50524984576ED204(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3817F8ECED80BEE6_METHOD_1_50524984576ED204_OFFSET))(this, a1, a2);
	}
};
