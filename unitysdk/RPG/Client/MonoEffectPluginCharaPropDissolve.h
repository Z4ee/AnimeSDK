#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_INIT_OFFSET UNITYSDK_OFFSET(0x9CAE700)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_01BD521BAA5B9BAA_OFFSET UNITYSDK_OFFSET(0x9CB32B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_1AE11C3424D3DD6A_OFFSET UNITYSDK_OFFSET(0x9CB3530)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_1D96A7003D9A3921_OFFSET UNITYSDK_OFFSET(0x9CB2BF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_297AE451559FB6DB_OFFSET UNITYSDK_OFFSET(0x9CAEB10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9CAE7C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_44E448B8C77CD61E_OFFSET UNITYSDK_OFFSET(0x9CB25B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_796F456B27F8E2D1_OFFSET UNITYSDK_OFFSET(0x9CB05D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_9E7AFA84A37EECD1_OFFSET UNITYSDK_OFFSET(0x9CAEF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_A4C9707E8314C3A8_OFFSET UNITYSDK_OFFSET(0x9CAEBB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_B071C231B08D6398_OFFSET UNITYSDK_OFFSET(0x9CB1470)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C0BC29194EEB7A9A_OFFSET UNITYSDK_OFFSET(0x9CAF5E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C579909C82596E50_1_OFFSET UNITYSDK_OFFSET(0x9CAFF50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C579909C82596E50_OFFSET UNITYSDK_OFFSET(0x9CAF750)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C7F2412112EF7A26_OFFSET UNITYSDK_OFFSET(0x9CAE810)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_E1E37B85422AF149_OFFSET UNITYSDK_OFFSET(0x9CAEA50)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_E4867BA7EA09293C_OFFSET UNITYSDK_OFFSET(0x9CB31C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_F7488FD4C9CC18F9_OFFSET UNITYSDK_OFFSET(0x9CB3430)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_SETOUTLINEMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x9CAE6B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CAF2E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x9CAE8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB35D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9CB3680)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE___IFIXBASEPROXY_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CB3690)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropDissolve_TypeDefinitionIndex = 57231;

	class MonoEffectPluginCharaPropDissolve : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_EnableDissolve; // 0x40
		::System::Boolean _EnableDissolve; // 0x41
		::System::Boolean Toggle_DissolveMap; // 0x42
		::UnityEngine::Texture2D* _DissolveMap; // 0x48
		::System::Boolean Toggle_DissolveST; // 0x50
		::UnityEngine::Vector4 _DissolveST; // 0x54
		::System::Boolean Toggle_DistortionST; // 0x64
		::UnityEngine::Vector4 _DistortionST; // 0x68
		::System::Boolean Toggle_DissolveRate; // 0x78
		::System::Single _DissolveRate; // 0x7C
		::System::Boolean Toggle_DissolveUV; // 0x80
		::System::Single _DissolveUV; // 0x84
		::System::Boolean Toggle_DissolveDistortionIntensity; // 0x88
		::System::Single _DissolveDistortionIntensity; // 0x8C
		::System::Boolean Toggle_DissolveOutlineSize1; // 0x90
		::System::Single _DissolveOutlineSize1; // 0x94
		::System::Boolean Toggle_DissolveOutlineSize2; // 0x98
		::System::Single _DissolveOutlineSize2; // 0x9C
		::System::Boolean Toggle_DissolveOutlineEmission; // 0xA0
		::System::Single _DissolveOutlineEmission; // 0xA4
		::System::Boolean Toggle_DissolveMapAdd; // 0xA8
		::System::Single _DissolveMapAdd; // 0xAC
		::System::Boolean Toggle_DissolveOutlineColor1; // 0xB0
		::UnityEngine::Color _DissolveOutlineColor1; // 0xB4
		::System::Boolean Toggle_DissolveOutlineColor2; // 0xC4
		::UnityEngine::Color _DissolveOutlineColor2; // 0xC8
		::System::Boolean Toggle_DissoveDirecMask; // 0xD8
		::System::Single _DissoveDirecMask; // 0xDC
		::System::Boolean Toggle_DissolveUVSpeed; // 0xE0
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0xE4
		::System::Boolean Toggle_DissolveOutlineSmoothStep; // 0xF4
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0xF8
		::System::Boolean Toggle_DissolveMask; // 0x100
		::UnityEngine::Texture2D* _DissolveMask; // 0x108
		::System::Boolean Toggle_DissolveMaskUVSet; // 0x110
		::System::Single _DissolveMaskUVSet; // 0x114
		::System::Boolean Toggle_DissolveComponent; // 0x118
		::UnityEngine::Vector4 _DissolveComponent; // 0x11C
		::System::Boolean Toggle_DissolvePosMaskOn; // 0x12C
		::System::Single _DissolvePosMaskOn; // 0x130
		::System::Boolean Toggle_DissolvePosMaskWorldON; // 0x134
		::System::Single _DissolvePosMaskWorldON; // 0x138
		::System::Boolean Toggle_DissolvePosMaskFilpOn; // 0x13C
		::System::Single _DissolvePosMaskFilpOn; // 0x140
		::System::Boolean Toggle_DissolvePosMaskRootOffset; // 0x144
		::UnityEngine::Vector3 _DissolvePosMaskRootOffset; // 0x148
		::System::Boolean Toggle_DissolvePosTarget; // 0x154
		::UnityEngine::GameObject* _DissolvePosTarget; // 0x158
		::System::Boolean Toggle_DissolvePosRange; // 0x160
		::System::Single _DissolvePosMaskRange; // 0x164
		::System::Boolean Toggle_UseDither; // 0x168
		::System::Boolean _UseDither; // 0x169
		::System::Boolean Toggle_DitherAlpha; // 0x16A
		::System::Single _DitherAlpha; // 0x16C
		::System::Boolean Toggle_DitherFadeIn; // 0x170
		::System::Boolean _DitherFadeIn; // 0x171
		::System::Boolean Toggle_DissolveShadowOff; // 0x172
		::System::Int32 _DissolveShadowOff; // 0x174
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_58; // 0x178
		::System::Boolean Field_6_59; // 0x180
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_60; // 0x188
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_61; // 0x190
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* Field_6_62; // 0x198
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* Field_6_63; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void SetOutlineMaterialList(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_SETOUTLINEMATERIALLIST_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_UNINIT_OFFSET))(this);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_6_E1E37B85422AF149(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_E1E37B85422AF149_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C7F2412112EF7A26(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C7F2412112EF7A26_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_297AE451559FB6DB(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_297AE451559FB6DB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_A4C9707E8314C3A8(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_A4C9707E8314C3A8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_9E7AFA84A37EECD1(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_9E7AFA84A37EECD1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_796F456B27F8E2D1(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_796F456B27F8E2D1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_B071C231B08D6398(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_B071C231B08D6398_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1D96A7003D9A3921(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_1D96A7003D9A3921_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_44E448B8C77CD61E(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_44E448B8C77CD61E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C0BC29194EEB7A9A(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C0BC29194EEB7A9A_OFFSET))(this, a1);
		}

		::System::Void Method_6_C579909C82596E50(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C579909C82596E50_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C579909C82596E50_1(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_C579909C82596E50_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E4867BA7EA09293C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_E4867BA7EA09293C_OFFSET))(this, a1);
		}

		::System::Void Method_6_01BD521BAA5B9BAA(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_01BD521BAA5B9BAA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1AE11C3424D3DD6A(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_1AE11C3424D3DD6A_OFFSET))(this, a1);
		}

		::System::Void Method_6_F7488FD4C9CC18F9(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE_METHOD_6_F7488FD4C9CC18F9_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* P0, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* P1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPDISSOLVE___IFIXBASEPROXY_UNINIT_OFFSET))(this);
		}
	};
}
