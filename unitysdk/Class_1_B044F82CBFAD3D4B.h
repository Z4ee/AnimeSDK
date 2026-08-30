#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_37B963E08761B892;
class Class_1_929E979D9ED7139E;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_B044F82CBFAD3D4B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17CBFCA0)
#define CLASS_1_B044F82CBFAD3D4B_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17CBFC90)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x17CC22D0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x17CC5420)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x17CC1530)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17CC5520)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17CC54C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x17CC2740)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x17CC3550)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17CC2450)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_5BCEC94898149483_OFFSET UNITYSDK_OFFSET(0x17CC2E50)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x17CBFE80)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x17CC2190)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_742F70E950BBF2A7_OFFSET UNITYSDK_OFFSET(0x17CC4470)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_78FBED8F1829A87D_OFFSET UNITYSDK_OFFSET(0x17CC4410)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17CC4610)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x17CC5090)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_87716C1283ABF5F3_OFFSET UNITYSDK_OFFSET(0x17CC3470)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8D6313602D4CE699_OFFSET UNITYSDK_OFFSET(0x17CC4520)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8DB9EDEA3C4643DA_OFFSET UNITYSDK_OFFSET(0x17CC3110)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_923326AAAB7FEE1E_OFFSET UNITYSDK_OFFSET(0x17CC4AB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17CC53D0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0x17CC46B0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x17CC4590)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17CC23D0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B50BC205C61B0618_OFFSET UNITYSDK_OFFSET(0x17CC1F00)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x17CC0EE0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C2B11FE0C60F37C6_OFFSET UNITYSDK_OFFSET(0x17CC3270)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C84AC1D506AE73C8_OFFSET UNITYSDK_OFFSET(0x17CC28A0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x17CC4660)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x17CC2550)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D708C9654B5799EF_OFFSET UNITYSDK_OFFSET(0x17CBFF00)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x17CC16D0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_DFCFDE5A7E6EE4D0_OFFSET UNITYSDK_OFFSET(0x17CC3A30)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_EDEF3EA029D39A77_OFFSET UNITYSDK_OFFSET(0x17CC01F0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F4ABEA5567E8E9C8_OFFSET UNITYSDK_OFFSET(0x17CC2FB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F53FD57ABED33219_OFFSET UNITYSDK_OFFSET(0x17CC1600)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F73FD4F85B56D39C_OFFSET UNITYSDK_OFFSET(0x17CC3750)
#define CLASS_1_B044F82CBFAD3D4B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CC5530)
#define CLASS_1_B044F82CBFAD3D4B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CC1410)
#define CLASS_1_B044F82CBFAD3D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC0DD0)

inline static constexpr unsigned int Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex = 73604;

