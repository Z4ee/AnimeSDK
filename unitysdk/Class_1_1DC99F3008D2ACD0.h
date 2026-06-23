#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A.h"
#include "unitysdk/Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_1DC99F3008D2ACD0_Class_1_06BCBCF9B6484C35;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET UNITYSDK_OFFSET(0x123BB4A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET UNITYSDK_OFFSET(0x123BB500)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x123BC2F0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x123BC1A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_1C52691E127599C6_OFFSET UNITYSDK_OFFSET(0x123BD670)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET UNITYSDK_OFFSET(0x123BB560)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET UNITYSDK_OFFSET(0x123BB260)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET UNITYSDK_OFFSET(0x123BCDF0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET UNITYSDK_OFFSET(0x123BB8B0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x123BCEF0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_4B485659DA2F323A_OFFSET UNITYSDK_OFFSET(0x123BB570)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET UNITYSDK_OFFSET(0x123BC190)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET UNITYSDK_OFFSET(0x123BB250)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET UNITYSDK_OFFSET(0x123BCDE0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x123BB980)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x123BE2C0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET UNITYSDK_OFFSET(0x123BC240)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x123BB1A0)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET UNITYSDK_OFFSET(0x123BC410)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123BC210)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET UNITYSDK_OFFSET(0x123BB270)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET UNITYSDK_OFFSET(0x123BCF60)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x123BC960)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET UNITYSDK_OFFSET(0x123BCF50)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_FC6436903651CB06_OFFSET UNITYSDK_OFFSET(0x123BE330)
#define CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x123BB110)
#define CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x123BB000)
#define CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET UNITYSDK_OFFSET(0x123BA950)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex = 43104;

class Class_1_1DC99F3008D2ACD0 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE240);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE244);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE248);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE24C);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE250);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE254);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE258);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE25C);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE260);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE264);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE268);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC99F3008D2ACD0_TypeDefinitionIndex)->GetStaticField(0xE26C);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::UnityEngine::Mesh* Field_1_36; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_19; // 0x18
	::UnityEngine::ComputeBuffer* Field_1_30; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_15; // 0x28
	::UnityEngine::Rendering::CommandBuffer* Field_1_34; // 0x30
	::UnityEngine::ComputeBuffer* Field_1_35; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_24; // 0x40
	::Il2CppArray<::System::UInt32>* Field_1_38; // 0x48
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_E81A211B6662113C_1>* Field_1_16; // 0x50
	::UnityEngine::ComputeBuffer* Field_1_37; // 0x58
	::UnityEngine::ComputeBuffer* Field_1_29; // 0x60
	::System::Collections::Generic::List_1<::Class_1_1DC99F3008D2ACD0_Struct_2_B94BC0827717B30A>* Field_1_23; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::MonoDynamicObjectVoxel*, ::System::Int32>* Field_1_25; // 0x70
	::UnityEngine::ComputeBuffer* Field_1_26; // 0x78
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_22; // 0x80
	::UnityEngine::ComputeShader* Field_1_31; // 0x88
	::Class_1_1DC99F3008D2ACD0_Class_1_06BCBCF9B6484C35* Field_1_13; // 0x90
	::UnityEngine::ComputeBuffer* Field_1_28; // 0x98
	::Class_1_1DC99F3008D2ACD0_Class_1_06BCBCF9B6484C35* Field_1_14; // 0xA0
	::Cysharp::Threading::Tasks::UniTask Field_1_17; // 0xA8
	::UnityEngine::ComputeBuffer* Field_1_27; // 0xB8
	::System::Int32 Field_1_33; // 0xC0
	::System::Boolean Field_1_18; // 0xC4
	::System::Boolean Field_1_39; // 0xC5
	::System::Boolean Field_1_40; // 0xC6
	::UnityEngine::Vector3 Field_1_20; // 0xC8
	::UnityEngine::Vector3 Field_1_21; // 0xD4
	::System::Int32 Field_1_32; // 0xE0

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::ComputeShader* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_OFFSET))(this);
	}

	::System::Void Method_1_2EC46FA4229F9341(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D65B70E08ED7E38A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D65B70E08ED7E38A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2EC46FA4229F9341_1(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_2EC46FA4229F9341_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B485659DA2F323A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_4B485659DA2F323A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* Method_1_50DD3D69824E112C_1()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_50DD3D69824E112C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3F270119FDAA4E2D(::UnityEngine::Vector3Int a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3F270119FDAA4E2D_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9C3D8ED2211D368B_1(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9C3D8ED2211D368B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_9CD144BB0A106E3F(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9CD144BB0A106E3F_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_OFFSET))(a1, a2);
	}

	::UnityEngine::Mesh* Method_1_55B5469E48145079()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_55B5469E48145079_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_3D4CEC1B38D5DF24(::UnityEngine::Vector3Int a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3Int, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_3D4CEC1B38D5DF24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_F0C8024E35DC873C(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_F0C8024E35DC873C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77C7F36877B6EE1(::MoleMole::MonoDynamicObjectVoxel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_D77C7F36877B6EE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C52691E127599C6(::Class_1_1DC99F3008D2ACD0_Class_1_06BCBCF9B6484C35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC99F3008D2ACD0_Class_1_06BCBCF9B6484C35*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_1C52691E127599C6_OFFSET))(this, a1);
	}

	static ::MoleMole::Vector2Int Method_1_0A184EE642E607E1_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Vector2Int(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_0A184EE642E607E1_1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_FC6436903651CB06(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_METHOD_1_FC6436903651CB06_OFFSET))(this, a1, a2, a3);
	}
};
