#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_64CAD3999A9F2A59_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class GPUTransformLoopAnim; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define CLASS_3_64CAD3999A9F2A59_METHOD_3_0F34248AAA657354_OFFSET UNITYSDK_OFFSET(0x8AF1B00)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_251EC9672B282361_OFFSET UNITYSDK_OFFSET(0x8AEFD90)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_3B644D8D499AD0B3_OFFSET UNITYSDK_OFFSET(0x8AECA30)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_3C7CD48DEAD9DF15_OFFSET UNITYSDK_OFFSET(0x8AEFCF0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_4DE5ABBA5DD8133A_OFFSET UNITYSDK_OFFSET(0x8AF0E20)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8AF26E0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x8AF2740)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8AF2680)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_591751B175E01F00_OFFSET UNITYSDK_OFFSET(0x8AF1400)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x8AECE40)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_7A87C2D6F8682FDD_OFFSET UNITYSDK_OFFSET(0x8AF23B0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_81486D328AA07B3B_OFFSET UNITYSDK_OFFSET(0x8AEFD40)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x8AECB50)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8AEC8F0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_9B4F9A6EF59CF365_1_OFFSET UNITYSDK_OFFSET(0x8AEFC60)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_9B4F9A6EF59CF365_OFFSET UNITYSDK_OFFSET(0x8AF2320)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x8AECA70)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8AF19E0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8AEC980)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_CED05B83ACF06176_OFFSET UNITYSDK_OFFSET(0x8AF20A0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x8AEEF00)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_D1084D47C69FCA6D_OFFSET UNITYSDK_OFFSET(0x8AF1010)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_D35DC9E5BB9E3C7D_OFFSET UNITYSDK_OFFSET(0x8AEF0E0)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x8AF2260)
#define CLASS_3_64CAD3999A9F2A59_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x8AEE9E0)
#define CLASS_3_64CAD3999A9F2A59_TICK_OFFSET UNITYSDK_OFFSET(0x8AED1A0)
#define CLASS_3_64CAD3999A9F2A59__CCTOR_OFFSET UNITYSDK_OFFSET(0x8AF2660)
#define CLASS_3_64CAD3999A9F2A59__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF23E0)
#define CLASS_3_64CAD3999A9F2A59___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8AF27A0)

inline static constexpr unsigned int Class_3_64CAD3999A9F2A59_TypeDefinitionIndex = 57563;

class Class_3_64CAD3999A9F2A59 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::String** StaticGet_Field_3_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_64CAD3999A9F2A59_TypeDefinitionIndex)->GetStaticField(0x46A90);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_3_7()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_3_64CAD3999A9F2A59_TypeDefinitionIndex)->GetStaticField(0x46A98);
	}
	// static const ::System::Int32 Field_3_24 = 0xA; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::UnityEngine::Material*>* Field_3_22; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_3_21; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::Il2CppArray<::System::Single>*>* Field_3_23; // 0x48
	::UnityEngine::Quaternion Field_3_5; // 0x50
	::System::Boolean Field_3_2; // 0x60
	::System::Single Field_3_1; // 0x64
	::System::Int32 Field_3_9; // 0x68
	::System::Single Field_3_0; // 0x6C
	::UnityEngine::Vector3 Field_3_4; // 0x70
	::System::Int32 Field_3_12; // 0x7C
	::System::Int32 Field_3_17; // 0x80
	::System::Int32 Field_3_16; // 0x84
	::System::Int32 Field_3_10; // 0x88
	::System::Int32 Field_3_18; // 0x8C
	::System::Int32 Field_3_14; // 0x90
	::System::Int32 Field_3_15; // 0x94
	::System::Int32 Field_3_8; // 0x98
	::System::Int32 Field_3_20; // 0x9C
	::System::Int32 Field_3_19; // 0xA0
	::System::Int32 Field_3_11; // 0xA4
	::System::Int32 Field_3_13; // 0xA8
	::System::Single Field_3_3; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_3_D35DC9E5BB9E3C7D(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_D35DC9E5BB9E3C7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0F34248AAA657354(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_0F34248AAA657354_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_251EC9672B282361(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_251EC9672B282361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DE5ABBA5DD8133A(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_4DE5ABBA5DD8133A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D1084D47C69FCA6D(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_D1084D47C69FCA6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_591751B175E01F00(::Class_3_64CAD3999A9F2A59_AnimatedItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_591751B175E01F00_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_3_CED05B83ACF06176()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_CED05B83ACF06176_OFFSET))(this);
	}

	::System::Void Method_3_70CD9A040B4290BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_70CD9A040B4290BE_OFFSET))(this);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_3_9B4F9A6EF59CF365()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_9B4F9A6EF59CF365_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_3_9B4F9A6EF59CF365_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_9B4F9A6EF59CF365_1_OFFSET))(this);
	}

	::System::Void Method_3_81486D328AA07B3B(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_81486D328AA07B3B_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeShader* Method_3_7A87C2D6F8682FDD()
	{
		return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_7A87C2D6F8682FDD_OFFSET))(this);
	}

	::RPG::Client::BezierCurve* Method_3_3C7CD48DEAD9DF15()
	{
		return ((::RPG::Client::BezierCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_3C7CD48DEAD9DF15_OFFSET))(this);
	}

	::RPG::Client::GPUTransformLoopAnim* Method_3_3B644D8D499AD0B3()
	{
		return ((::RPG::Client::GPUTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_3B644D8D499AD0B3_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64CAD3999A9F2A59___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
