#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E4E5BB5D3E96815;
class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_9E4E5BB5D3E96815___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D4DCC0)
#define CLASS_1_9E4E5BB5D3E96815___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4DCF0)
#define CLASS_1_9E4E5BB5D3E96815___C___DEPLOYBORDERPLAT_B__5_0_OFFSET UNITYSDK_OFFSET(0x17D4DD00)
#define CLASS_1_9E4E5BB5D3E96815___C___DEPLOYBORDERPLAT_B__5_1_OFFSET UNITYSDK_OFFSET(0x17D4DD30)

inline static constexpr unsigned int Class_1_9E4E5BB5D3E96815___c_TypeDefinitionIndex = 76594;

class Class_1_9E4E5BB5D3E96815___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
	{
		return (::System::Action_3<::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E4E5BB5D3E96815___c_TypeDefinitionIndex)->GetStaticField(0x13F10);
	}
	static ::System::Action_3<::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E4E5BB5D3E96815___c_TypeDefinitionIndex)->GetStaticField(0x13F18);
	}
	static ::Class_1_9E4E5BB5D3E96815___c** StaticGet___9()
	{
		return (::Class_1_9E4E5BB5D3E96815___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E4E5BB5D3E96815___c_TypeDefinitionIndex)->GetStaticField(0x13F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployBorderPlat_b__5_0(::Class_1_9E4E5BB5D3E96815* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815___C___DEPLOYBORDERPLAT_B__5_0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __DeployBorderPlat_b__5_1(::Class_1_9E4E5BB5D3E96815* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4E5BB5D3E96815*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_9E4E5BB5D3E96815___C___DEPLOYBORDERPLAT_B__5_1_OFFSET))(this, a1, a2, a3);
	}
};
