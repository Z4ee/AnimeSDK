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

#define CLASS_2_93EBDAB477B18AF6_METHOD_2_16864485CBF1BA92_OFFSET UNITYSDK_OFFSET(0x1605B700)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_19EAFC76D20ADFAD_OFFSET UNITYSDK_OFFSET(0x1605B1B0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_414AF1692E6DB2F0_OFFSET UNITYSDK_OFFSET(0x1605ACE0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1605BA40)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_5331F889BA7FD8F1_OFFSET UNITYSDK_OFFSET(0x1605AE10)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1605B3F0)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1605BB30)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1605B160)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x1605B250)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_BC53D0C0E999F7DD_OFFSET UNITYSDK_OFFSET(0x1605B470)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_DCCDED35801234AE_OFFSET UNITYSDK_OFFSET(0x1605B920)
#define CLASS_2_93EBDAB477B18AF6_METHOD_2_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x1605B580)
#define CLASS_2_93EBDAB477B18AF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1605BC40)
#define CLASS_2_93EBDAB477B18AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1605ACD0)

inline static constexpr unsigned int Class_2_93EBDAB477B18AF6_TypeDefinitionIndex = 70405;

class Class_2_93EBDAB477B18AF6 : public ::Class_1_8A6989C352B0F0F0
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54370);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54378);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54380);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54388);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54390);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x54398);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_6()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x543A0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x543A8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_93EBDAB477B18AF6_TypeDefinitionIndex)->GetStaticField(0x543B0);
	}
	::Class_2_5A5C70F7A3C39C00* Field_2_9; // 0x80
	::UnityEngine::Coroutine* Field_2_10; // 0x88
	::RPG::GameCore::CharacterModelComponent* Field_2_11; // 0x90
	::RPG::GameCore::NPCComponent* Field_2_12; // 0x98
	::System::Int32 Field_2_13; // 0xA0

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

	::System::Boolean Method_2_DCCDED35801234AE(::UnityEngine::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_DCCDED35801234AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93EBDAB477B18AF6_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
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
