#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_0_16E4307DCC419505_971;
namespace RPG::Client { class DialogRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xB7467A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xB746800)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1AE11C3424D3DD6A_OFFSET UNITYSDK_OFFSET(0xB748AC0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0xB745B60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3EBE5A8F310A42D3_OFFSET UNITYSDK_OFFSET(0xB747840)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB744140)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xB7448A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xB746880)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_1_OFFSET UNITYSDK_OFFSET(0xB747750)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET UNITYSDK_OFFSET(0xB746FD0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB74ABE0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xB74AC40)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xB74ACA0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xB74AD00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xB74AD60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB74AB80)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5FCE1CDDAE90A8B2_OFFSET UNITYSDK_OFFSET(0xB748D90)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_78110CB57EA2D55A_OFFSET UNITYSDK_OFFSET(0xB747B90)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0xB746700)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0xB7462E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_9B994748933F0708_OFFSET UNITYSDK_OFFSET(0xB749D70)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_1_OFFSET UNITYSDK_OFFSET(0xB746680)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0xB7441B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB746760)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xB744320)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET UNITYSDK_OFFSET(0xB747060)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xB744210)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xB746330)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F3A4A12640955A20_OFFSET UNITYSDK_OFFSET(0xB747330)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F82B4FC81CECCDB8_OFFSET UNITYSDK_OFFSET(0xB74A0C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB74A620)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB74A610)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xB74ADC0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 65716;

	class DialogRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__DialogShaders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25D0);
		}
		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25D4);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25D8);
		}
		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25DC);
		}
		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25E0);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25E4);
		}
		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25E8);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25EC);
		}
		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25F0);
		}
		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25F4);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25F8);
		}
		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x25FC);
		}
		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x2604);
		}
		::UnityEngine::Transform* _OwnerTransform; // 0x38
		::UnityEngine::Transform* _DialogCameraTransform; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::UnityEngine::Transform* _MainCameraTransform; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* _DialogTargetRenderers; // 0x58
		::Il2CppArray<::Class_0_16E4307DCC419505_971*>* _DialogTargetRenderables; // 0x60
		::UnityEngine::Bounds _DialogTargetBounds; // 0x68
		::System::Boolean _NeedUpdateRenderer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_A5809AB80389F7DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET))(this);
		}

		::System::Void Method_3_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		::System::Void Method_3_A5809AB80389F7DE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_1_OFFSET))(this);
		}

		::System::Void Method_3_8DF47EF45ABD2A6C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_CEA32FF190776922()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CEA32FF190776922_OFFSET))(this);
		}

		::System::Void Method_3_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_3_1F3793A40D6D0F7F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1F3793A40D6D0F7F_OFFSET))(this);
		}

		::System::Void Method_3_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_3_F3A4A12640955A20(::Class_0_16E4307DCC419505_971* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F3A4A12640955A20_OFFSET))(this, a1);
		}

		::System::Void Method_3_3EBE5A8F310A42D3(::Class_0_16E4307DCC419505_971* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_971*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3EBE5A8F310A42D3_OFFSET))(this, a1);
		}

		::System::Void Method_3_549E6EFF8C7F104E(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET))(this, a1);
		}

		::System::Void Method_3_5FCE1CDDAE90A8B2(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5FCE1CDDAE90A8B2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_78110CB57EA2D55A(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_78110CB57EA2D55A_OFFSET))(this, a1);
		}

		::System::Void Method_3_549E6EFF8C7F104E_1(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_9B994748933F0708(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_9B994748933F0708_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1AE11C3424D3DD6A(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1AE11C3424D3DD6A_OFFSET))(this, a1);
		}

		::System::Void Method_3_D61E937BA820948F(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET))(this, a1);
		}

		::System::Void Method_3_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_3_D737CD2779D51A4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D737CD2779D51A4E_OFFSET))(this);
		}

		::RPG::Client::DialogRenderer* get__Owner()
		{
			return ((::RPG::Client::DialogRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		static ::System::Void Method_3_F82B4FC81CECCDB8(::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F82B4FC81CECCDB8_OFFSET))(a1, a2);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
