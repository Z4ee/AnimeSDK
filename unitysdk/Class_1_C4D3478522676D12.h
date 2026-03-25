#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_98;
class Class_1_9CC5524EA4301EAE;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C4D3478522676D12_CLEAR_OFFSET UNITYSDK_OFFSET(0x8C940D0)
#define CLASS_1_C4D3478522676D12_METHOD_1_0A6652D23505B335_OFFSET UNITYSDK_OFFSET(0x8C93F50)
#define CLASS_1_C4D3478522676D12_METHOD_1_32B2A595205BF85E_OFFSET UNITYSDK_OFFSET(0x8C942C0)
#define CLASS_1_C4D3478522676D12_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8C93E90)
#define CLASS_1_C4D3478522676D12_METHOD_1_389830B65F6095D0_OFFSET UNITYSDK_OFFSET(0x8C93C70)
#define CLASS_1_C4D3478522676D12_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x8C94140)
#define CLASS_1_C4D3478522676D12_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x8C93B80)
#define CLASS_1_C4D3478522676D12_METHOD_1_D52AC064A3A894D4_OFFSET UNITYSDK_OFFSET(0x8C94220)
#define CLASS_1_C4D3478522676D12_METHOD_1_DF3389DCFA6E8465_OFFSET UNITYSDK_OFFSET(0x8C93E80)
#define CLASS_1_C4D3478522676D12_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x8C941D0)
#define CLASS_1_C4D3478522676D12__CTOR_OFFSET UNITYSDK_OFFSET(0x8C94330)

inline static constexpr unsigned int Class_1_C4D3478522676D12_TypeDefinitionIndex = 62947;

class Class_1_C4D3478522676D12 : public ::System::Object
{
public:
	::Class_1_9CC5524EA4301EAE* Field_1_2; // 0x10
	::Entitas::IEntity* Field_1_0; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_389830B65F6095D0()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_389830B65F6095D0_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_DF3389DCFA6E8465()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_DF3389DCFA6E8465_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_1_0A6652D23505B335(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_98* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_98*))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_0A6652D23505B335_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_D52AC064A3A894D4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_D52AC064A3A894D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_32B2A595205BF85E(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4D3478522676D12_METHOD_1_32B2A595205BF85E_OFFSET))(this, a1, a2);
	}
};
