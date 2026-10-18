#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

class Class_1_303D5A33D1401D59;
class Class_2_4346854BFC7E4C60;
class Class_2_5A5C70F7A3C39C00;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_93EBDAB477B18AF6_METHOD_2_16864485CBF1BA92_OFFSET UNITYSDK_OFFSET(0x15918E40)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_19EAFC76D20ADFAD_OFFSET UNITYSDK_OFFSET(0x15918960)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_414AF1692E6DB2F0_OFFSET UNITYSDK_OFFSET(0x15918490)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_5331F889BA7FD8F1_OFFSET UNITYSDK_OFFSET(0x159185C0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x15918B30)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x159191A0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x15918910)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_A68DA71D47C3BFD9_OFFSET UNITYSDK_OFFSET(0x15919060)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_AB7031FBF32F59B5_OFFSET UNITYSDK_OFFSET(0x15918A00)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15919110)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0x15918BB0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x15918CC0)
#define CLASS_2_93EBDAB477B18AF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x159192B0)
#define CLASS_2_93EBDAB477B18AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x15918480)

inline static constexpr unsigned int Class_2_93EBDAB477B18AF6_TypeDefinitionIndex = 73785;

class Class_2_93EBDAB477B18AF6 : public ::Class_1_8A6989C352B0F0F0
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JHLONDOPLHJ()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC70);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC78);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_LDPIEDCFCDN()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC80);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JNMHLKMAJEO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC88);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NPMIAKEAPPP()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC90);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NOONLPEIKBC()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CC98);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AHADPHDLBJK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CCA0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_IEOLEAGHOHE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CCA8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FGIMIFBCICH()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x5CCB0);
	}
	::Class_2_5A5C70F7A3C39C00* IHGJDKBPBHC; // 0x80
	::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x88
	::UnityEngine::Coroutine* JGGEBBFNILI; // 0x90
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x98
	::System::Int32 HKOPHLPDGBA; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6__CCTOR_OFFSET))();
	}

	::System::Void Method_2_414AF1692E6DB2F0(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::Class_1_303D5A33D1401D59* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_414AF1692E6DB2F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5331F889BA7FD8F1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_5331F889BA7FD8F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EAFC76D20ADFAD(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_19EAFC76D20ADFAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB7031FBF32F59B5(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_AB7031FBF32F59B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC53D0C0E999F7DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_BC53D0C0E999F7DD_OFFSET))(this);
	}

	::System::Void Method_2_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::System::Void Method_2_16864485CBF1BA92(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_16864485CBF1BA92_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A68DA71D47C3BFD9(::UnityEngine::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_A68DA71D47C3BFD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}
};
