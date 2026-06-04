#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_7734F33592BF49F6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9CFDF8348B5C64D8_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xACCFA20)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_18B9B03FE50F05CA_OFFSET UNITYSDK_OFFSET(0xACCFFB0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_33625085E5D6A31B_OFFSET UNITYSDK_OFFSET(0xACC19B0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_49C06B1CBEC6567D_OFFSET UNITYSDK_OFFSET(0xACCFCF0)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xACCF760)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_1_OFFSET UNITYSDK_OFFSET(0xACD0C60)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_2_OFFSET UNITYSDK_OFFSET(0xACD0E50)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_3_OFFSET UNITYSDK_OFFSET(0xACD1040)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_OFFSET UNITYSDK_OFFSET(0xACD0A70)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_1_OFFSET UNITYSDK_OFFSET(0xACCFA30)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xACCFB90)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xACD1230)
#define CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xACD08E0)
#define CLASS_2_9CFDF8348B5C64D8_ONINIT_OFFSET UNITYSDK_OFFSET(0xACCEE70)
#define CLASS_2_9CFDF8348B5C64D8_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xACCF340)
#define CLASS_2_9CFDF8348B5C64D8__CCTOR_OFFSET UNITYSDK_OFFSET(0xACD1250)
#define CLASS_2_9CFDF8348B5C64D8__CTOR_OFFSET UNITYSDK_OFFSET(0xACD1240)
#define CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xACD12D0)
#define CLASS_2_9CFDF8348B5C64D8___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xACD1330)

inline static constexpr unsigned int Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex = 56336;

class Class_2_9CFDF8348B5C64D8 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x19BF0);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9CFDF8348B5C64D8_TypeDefinitionIndex)->GetStaticField(0x19BF8);
	}
	// static const ::System::UInt32 Field_2_2 = 0x5C0224; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::Struct_2_7734F33592BF49F6 Field_2_4; // 0x28
	::RPG::GameCore::GameEntity* Field_2_5; // 0x30

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

	::System::Boolean Method_2_18B9B03FE50F05CA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_18B9B03FE50F05CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_9839DFE3C10E4654_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_8873623EF8C35C8A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8873623EF8C35C8A_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8873623EF8C35C8A_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8873623EF8C35C8A_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9CFDF8348B5C64D8_METHOD_2_8873623EF8C35C8A_3_OFFSET))(this, a1);
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
