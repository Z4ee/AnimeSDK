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

#define CLASS_2_93EBDAB477B18AF6_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x155FD9D0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_16864485CBF1BA92_OFFSET UNITYSDK_OFFSET(0x155FDF60)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_414AF1692E6DB2F0_OFFSET UNITYSDK_OFFSET(0x155FD550)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x155FE2D0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_5331F889BA7FD8F1_OFFSET UNITYSDK_OFFSET(0x155FD680)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x155FDC60)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x155FE3F0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_6E8BC8FE271F7F24_OFFSET UNITYSDK_OFFSET(0x155FDA20)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x155FDAC0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0x155FDCE0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_DD196EE56BD48FB7_OFFSET UNITYSDK_OFFSET(0x155FE180)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x155FDDE0)
#define CLASS_2_93EBDAB477B18AF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x155FE500)
#define CLASS_2_93EBDAB477B18AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x155FD540)

inline static constexpr unsigned int Class_2_93EBDAB477B18AF6_TypeDefinitionIndex = 73678;

class Class_2_93EBDAB477B18AF6 : public ::Class_1_8A6989C352B0F0F0
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_FGIMIFBCICH()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17240);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_IEOLEAGHOHE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17248);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JNMHLKMAJEO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17250);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17258);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JHLONDOPLHJ()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17260);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AHADPHDLBJK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17268);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_LDPIEDCFCDN()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17270);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NOONLPEIKBC()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17278);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_NPMIAKEAPPP()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x17280);
	}
	::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x80
	::UnityEngine::Coroutine* JGGEBBFNILI; // 0x88
	::Class_2_5A5C70F7A3C39C00* IHGJDKBPBHC; // 0x90
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

	::System::Void Method_2_6E8BC8FE271F7F24(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_6E8BC8FE271F7F24_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_4346854BFC7E4C60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4346854BFC7E4C60*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
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

	::System::Boolean Method_2_DD196EE56BD48FB7(::UnityEngine::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_DD196EE56BD48FB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
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
