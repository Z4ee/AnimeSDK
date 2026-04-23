#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_7734F33592BF49F6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9CFDF8348B5C64D8_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x117C35C0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_1622EF55C818E85D_1_OFFSET UNITYSDK_OFFSET(0x117C3890)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x117C39C0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_33625085E5D6A31B_OFFSET UNITYSDK_OFFSET(0x117C35D0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_49C06B1CBEC6567D_OFFSET UNITYSDK_OFFSET(0x117C3AF0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x117C3300)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_1_OFFSET UNITYSDK_OFFSET(0x117C4A80)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_2_OFFSET UNITYSDK_OFFSET(0x117C4C70)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_3_OFFSET UNITYSDK_OFFSET(0x117C4E60)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_OFFSET UNITYSDK_OFFSET(0x117C4890)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x117C5050)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x117C4700)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_FBA4254EF4E174E5_OFFSET UNITYSDK_OFFSET(0x117C3DB0)
#define CLASS_2_9CFDF8348B5C64D8_ONINIT_OFFSET UNITYSDK_OFFSET(0x117C2A60)
#define CLASS_2_9CFDF8348B5C64D8_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x117C2F00)
#define CLASS_2_9CFDF8348B5C64D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x117C5070)
#define CLASS_2_9CFDF8348B5C64D8__CTOR_OFFSET UNITYSDK_OFFSET(0x117C5060)
#define CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x117C5120)
#define CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x117C5180)

inline static constexpr unsigned int Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex = 55585;

class Class_2_9CFDF8348B5C64D8 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_3()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x1D8F0);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_2_4()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x1D8F8);
	}
	// static const ::System::UInt32 Field_2_5 = 0x5C0224; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28
	::Struct_2_7734F33592BF49F6 Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Method_2_33625085E5D6A31B(::RPG::GameCore::GameEntity* a1, ::Struct_2_7734F33592BF49F6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_7734F33592BF49F6))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_33625085E5D6A31B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_49C06B1CBEC6567D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_49C06B1CBEC6567D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FBA4254EF4E174E5(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_FBA4254EF4E174E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_1622EF55C818E85D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_7F5A09121F2469EC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5A09121F2469EC_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5A09121F2469EC_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5A09121F2469EC_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_7F5A09121F2469EC_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
