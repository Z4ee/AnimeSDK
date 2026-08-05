#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_F941ADF5879338E7_METHOD_1_0D5F6111F347601B_OFFSET UNITYSDK_OFFSET(0x1763DEB0)
#define CLASS_1_F941ADF5879338E7_METHOD_1_29C45725C8DCE07C_OFFSET UNITYSDK_OFFSET(0x17641280)
#define CLASS_1_F941ADF5879338E7_METHOD_1_2FF4D396BC4E6DE8_OFFSET UNITYSDK_OFFSET(0x1763EA40)
#define CLASS_1_F941ADF5879338E7_METHOD_1_315283869A61559B_OFFSET UNITYSDK_OFFSET(0x17641430)
#define CLASS_1_F941ADF5879338E7_METHOD_1_32A57B7B2D691084_OFFSET UNITYSDK_OFFSET(0x17641950)
#define CLASS_1_F941ADF5879338E7_METHOD_1_3377B1A778CCC95C_OFFSET UNITYSDK_OFFSET(0x1763F900)
#define CLASS_1_F941ADF5879338E7_METHOD_1_629C83E057C7EBB2_OFFSET UNITYSDK_OFFSET(0x17640B60)
#define CLASS_1_F941ADF5879338E7_METHOD_1_669C471EFBF3C45A_OFFSET UNITYSDK_OFFSET(0x1763E980)
#define CLASS_1_F941ADF5879338E7_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x176411F0)
#define CLASS_1_F941ADF5879338E7_METHOD_1_7C75A22270BF01BA_OFFSET UNITYSDK_OFFSET(0x1763EF10)
#define CLASS_1_F941ADF5879338E7_METHOD_1_A2854BF8BF76CA90_OFFSET UNITYSDK_OFFSET(0x17641D40)
#define CLASS_1_F941ADF5879338E7_METHOD_1_A877ADC7F8095EC5_OFFSET UNITYSDK_OFFSET(0x17640D20)
#define CLASS_1_F941ADF5879338E7_METHOD_1_AA5DA0C6FCD495DC_OFFSET UNITYSDK_OFFSET(0x1763F500)
#define CLASS_1_F941ADF5879338E7_METHOD_1_B3372190FB5ACBCB_OFFSET UNITYSDK_OFFSET(0x1763E790)
#define CLASS_1_F941ADF5879338E7_METHOD_1_BDB6DE90C8A4DFC3_OFFSET UNITYSDK_OFFSET(0x17641070)
#define CLASS_1_F941ADF5879338E7_METHOD_1_BF9F3208798D0961_OFFSET UNITYSDK_OFFSET(0x1763FE30)
#define CLASS_1_F941ADF5879338E7_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x1763ED50)
#define CLASS_1_F941ADF5879338E7_METHOD_1_C6964AAFE279F437_OFFSET UNITYSDK_OFFSET(0x17640720)
#define CLASS_1_F941ADF5879338E7_METHOD_1_DBC8416F0318D1A3_OFFSET UNITYSDK_OFFSET(0x1763FA90)
#define CLASS_1_F941ADF5879338E7_METHOD_1_E2F435BC0F7E7BDE_OFFSET UNITYSDK_OFFSET(0x17641B70)
#define CLASS_1_F941ADF5879338E7_METHOD_1_E5EA60BDA690B371_OFFSET UNITYSDK_OFFSET(0x17640530)
#define CLASS_1_F941ADF5879338E7_METHOD_1_F752216A742DD2F7_OFFSET UNITYSDK_OFFSET(0x1763F100)
#define CLASS_1_F941ADF5879338E7_METHOD_1_FFEDA496458C7872_OFFSET UNITYSDK_OFFSET(0x176415B0)
#define CLASS_1_F941ADF5879338E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1763DE40)

inline static constexpr unsigned int Class_1_F941ADF5879338E7_TypeDefinitionIndex = 70833;

class Class_1_F941ADF5879338E7 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F941ADF5879338E7_TypeDefinitionIndex)->GetStaticField(0x503F0);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F941ADF5879338E7_TypeDefinitionIndex)->GetStaticField(0x503F8);
	}
	// static const ::System::Single Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_0D5F6111F347601B(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Collider* a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_0D5F6111F347601B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_B3372190FB5ACBCB(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_B3372190FB5ACBCB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_C4533278489E08D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2FF4D396BC4E6DE8(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_2FF4D396BC4E6DE8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_7C75A22270BF01BA(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_7C75A22270BF01BA_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_F752216A742DD2F7(::Class_3_C93CC3D2C2AC4067* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::Class_3_C93CC3D2C2AC4067*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_F752216A742DD2F7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Il2CppArray<::UnityEngine::Plane>* Method_1_DBC8416F0318D1A3(::UnityEngine::Camera* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_DBC8416F0318D1A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_669C471EFBF3C45A(::UnityEngine::Bounds a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_669C471EFBF3C45A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BF9F3208798D0961(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_BF9F3208798D0961_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_AA5DA0C6FCD495DC(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_AA5DA0C6FCD495DC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E5EA60BDA690B371(::Class_3_C93CC3D2C2AC4067* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_E5EA60BDA690B371_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C6964AAFE279F437(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_C6964AAFE279F437_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_629C83E057C7EBB2(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_629C83E057C7EBB2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A877ADC7F8095EC5(::Class_1_CB7F0487F7A6164A* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Single a8)
	{
		return ((::System::Boolean(*)(::Class_1_CB7F0487F7A6164A*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_A877ADC7F8095EC5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_BDB6DE90C8A4DFC3(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_BDB6DE90C8A4DFC3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_29C45725C8DCE07C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_29C45725C8DCE07C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_315283869A61559B(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_315283869A61559B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FFEDA496458C7872(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_FFEDA496458C7872_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3377B1A778CCC95C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_3377B1A778CCC95C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_32A57B7B2D691084(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single& a9, ::System::Single& a10)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_32A57B7B2D691084_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Boolean Method_1_E2F435BC0F7E7BDE(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_E2F435BC0F7E7BDE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_1_A2854BF8BF76CA90(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Camera* a8)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_F941ADF5879338E7_METHOD_1_A2854BF8BF76CA90_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
