#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

class Class_1_303D5A33D1401D59;
class Class_2_5A5C70F7A3C39C00;
class Class_2_DD25755736E2A226;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_AC6177BB923EC39C_METHOD_2_0B2919E058A9598D_OFFSET UNITYSDK_OFFSET(0x8C46040)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x8C461C0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x8C45F40)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x8C46950)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x8C466A0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8C465B0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8C469F0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C468D0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_5ED2C86F390A7736_OFFSET UNITYSDK_OFFSET(0x8C468B0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x8C45EC0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_640048A88EA79020_OFFSET UNITYSDK_OFFSET(0x8C457B0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_7A485AB959E514AC_OFFSET UNITYSDK_OFFSET(0x8C45C80)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_7C9583C124B8FFB6_OFFSET UNITYSDK_OFFSET(0x8C468C0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_8195D7842BCE55BD_OFFSET UNITYSDK_OFFSET(0x8C468A0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_A497DC104C617186_OFFSET UNITYSDK_OFFSET(0x8C458D0)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x8C45C30)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x8C45D20)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_C470F05247FE0DE7_OFFSET UNITYSDK_OFFSET(0x8C46930)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x8C46A60)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_DCCDED35801234AE_OFFSET UNITYSDK_OFFSET(0x8C46490)
#define CLASS_2_AC6177BB923EC39C_METHOD_2_FF2E2285D5FE9825_OFFSET UNITYSDK_OFFSET(0x8C46940)
#define CLASS_2_AC6177BB923EC39C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C46860)
#define CLASS_2_AC6177BB923EC39C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C457A0)

inline static constexpr unsigned int Class_2_AC6177BB923EC39C_TypeDefinitionIndex = 60487;

class Class_2_AC6177BB923EC39C : public ::Class_1_8A6989C352B0F0F0
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_12()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A40);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_11()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A48);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_9()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_13()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A58);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A60);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A68);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A70);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_10()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A78);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_6()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AC6177BB923EC39C_TypeDefinitionIndex)->GetStaticField(0x48A80);
	}
	::RPG::GameCore::CharacterModelComponent* Field_2_3; // 0x80
	::Class_2_5A5C70F7A3C39C00* Field_2_0; // 0x88
	::RPG::GameCore::NPCComponent* Field_2_4; // 0x90
	::UnityEngine::Coroutine* Field_2_1; // 0x98
	::System::Int32 Field_2_2; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_640048A88EA79020(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::Class_1_303D5A33D1401D59* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_640048A88EA79020_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A497DC104C617186(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_A497DC104C617186_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A485AB959E514AC(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_7A485AB959E514AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_DD25755736E2A226* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_3E6AC14EE28F55D4_OFFSET))(this);
	}

	::System::Void Method_2_0B2919E058A9598D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_0B2919E058A9598D_OFFSET))(this, a1);
	}

	::System::Void Method_2_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DCCDED35801234AE(::UnityEngine::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_DCCDED35801234AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_8195D7842BCE55BD(::RPG::Client::OpenWorld::StreamingItemData* P0, ::UnityEngine::GameObject* P1, ::Class_1_303D5A33D1401D59* P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_8195D7842BCE55BD_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_5ED2C86F390A7736(::Class_2_DD25755736E2A226* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_5ED2C86F390A7736_OFFSET))(this, P0);
	}

	::System::Void Method_2_7C9583C124B8FFB6(::Class_2_DD25755736E2A226* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DD25755736E2A226*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_7C9583C124B8FFB6_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C470F05247FE0DE7(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_C470F05247FE0DE7_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_FF2E2285D5FE9825(::UnityEngine::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_FF2E2285D5FE9825_OFFSET))(this, P0);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC6177BB923EC39C_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
