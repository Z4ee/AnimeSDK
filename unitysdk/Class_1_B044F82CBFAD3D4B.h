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

#define CLASS_1_B044F82CBFAD3D4B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA386BE0)
#define CLASS_1_B044F82CBFAD3D4B_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA386BD0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA388F50)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0xA38BEB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0xA3882E0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA38BF50)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0xA389360)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0xA3891E0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA3890E0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0xA387E30)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0xA38A0A0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_5BCEC94898149483_OFFSET UNITYSDK_OFFSET(0xA389980)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0xA386E30)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xA388E10)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_742F70E950BBF2A7_OFFSET UNITYSDK_OFFSET(0xA38AF20)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA38B0C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_87716C1283ABF5F3_OFFSET UNITYSDK_OFFSET(0xA389FB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8D6313602D4CE699_OFFSET UNITYSDK_OFFSET(0xA38AFD0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_8DB9EDEA3C4643DA_OFFSET UNITYSDK_OFFSET(0xA389C40)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA38BE60)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0xA38B160)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_9A71B3DCCCF49869_OFFSET UNITYSDK_OFFSET(0xA38B550)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_A64B44B34E8B8C74_OFFSET UNITYSDK_OFFSET(0xA38AEC0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0xA38B040)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA389060)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xA38BAC0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_B50BC205C61B0618_OFFSET UNITYSDK_OFFSET(0xA388B80)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C2B11FE0C60F37C6_OFFSET UNITYSDK_OFFSET(0xA389DB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_C84AC1D506AE73C8_OFFSET UNITYSDK_OFFSET(0xA3894C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0xA38B110)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D708C9654B5799EF_OFFSET UNITYSDK_OFFSET(0xA386EB0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0xA388480)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_DA98A755D87DE119_OFFSET UNITYSDK_OFFSET(0xA38A5C0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_EDEF3EA029D39A77_OFFSET UNITYSDK_OFFSET(0xA3871A0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F4ABEA5567E8E9C8_OFFSET UNITYSDK_OFFSET(0xA389AE0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F73FD4F85B56D39C_OFFSET UNITYSDK_OFFSET(0xA38A2E0)
#define CLASS_1_B044F82CBFAD3D4B_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xA3883B0)
#define CLASS_1_B044F82CBFAD3D4B__CCTOR_OFFSET UNITYSDK_OFFSET(0xA38BFB0)
#define CLASS_1_B044F82CBFAD3D4B__CTOR_OFFSET UNITYSDK_OFFSET(0xA387D30)

inline static constexpr unsigned int Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex = 68804;

class Class_1_B044F82CBFAD3D4B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x8410);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B044F82CBFAD3D4B_TypeDefinitionIndex)->GetStaticField(0x8414);
	}
	::Il2CppArray<::Class_1_929E979D9ED7139E*>* Field_1_2; // 0x10
	::UnityEngine::ComputeBuffer* Field_1_3; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_4; // 0x20
	::UnityEngine::RenderTexture* Field_1_5; // 0x28
	::UnityEngine::ComputeBuffer* Field_1_6; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x38
	::UnityEngine::RenderTexture* Field_1_8; // 0x40
	::UnityEngine::ComputeShader* Field_1_9; // 0x48
	::Il2CppArray<::System::UInt32>* Field_1_10; // 0x50
	::UnityEngine::ComputeBuffer* Field_1_11; // 0x58
	::UnityEngine::ComputeBuffer* Field_1_12; // 0x60
	::System::Collections::Generic::List_1<::Class_1_37B963E08761B892*>* Field_1_13; // 0x68
	::UnityEngine::ComputeBuffer* Field_1_14; // 0x70
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_15; // 0x78
	::UnityEngine::ComputeBuffer* Field_1_16; // 0x80
	::Il2CppArray<::UnityEngine::Plane>* Field_1_17; // 0x88
	::UnityEngine::ComputeBuffer* Field_1_18; // 0x90
	::UnityEngine::ComputeBuffer* Field_1_19; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::Class_1_37B963E08761B892*>* Field_1_20; // 0xA0
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_1_21; // 0xA8
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> Field_1_22; // 0xB8
	::UnityEngine::Vector3 Field_1_23; // 0xC8
	::System::Int32 Field_1_24; // 0xD4
	::System::Int32 Field_1_25; // 0xD8
	::System::Int32 Field_1_26; // 0xDC
	::UnityEngine::Quaternion Field_1_27; // 0xE0
	::System::Int32 Field_1_28; // 0xF0
	::System::Int32 Field_1_29; // 0xF4
	::System::Boolean Field_1_30; // 0xF8
	::System::Boolean Field_1_31; // 0xF9
	::System::Boolean Field_1_32; // 0xFA
	::System::Boolean Field_1_33; // 0xFB
	::System::Int32 Field_1_34; // 0xFC
	::System::Boolean Field_1_35; // 0x100
	::System::Boolean Field_1_36; // 0x101
	::System::Boolean Field_1_37; // 0x102
	::System::Int32 Field_1_38; // 0x104
	::UnityEngine::Matrix4x4 Field_1_39; // 0x108
	::Unity::Collections::NativeArray_1<::System::UInt32> Field_1_40; // 0x148
	::System::Int32 Field_1_41; // 0x158

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

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_361C06486F56B4E7_OFFSET))(this);
	}

	::System::Void Method_1_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_30B62F5CDB9079BD_OFFSET))(this);
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

	::System::Void Method_1_4CFA30FA85BD5218(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Void Method_1_B50BC205C61B0618(::Class_1_929E979D9ED7139E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_B50BC205C61B0618_OFFSET))(this, a1);
	}

	::System::Void Method_1_A64B44B34E8B8C74(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_A64B44B34E8B8C74_OFFSET))(this, a1);
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

	::System::Void Method_1_9A71B3DCCCF49869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_9A71B3DCCCF49869_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_B43C848B078B3C34_OFFSET))(this);
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

	::System::Void Method_1_DA98A755D87DE119(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B044F82CBFAD3D4B_METHOD_1_DA98A755D87DE119_OFFSET))(this, a1);
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
};