class Class_1_B044F82CBFAD3D4B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_FEFMIELKCIF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x141D0);
	}
	static ::System::Single* StaticGet_CJNBKHLKNLB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x141D4);
	}
	::UnityEngine::ComputeBuffer* JJJNPJEKIJC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_37B963E08761B892*>* EGMLIDBLHBC; // 0x18
	::UnityEngine::ComputeBuffer* HDLKFHBFIMP; // 0x20
	::Il2CppArray<::System::UInt32>* BMNACADOALP; // 0x28
	::UnityEngine::ComputeBuffer* CANLEJJHFLB; // 0x30
	::UnityEngine::ComputeBuffer* JMAFHECEMLM; // 0x38
	::UnityEngine::ComputeBuffer* BKHGMFPNHEP; // 0x40
	::UnityEngine::ComputeBuffer* LMGFDDLIEOC; // 0x48
	::UnityEngine::ComputeShader* KPAEGELHHGN; // 0x50
	::UnityEngine::RenderTexture* KOHFOKGFDGC; // 0x58
	::System::String* EIDNPHOGODK; // 0x60
	::Il2CppArray<::System::UInt32>* GODCEIKHPLF; // 0x68
	::Il2CppArray<::UnityEngine::Plane>* FIFAJNAGPGI; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::Class_1_37B963E08761B892*>* ANLAECLABEO; // 0x78
	::Il2CppArray<::Class_1_929E979D9ED7139E*>* CCECMIKFAME; // 0x80
	::UnityEngine::ComputeBuffer* JNGOJOFAANB; // 0x88
	::UnityEngine::ComputeBuffer* AAGICOCOAND; // 0x90
	::Il2CppArray<::UnityEngine::Vector4>* BGGMKGMCHDA; // 0x98
	::UnityEngine::RenderTexture* KCDEFIDFNMB; // 0xA0
	::Il2CppArray<::UnityEngine::Vector4>* JIFEBPMDCGN; // 0xA8
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> EFGGMOEMJEH; // 0xB0
	::System::Int32 OKPGILGHOIJ; // 0xC0
	::System::Int32 FLDELBDMDKL; // 0xC4
	::System::Int32 EBJKGILBDML; // 0xC8
	::System::Int32 EIOIIKONHLM; // 0xCC
	::System::Int32 JIENLAIMKBD; // 0xD0
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> JCPFEKHCHGI; // 0xD8
	::UnityEngine::Quaternion DIHINKIBJNL; // 0xE8
	::System::Boolean MNHAIJDCHMN; // 0xF8
	::System::Boolean LBMLKACIFPN; // 0xF9
	::System::Boolean AIIHABOJFEP; // 0xFA
	::System::Boolean LHOLLFDKIMO; // 0xFB
	::System::Int32 FDLEPKMIJJA; // 0xFC
	::UnityEngine::Vector3 NCFCNIGFCDK; // 0x100
	::System::Int32 KEDDFGADBIA; // 0x10C
	::System::Int32 NAGELHKPMLK; // 0x110
	::Unity::Collections::NativeArray_1<::System::UInt32> DMFFMEFMHHD; // 0x118
	::System::Int32 OPHONBBGLGI; // 0x128
	::System::Boolean CAKGIPPNJBC; // 0x12C
	::System::Boolean KCFMLIOCGCF; // 0x12D
	::System::Boolean NADCIIPNHNM; // 0x12E
	::System::Boolean FHMBDPHBEOH; // 0x12F
	::System::Boolean DOFJLCMOJML; // 0x130
	::System::Boolean DKDPAENPLGM; // 0x131
	::UnityEngine::Matrix4x4 GFKMOPACLIP; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B__CCTOR_OFFSET))();
	}

	::System::Int32 get_Key()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_GET_KEY_OFFSET))(this);
	}

	::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_F53FD57ABED33219()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_F53FD57ABED33219_OFFSET))(this);
	}

	::System::Void Method_1_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_1_5BCEC94898149483(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_5BCEC94898149483_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F4ABEA5567E8E9C8(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_F4ABEA5567E8E9C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8DB9EDEA3C4643DA(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_8DB9EDEA3C4643DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C2B11FE0C60F37C6(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_C2B11FE0C60F37C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_87716C1283ABF5F3(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_87716C1283ABF5F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2A38E69140BEF946(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_1_B50BC205C61B0618(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_B50BC205C61B0618_OFFSET))(this, a1);
	}

	::System::Void Method_1_78FBED8F1829A87D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_78FBED8F1829A87D_OFFSET))(this, a1);
	}

	::System::Void Method_1_742F70E950BBF2A7(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_742F70E950BBF2A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D6313602D4CE699(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_8D6313602D4CE699_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEAC9CDAE2EF9114(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET))(this, a1);
	}

	::Class_1_37B963E08761B892* Method_1_F73FD4F85B56D39C(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::Class_1_37B963E08761B892*(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_F73FD4F85B56D39C_OFFSET))(this, a1);
	}

	::System::Void Method_1_95D919A3FFE39CED(::Class_1_37B963E08761B892* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37B963E08761B892*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_95D919A3FFE39CED_OFFSET))(this, a1);
	}

	::System::Void Method_1_923326AAAB7FEE1E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_923326AAAB7FEE1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_265045B8E51327D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_265045B8E51327D0_OFFSET))(this);
	}

	::System::Void Method_1_DFCFDE5A7E6EE4D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_DFCFDE5A7E6EE4D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDEF3EA029D39A77(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_EDEF3EA029D39A77_OFFSET))(this, a1);
	}

	::System::Void Method_1_C84AC1D506AE73C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_C84AC1D506AE73C8_OFFSET))(this);
	}

	::System::Void Method_1_D708C9654B5799EF(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D708C9654B5799EF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
