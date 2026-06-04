#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B3D9F954008EA010_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class GPUTransformLoopAnim; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define CLASS_3_B3D9F954008EA010_METHOD_3_026849FDEA98D0B8_OFFSET UNITYSDK_OFFSET(0x144A6110)
#define CLASS_3_B3D9F954008EA010_METHOD_3_14BDD24F22D503AA_OFFSET UNITYSDK_OFFSET(0x144A2F50)
#define CLASS_3_B3D9F954008EA010_METHOD_3_1EC324817B5AAB5F_OFFSET UNITYSDK_OFFSET(0x144A8870)
#define CLASS_3_B3D9F954008EA010_METHOD_3_237626C13073E6E0_OFFSET UNITYSDK_OFFSET(0x144A60C0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_3C26DE05EC60CE44_OFFSET UNITYSDK_OFFSET(0x144A5450)
#define CLASS_3_B3D9F954008EA010_METHOD_3_4DE5ABBA5DD8133A_OFFSET UNITYSDK_OFFSET(0x144A7680)
#define CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x144A8ED0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x144A8F30)
#define CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x144A8E70)
#define CLASS_3_B3D9F954008EA010_METHOD_3_591751B175E01F00_OFFSET UNITYSDK_OFFSET(0x144A7BB0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x144A3390)
#define CLASS_3_B3D9F954008EA010_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x144A4D00)
#define CLASS_3_B3D9F954008EA010_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x144A2DE0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_A04B18EB6769C243_OFFSET UNITYSDK_OFFSET(0x144A6060)
#define CLASS_3_B3D9F954008EA010_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x144A8180)
#define CLASS_3_B3D9F954008EA010_METHOD_3_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x144A5260)
#define CLASS_3_B3D9F954008EA010_METHOD_3_C83BAFFE7773B1E6_OFFSET UNITYSDK_OFFSET(0x144A6070)
#define CLASS_3_B3D9F954008EA010_METHOD_3_CAA16B0E09F56EC2_OFFSET UNITYSDK_OFFSET(0x144A8B80)
#define CLASS_3_B3D9F954008EA010_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x144A2F90)
#define CLASS_3_B3D9F954008EA010_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x144A2E70)
#define CLASS_3_B3D9F954008EA010_METHOD_3_D4F01E5F6E07411B_OFFSET UNITYSDK_OFFSET(0x144A82A0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x144A8A30)
#define CLASS_3_B3D9F954008EA010_METHOD_3_E89092F06000404A_OFFSET UNITYSDK_OFFSET(0x144A8AF0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x144A30A0)
#define CLASS_3_B3D9F954008EA010_METHOD_3_F3DD04EBF5C76BDB_OFFSET UNITYSDK_OFFSET(0x144A7860)
#define CLASS_3_B3D9F954008EA010_TICK_OFFSET UNITYSDK_OFFSET(0x144A3730)
#define CLASS_3_B3D9F954008EA010__CCTOR_OFFSET UNITYSDK_OFFSET(0x144A8E50)
#define CLASS_3_B3D9F954008EA010__CTOR_OFFSET UNITYSDK_OFFSET(0x144A8BE0)
#define CLASS_3_B3D9F954008EA010___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x144A8F90)

inline static constexpr unsigned int Class_3_B3D9F954008EA010_TypeDefinitionIndex = 65752;

class Class_3_B3D9F954008EA010 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::UnityEngine::ComputeShader** StaticGet_Field_3_0()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3D9F954008EA010_TypeDefinitionIndex)->GetStaticField(0x457E0);
	}
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3D9F954008EA010_TypeDefinitionIndex)->GetStaticField(0x457E8);
	}
	// static const ::System::Int32 Field_3_2 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::Il2CppArray<::System::Single>*>* Field_3_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_3_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_3_B3D9F954008EA010_AnimatedItem*, ::UnityEngine::Material*>* Field_3_5; // 0x48
	::System::Int32 Field_3_6; // 0x50
	::System::Int32 Field_3_7; // 0x54
	::System::Int32 Field_3_8; // 0x58
	::UnityEngine::Vector3 Field_3_9; // 0x5C
	::System::Int32 Field_3_10; // 0x68
	::System::Int32 Field_3_11; // 0x6C
	::System::Single Field_3_12; // 0x70
	::System::Single Field_3_13; // 0x74
	::System::Int32 Field_3_14; // 0x78
	::System::Int32 Field_3_15; // 0x7C
	::System::Int32 Field_3_16; // 0x80
	::System::Int32 Field_3_17; // 0x84
	::UnityEngine::Quaternion Field_3_18; // 0x88
	::System::Single Field_3_19; // 0x98
	::System::Int32 Field_3_20; // 0x9C
	::System::Int32 Field_3_21; // 0xA0
	::System::Int32 Field_3_22; // 0xA4
	::System::Boolean Field_3_23; // 0xA8
	::System::Int32 Field_3_24; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_3_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C26DE05EC60CE44(::Class_3_B3D9F954008EA010_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_3C26DE05EC60CE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D4F01E5F6E07411B(::Class_3_B3D9F954008EA010_AnimatedItem* a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_D4F01E5F6E07411B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_026849FDEA98D0B8(::Class_3_B3D9F954008EA010_AnimatedItem* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_026849FDEA98D0B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DE5ABBA5DD8133A(::Class_3_B3D9F954008EA010_AnimatedItem* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_4DE5ABBA5DD8133A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F3DD04EBF5C76BDB(::Class_3_B3D9F954008EA010_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_F3DD04EBF5C76BDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_591751B175E01F00(::Class_3_B3D9F954008EA010_AnimatedItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B3D9F954008EA010_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_591751B175E01F00_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_3_1EC324817B5AAB5F()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_1EC324817B5AAB5F_OFFSET))(this);
	}

	::System::Void Method_3_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_3_E89092F06000404A()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_E89092F06000404A_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_3_A04B18EB6769C243()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_A04B18EB6769C243_OFFSET))(this);
	}

	::System::Void Method_3_237626C13073E6E0(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_237626C13073E6E0_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeShader* Method_3_CAA16B0E09F56EC2()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_CAA16B0E09F56EC2_OFFSET))(this);
	}

	::RPG::Client::BezierCurve* Method_3_C83BAFFE7773B1E6()
	{
		return ((::RPG::Client::BezierCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_C83BAFFE7773B1E6_OFFSET))(this);
	}

	::RPG::Client::GPUTransformLoopAnim* Method_3_14BDD24F22D503AA()
	{
		return ((::RPG::Client::GPUTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_14BDD24F22D503AA_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
