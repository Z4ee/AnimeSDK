#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_0_16E4307DCC419505_814;
namespace RPG::Client { class DialogRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9456710)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x9456770)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x94541D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0DD6CC2B3E9CE73B_OFFSET UNITYSDK_OFFSET(0x9458D20)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1AE11C3424D3DD6A_OFFSET UNITYSDK_OFFSET(0x9458A50)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x94567E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9454100)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x94542D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_1_OFFSET UNITYSDK_OFFSET(0x94576F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET UNITYSDK_OFFSET(0x9456F10)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x945A9B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x945AA10)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x945AA70)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x945A950)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x9456290)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_63210DB6627C9581_OFFSET UNITYSDK_OFFSET(0x945A000)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x9454170)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x9455A80)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_87D695987E98317C_OFFSET UNITYSDK_OFFSET(0x94577E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_9B994748933F0708_OFFSET UNITYSDK_OFFSET(0x9459CB0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x9454830)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x94566D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET UNITYSDK_OFFSET(0x9456FA0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0x9457270)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F129775ACB6E2EB9_OFFSET UNITYSDK_OFFSET(0x9457B70)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x94562E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x945A3F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x945A3E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x945AAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 57527;

	class DialogRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__DialogShaders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x44660);
		}
		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11930);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11934);
		}
		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11938);
		}
		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x1193C);
		}
		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11940);
		}
		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11944);
		}
		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11948);
		}
		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x1194C);
		}
		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11950);
		}
		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11954);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11958);
		}
		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x1195C);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11960);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x11964);
		}
		::UnityEngine::Transform* _OwnerTransform; // 0x38
		::UnityEngine::Transform* _DialogCameraTransform; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::UnityEngine::Transform* _MainCameraTransform; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* _DialogTargetRenderers; // 0x58
		::Il2CppArray<::Class_0_16E4307DCC419505_814*>* _DialogTargetRenderables; // 0x60
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

		::System::Void Method_3_7B0A407379BA27E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_7B0A407379BA27E7_OFFSET))(this);
		}

		::System::Void Method_3_57F015DFC718ABA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4805283D59625FD9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET))(this);
		}

		::System::Void Method_3_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))(this);
		}

		::System::Void Method_3_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_3_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_3_E4D422DD274C36BD(::Class_0_16E4307DCC419505_814* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_814*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_E4D422DD274C36BD_OFFSET))(this, a1);
		}

		::System::Void Method_3_87D695987E98317C(::Class_0_16E4307DCC419505_814* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_814*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_87D695987E98317C_OFFSET))(this, a1);
		}

		::System::Void Method_3_549E6EFF8C7F104E(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET))(this, a1);
		}

		::System::Void Method_3_0DD6CC2B3E9CE73B(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0DD6CC2B3E9CE73B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F129775ACB6E2EB9(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F129775ACB6E2EB9_OFFSET))(this, a1);
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

		::System::Void Method_3_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_3_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET))(this);
		}

		::RPG::Client::DialogRenderer* get__Owner()
		{
			return ((::RPG::Client::DialogRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		static ::System::Void Method_3_63210DB6627C9581(::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_63210DB6627C9581_OFFSET))(a1, a2);
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

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
