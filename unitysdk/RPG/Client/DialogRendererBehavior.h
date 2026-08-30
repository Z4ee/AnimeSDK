#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_0_16E4307DCC419505_1067;
namespace RPG::Client { class DialogRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x192F2170)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x192F21D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1AE11C3424D3DD6A_OFFSET UNITYSDK_OFFSET(0x192F4750)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x192F14A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3EBE5A8F310A42D3_OFFSET UNITYSDK_OFFSET(0x192F33D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x192EFA80)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x192F01E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x192F2250)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET UNITYSDK_OFFSET(0x192F29A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_55E11F5A568A45D7_OFFSET UNITYSDK_OFFSET(0x192F3280)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5FCE1CDDAE90A8B2_OFFSET UNITYSDK_OFFSET(0x192F4A20)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_78110CB57EA2D55A_OFFSET UNITYSDK_OFFSET(0x192F3820)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0x192F20D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x192F1CB0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_9B994748933F0708_OFFSET UNITYSDK_OFFSET(0x192F5A00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_1_OFFSET UNITYSDK_OFFSET(0x192F2050)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x192EFAF0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x192F2130)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x192EFC60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET UNITYSDK_OFFSET(0x192F2A30)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x192EFB50)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0x192F1D00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F3A4A12640955A20_OFFSET UNITYSDK_OFFSET(0x192F2D00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F82B4FC81CECCDB8_OFFSET UNITYSDK_OFFSET(0x192F5D50)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x192F62B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x192F62A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 70246;

	class DialogRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__DialogShaders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x5AAA0);
		}
		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126A0);
		}
		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126A4);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126A8);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126AC);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126B0);
		}
		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126B4);
		}
		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126B8);
		}
		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126BC);
		}
		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}
		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126C4);
		}
		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126C8);
		}
		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126CC);
		}
		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126D0);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x126D4);
		}
		::UnityEngine::Transform* _OwnerTransform; // 0x38
		::UnityEngine::Transform* _DialogCameraTransform; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::UnityEngine::Transform* _MainCameraTransform; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* _DialogTargetRenderers; // 0x58
		::Il2CppArray<::Class_0_16E4307DCC419505_1067*>* _DialogTargetRenderables; // 0x60
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

		::System::Void Method_3_F3A4A12640955A20(::Class_0_16E4307DCC419505_1067* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1067*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_F3A4A12640955A20_OFFSET))(this, a1);
		}

		::System::Void Method_3_3EBE5A8F310A42D3(::Class_0_16E4307DCC419505_1067* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1067*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3EBE5A8F310A42D3_OFFSET))(this, a1);
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

		::System::Void Method_3_55E11F5A568A45D7(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_55E11F5A568A45D7_OFFSET))(this, a1);
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
	};
}
