#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_6939FF21E45A7B9B_METHOD_1_29C45725C8DCE07C_OFFSET UNITYSDK_OFFSET(0x13654540)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_2FF4D396BC4E6DE8_OFFSET UNITYSDK_OFFSET(0x13653D50)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_315283869A61559B_OFFSET UNITYSDK_OFFSET(0x13654700)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_32A57B7B2D691084_OFFSET UNITYSDK_OFFSET(0x13653440)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_3377B1A778CCC95C_OFFSET UNITYSDK_OFFSET(0x13654060)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_4722C48E850C0C9C_OFFSET UNITYSDK_OFFSET(0x13655CB0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_629C83E057C7EBB2_OFFSET UNITYSDK_OFFSET(0x13654890)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_669C471EFBF3C45A_OFFSET UNITYSDK_OFFSET(0x13654C40)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x136533B0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_7C75A22270BF01BA_OFFSET UNITYSDK_OFFSET(0x13655AC0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_8C732784F59411A5_OFFSET UNITYSDK_OFFSET(0x136554F0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_A877ADC7F8095EC5_OFFSET UNITYSDK_OFFSET(0x13653A00)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_AA5DA0C6FCD495DC_OFFSET UNITYSDK_OFFSET(0x136556C0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_B3372190FB5ACBCB_OFFSET UNITYSDK_OFFSET(0x13654A50)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_BDB6DE90C8A4DFC3_OFFSET UNITYSDK_OFFSET(0x13654200)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_BF9F3208798D0961_OFFSET UNITYSDK_OFFSET(0x13656290)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x13654380)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_DBC8416F0318D1A3_OFFSET UNITYSDK_OFFSET(0x13653660)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_F752216A742DD2F7_OFFSET UNITYSDK_OFFSET(0x13652FB0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_F938D1DC429043F0_OFFSET UNITYSDK_OFFSET(0x13654D00)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_FDF2914A7190BC26_OFFSET UNITYSDK_OFFSET(0x13652DB0)
#define CLASS_1_6939FF21E45A7B9B_METHOD_1_FF132966862E53FB_OFFSET UNITYSDK_OFFSET(0x13655140)
#define CLASS_1_6939FF21E45A7B9B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13652D60)

inline static constexpr unsigned int Class_1_6939FF21E45A7B9B_TypeDefinitionIndex = 81324;

class Class_1_6939FF21E45A7B9B : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6939FF21E45A7B9B_TypeDefinitionIndex)->GetStaticField(0x49040);
	}
	// static const ::System::Single Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_FDF2914A7190BC26(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_FDF2914A7190BC26_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_32A57B7B2D691084(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single& a9, ::System::Single& a10)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_32A57B7B2D691084_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::Il2CppArray<::UnityEngine::Plane>* Method_1_DBC8416F0318D1A3(::UnityEngine::Camera* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_DBC8416F0318D1A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A877ADC7F8095EC5(::Class_1_CB7F0487F7A6164A* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Single a8)
	{
		return ((::System::Boolean(*)(::Class_1_CB7F0487F7A6164A*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_A877ADC7F8095EC5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_BDB6DE90C8A4DFC3(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_BDB6DE90C8A4DFC3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_C4533278489E08D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_29C45725C8DCE07C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_29C45725C8DCE07C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_315283869A61559B(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_315283869A61559B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_629C83E057C7EBB2(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_629C83E057C7EBB2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B3372190FB5ACBCB(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_B3372190FB5ACBCB_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_3377B1A778CCC95C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_3377B1A778CCC95C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_F938D1DC429043F0(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_F938D1DC429043F0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FF132966862E53FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_FF132966862E53FB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8C732784F59411A5(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_8C732784F59411A5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_F752216A742DD2F7(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_F752216A742DD2F7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_7C75A22270BF01BA(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_7C75A22270BF01BA_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_2FF4D396BC4E6DE8(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_2FF4D396BC4E6DE8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_1_4722C48E850C0C9C(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Camera* a8)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_4722C48E850C0C9C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_669C471EFBF3C45A(::UnityEngine::Bounds a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_669C471EFBF3C45A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BF9F3208798D0961(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_BF9F3208798D0961_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_AA5DA0C6FCD495DC(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_1_6939FF21E45A7B9B_METHOD_1_AA5DA0C6FCD495DC_OFFSET))(a1);
	}
};
