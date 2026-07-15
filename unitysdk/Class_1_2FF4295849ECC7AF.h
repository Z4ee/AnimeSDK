#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_12E55A35B5C4C6D2;
class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2FF4295849ECC7AF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1922A9F0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x1922A5A0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0x1922A8E0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_2_OFFSET UNITYSDK_OFFSET(0x1922A930)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1922A890)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_0BD7CC6837894F9E_OFFSET UNITYSDK_OFFSET(0x192293C0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_1A61E12F310CD705_OFFSET UNITYSDK_OFFSET(0x1922A6A0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_1_OFFSET UNITYSDK_OFFSET(0x19229F80)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x19229940)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1922A7A0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_8A119D4FE51135C9_OFFSET UNITYSDK_OFFSET(0x1922A980)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x1922A740)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_F2209B1DE55F04B4_OFFSET UNITYSDK_OFFSET(0x19228B50)
#define CLASS_1_2FF4295849ECC7AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1922AA70)

inline static constexpr unsigned int Class_1_2FF4295849ECC7AF_TypeDefinitionIndex = 67071;

class Class_1_2FF4295849ECC7AF : public ::System::Object
{
public:
	::Class_1_12E55A35B5C4C6D2* Field_1_0; // 0x10
	::Class_1_929E979D9ED7139E* Field_1_1; // 0x18
	::Class_1_929E979D9ED7139E* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::Class_1_929E979D9ED7139E* Field_1_4; // 0x30
	::RPG::Client::LiteInstancedItem::ItemPrototype* Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x41
	::System::Boolean Field_1_8; // 0x42
	::RPG::Client::TSCRendererType Field_1_9; // 0x43
	::System::Boolean Field_1_10; // 0x44
	::System::Boolean Field_1_11; // 0x45
	::UnityEngine::Bounds Field_1_12; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2209B1DE55F04B4(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::RPG::Client::LiteInstancedItem::ItemPrototype* a4, ::RPG::Client::LiteInstancedItem::ItemPrototype* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::RPG::Client::TSCRendererType a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_F2209B1DE55F04B4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_0BD7CC6837894F9E(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::RPG::Client::TSCRendererType a6, ::Class_1_12E55A35B5C4C6D2* a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType, ::Class_1_12E55A35B5C4C6D2*))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_0BD7CC6837894F9E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_3D6722B9F8F20694_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_1_OFFSET))(this);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_B044F82CBFAD3D4B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B044F82CBFAD3D4B*&))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A61E12F310CD705(::Class_1_B044F82CBFAD3D4B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B044F82CBFAD3D4B*&))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_1A61E12F310CD705_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_1_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_2_OFFSET))(this);
	}

	::System::Boolean Method_1_8A119D4FE51135C9(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_8A119D4FE51135C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF4295849ECC7AF_CLEAR_OFFSET))(this);
	}
};
