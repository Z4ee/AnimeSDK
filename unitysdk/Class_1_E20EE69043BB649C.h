#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CircleDetectDirection.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E20EE69043BB649C_METHOD_1_1CAEDEB68F114189_OFFSET UNITYSDK_OFFSET(0xCB252A0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_1F1C1F1F50A906FF_OFFSET UNITYSDK_OFFSET(0xCB281E0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_2E88F70CA3AE424E_OFFSET UNITYSDK_OFFSET(0xCB22210)
#define CLASS_1_E20EE69043BB649C_METHOD_1_4652B2D879462077_OFFSET UNITYSDK_OFFSET(0xCB21610)
#define CLASS_1_E20EE69043BB649C_METHOD_1_54D2D558A703EF66_OFFSET UNITYSDK_OFFSET(0xCB296B0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_70E9F8DB85996A10_OFFSET UNITYSDK_OFFSET(0xCB23EC0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_7119D9EB802FFC00_OFFSET UNITYSDK_OFFSET(0xCB27690)
#define CLASS_1_E20EE69043BB649C_METHOD_1_79F737074846C64A_OFFSET UNITYSDK_OFFSET(0xCB20FC0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_93BA819C7130816E_OFFSET UNITYSDK_OFFSET(0xCB23C20)
#define CLASS_1_E20EE69043BB649C_METHOD_1_A3718CE27D607E4B_OFFSET UNITYSDK_OFFSET(0xCB286A0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_A3BA35F7DAF2C5AF_OFFSET UNITYSDK_OFFSET(0xCB278C0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_A80F841A9C4A2DE6_OFFSET UNITYSDK_OFFSET(0xCB2A1D0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCB20F20)
#define CLASS_1_E20EE69043BB649C_METHOD_1_B55AC9BA810D4083_OFFSET UNITYSDK_OFFSET(0xCB24210)
#define CLASS_1_E20EE69043BB649C_METHOD_1_C74ABAA839F8A4A8_OFFSET UNITYSDK_OFFSET(0xCB27570)
#define CLASS_1_E20EE69043BB649C_METHOD_1_D59A47D9EE530684_OFFSET UNITYSDK_OFFSET(0xCB211D0)
#define CLASS_1_E20EE69043BB649C_METHOD_1_E2D22F85E3AC86EB_OFFSET UNITYSDK_OFFSET(0xCB26F80)
#define CLASS_1_E20EE69043BB649C_METHOD_1_F1B9A7319C3617C0_OFFSET UNITYSDK_OFFSET(0xCB29E10)
#define CLASS_1_E20EE69043BB649C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB2A440)

inline static constexpr unsigned int Class_1_E20EE69043BB649C_TypeDefinitionIndex = 58251;

class Class_1_E20EE69043BB649C : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x45690);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x45698);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x456A0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x456A8);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x456B0);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_4()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x11E60);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x11E90);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_9()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x11E94);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_8()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E20EE69043BB649C_TypeDefinitionIndex)->GetStaticField(0x11EC4);
	}
	// static const ::System::Int32 Field_1_0 = 0x64; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::System::Boolean Method_1_79F737074846C64A(::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Collider* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_79F737074846C64A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D59A47D9EE530684(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* a4, ::System::Boolean a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_D59A47D9EE530684_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Nullable_1<::Struct_2_591DD46947F040CB> Method_1_4652B2D879462077(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::Client::CircleDetectDirection a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Nullable_1<::Struct_2_591DD46947F040CB>(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::CircleDetectDirection, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_4652B2D879462077_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_2E88F70CA3AE424E(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::System::Boolean a7)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_2E88F70CA3AE424E_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_B55AC9BA810D4083(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_B55AC9BA810D4083_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_1CAEDEB68F114189(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::LayerMask a7)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_1CAEDEB68F114189_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_E2D22F85E3AC86EB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_E2D22F85E3AC86EB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_C74ABAA839F8A4A8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_C74ABAA839F8A4A8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_7119D9EB802FFC00(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_7119D9EB802FFC00_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_A3BA35F7DAF2C5AF(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_A3BA35F7DAF2C5AF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Nullable_1<::Struct_2_591DD46947F040CB> Method_1_1F1C1F1F50A906FF(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3)
	{
		return ((::System::Nullable_1<::Struct_2_591DD46947F040CB>(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_1F1C1F1F50A906FF_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>* Method_1_A3718CE27D607E4B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::LayerMask a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_591DD46947F040CB>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::LayerMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_A3718CE27D607E4B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Nullable_1<::Struct_2_591DD46947F040CB> Method_1_54D2D558A703EF66(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4, ::System::Boolean a5)
	{
		return ((::System::Nullable_1<::Struct_2_591DD46947F040CB>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_54D2D558A703EF66_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Il2CppArray<::System::Int32>* Method_1_70E9F8DB85996A10(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_70E9F8DB85996A10_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_93BA819C7130816E(::UnityEngine::Vector3 a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_93BA819C7130816E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_F1B9A7319C3617C0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_F1B9A7319C3617C0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_A80F841A9C4A2DE6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_E20EE69043BB649C_METHOD_1_A80F841A9C4A2DE6_OFFSET))(a1, a2, a3, a4, a5);
	}
};
