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

#define CLASS_1_2FF4295849ECC7AF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7ADBD0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x1A7AD780)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0x1A7ADAC0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_2_OFFSET UNITYSDK_OFFSET(0x1A7ADB10)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A7ADA70)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_0BD7CC6837894F9E_OFFSET UNITYSDK_OFFSET(0x1A7AC5B0)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_1A61E12F310CD705_OFFSET UNITYSDK_OFFSET(0x1A7AD880)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_1_OFFSET UNITYSDK_OFFSET(0x1A7AD160)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x1A7ACB20)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1A7AD980)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_8A119D4FE51135C9_OFFSET UNITYSDK_OFFSET(0x1A7ADB60)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x1A7AD920)
#define CLASS_1_2FF4295849ECC7AF_METHOD_1_F2209B1DE55F04B4_OFFSET UNITYSDK_OFFSET(0x1A7ABD40)
#define CLASS_1_2FF4295849ECC7AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ADC50)

inline static constexpr unsigned int Class_1_2FF4295849ECC7AF_TypeDefinitionIndex = 70178;

class Class_1_2FF4295849ECC7AF : public ::System::Object
{
public:
	::RPG::Client::LiteInstancedItem::ItemPrototype* FFECDIEBKJH; // 0x10
	::Class_1_929E979D9ED7139E* OLBMACDBDPC; // 0x18
	::Class_1_929E979D9ED7139E* CAHONFNCONC; // 0x20
	::Class_1_929E979D9ED7139E* PPJKBONIABJ; // 0x28
	::UnityEngine::Transform* KJMDDAHEODL; // 0x30
	::Class_1_12E55A35B5C4C6D2* LMNCOBDAPHL; // 0x38
	::System::Boolean NKDAHLGNOKN; // 0x40
	::System::Boolean FOCFICKFCMJ; // 0x41
	::System::Boolean MFOJNFDGDJA; // 0x42
	::System::Boolean BAMIONIJIMG; // 0x43
	::UnityEngine::Bounds AFFLPJCLPMG; // 0x44
	::RPG::Client::TSCRendererType MEPFOEEGBEA; // 0x5C
	::System::Boolean JOFBHPJNEPM; // 0x5D

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
