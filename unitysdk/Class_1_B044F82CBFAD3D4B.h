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

#define CLASS_1_B044F82CBFAD3D4B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11438EF0)
#define CLASS_1_B044F82CBFAD3D4B_GET_KEY_OFFSET UNITYSDK_OFFSET(0x11438EE0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x1143DF90)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_16A5F3C78DDA767F_OFFSET UNITYSDK_OFFSET(0x1143C260)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1143E030)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1143B0F0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1143B270)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x1143A160)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x1143B370)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x1143A6B0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1143B650)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_59D3B9EE9A2BDE85_OFFSET UNITYSDK_OFFSET(0x1143A610)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_5BCEC94898149483_OFFSET UNITYSDK_OFFSET(0x1143BB10)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_5DDD89087575AF64_OFFSET UNITYSDK_OFFSET(0x1143D230)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_63CDC2FDD1DDFF94_OFFSET UNITYSDK_OFFSET(0x1143CFA0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x11439140)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1143AFB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_742F70E950BBF2A7_OFFSET UNITYSDK_OFFSET(0x1143D000)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1143D190)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_87716C1283ABF5F3_OFFSET UNITYSDK_OFFSET(0x1143C170)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8B9A5D574A36A436_OFFSET UNITYSDK_OFFSET(0x1143C770)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8D6313602D4CE699_OFFSET UNITYSDK_OFFSET(0x1143D0B0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8DB9EDEA3C4643DA_OFFSET UNITYSDK_OFFSET(0x1143BDF0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1143DF40)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_9A71B3DCCCF49869_OFFSET UNITYSDK_OFFSET(0x1143D6B0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0x1143B4F0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x1143D120)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1143B1F0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C2B11FE0C60F37C6_OFFSET UNITYSDK_OFFSET(0x1143BF60)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0x1143D1E0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D3B6A2C04C1A2515_OFFSET UNITYSDK_OFFSET(0x1143AD30)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D46478B237B9BCD5_OFFSET UNITYSDK_OFFSET(0x1143A750)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D708C9654B5799EF_OFFSET UNITYSDK_OFFSET(0x114391C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1143DBA0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_EDEF3EA029D39A77_OFFSET UNITYSDK_OFFSET(0x114394B0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F14D13251D03BB2D_OFFSET UNITYSDK_OFFSET(0x1143C4C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F4ABEA5567E8E9C8_OFFSET UNITYSDK_OFFSET(0x1143BC80)
#define CLASS_1_B044F82CBFAD3D4B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1143E090)
#define CLASS_1_B044F82CBFAD3D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1143A060)

inline static constexpr unsigned int Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex = 60424;

class Class_1_B044F82CBFAD3D4B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_40()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x106C0);
	}
	static ::System::Single* StaticGet_Field_1_39()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x106C4);
	}
	::Il2CppArray<::Class_1_929E979D9ED7139E*>* Field_1_11; // 0x10
	::UnityEngine::ComputeShader* Field_1_22; // 0x18
	::UnityEngine::ComputeBuffer* Field_1_18; // 0x20
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_35; // 0x28
	::UnityEngine::ComputeBuffer* Field_1_9; // 0x30
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_6; // 0x38
	::UnityEngine::RenderTexture* Field_1_21; // 0x40
	::Il2CppArray<::UnityEngine::Plane>* Field_1_34; // 0x48
	::System::Collections::Generic::List_1<::Class_1_37B963E08761B892*>* Field_1_3; // 0x50
	::UnityEngine::ComputeBuffer* Field_1_16; // 0x58
	::Il2CppArray<::System::UInt32>* Field_1_8; // 0x60
	::UnityEngine::RenderTexture* Field_1_20; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::Class_1_37B963E08761B892*>* Field_1_4; // 0x70
	::UnityEngine::ComputeBuffer* Field_1_10; // 0x78
	::UnityEngine::ComputeBuffer* Field_1_17; // 0x80
	::UnityEngine::ComputeBuffer* Field_1_15; // 0x88
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x90
	::UnityEngine::ComputeBuffer* Field_1_7; // 0x98
	::UnityEngine::ComputeBuffer* Field_1_19; // 0xA0
	::System::Int32 Field_1_2; // 0xA8
	::System::Int32 Field_1_28; // 0xAC
	::Unity::Collections::NativeArray_1<::System::UInt32> Field_1_13; // 0xB0
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_1_12; // 0xC0
	::System::Boolean Field_1_41; // 0xD0
	::System::Boolean Field_1_30; // 0xD1
	::System::Boolean Field_1_32; // 0xD2
	::System::Boolean Field_1_0; // 0xD3
	::System::Int32 Field_1_1; // 0xD4
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> Field_1_14; // 0xD8
	::System::Int32 Field_1_26; // 0xE8
	::System::Int32 Field_1_23; // 0xEC
	::System::Boolean Field_1_31; // 0xF0
	::System::Boolean Field_1_29; // 0xF1
	::System::Boolean Field_1_33; // 0xF2
	::System::Int32 Field_1_25; // 0xF4
	::UnityEngine::Vector3 Field_1_36; // 0xF8
	::System::Int32 Field_1_27; // 0x104
	::System::Int32 Field_1_24; // 0x108
	::UnityEngine::Quaternion Field_1_37; // 0x10C
	::UnityEngine::Matrix4x4 Field_1_38; // 0x11C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B__CTOR_OFFSET))(this);
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

	::System::Void Method_1_59D3B9EE9A2BDE85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_59D3B9EE9A2BDE85_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_361C06486F56B4E7_OFFSET))(this);
	}

	::System::Void Method_1_D46478B237B9BCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D46478B237B9BCD5_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
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

	::System::Void Method_1_16A5F3C78DDA767F(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_16A5F3C78DDA767F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3B6A2C04C1A2515(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D3B6A2C04C1A2515_OFFSET))(this, a1);
	}

	::System::Void Method_1_63CDC2FDD1DDFF94(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_63CDC2FDD1DDFF94_OFFSET))(this, a1);
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

	::Class_1_37B963E08761B892* Method_1_F14D13251D03BB2D(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
	{
		return ((::Class_1_37B963E08761B892*(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_F14D13251D03BB2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DDD89087575AF64(::Class_1_37B963E08761B892* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37B963E08761B892*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_5DDD89087575AF64_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A71B3DCCCF49869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_9A71B3DCCCF49869_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_A7836646989A4215_OFFSET))(this);
	}

	::System::Void Method_1_8B9A5D574A36A436(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_8B9A5D574A36A436_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDEF3EA029D39A77(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_EDEF3EA029D39A77_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_51BBA01F511E6107_OFFSET))(this);
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
};
