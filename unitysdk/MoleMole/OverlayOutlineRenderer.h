#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/OverlayOutlineRenderer_Struct_2_FE254204089B286D.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NapGradient;
namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_OVERLAYOUTLINERENDERER_CLEAROUTLINESUPPRESSION_OFFSET UNITYSDK_OFFSET(0x1739E7A0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1739ECF0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_FORCEHIDEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1739E610)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1739F790)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1739F6D0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1739F080)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x1739D2C0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_6AA4327893736884_OFFSET UNITYSDK_OFFSET(0x1739D950)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_8B782E8AA167EEFF_OFFSET UNITYSDK_OFFSET(0x1739E290)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1739F820)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x1739F220)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_AD12FCAF6745A64D_OFFSET UNITYSDK_OFFSET(0x173A0A70)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0x173A0800)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_D799F376FC6F1700_OFFSET UNITYSDK_OFFSET(0x1739E060)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_F1CBF9DC71398C0E_OFFSET UNITYSDK_OFFSET(0x173A0E10)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1739D160)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1739D7F0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1739DB20)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1739F2F0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTHPEROBJECT_OFFSET UNITYSDK_OFFSET(0x1739E970)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTH_OFFSET UNITYSDK_OFFSET(0x1739E7F0)
#define MOLEMOLE_OVERLAYOUTLINERENDERER_SETOUTLINEPEROBJECT_OFFSET UNITYSDK_OFFSET(0x1739EB30)
#define MOLEMOLE_OVERLAYOUTLINERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173A0740)
#define MOLEMOLE_OVERLAYOUTLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x173A0600)

namespace MoleMole
{
	inline static constexpr unsigned int OverlayOutlineRenderer_TypeDefinitionIndex = 53219;

	class OverlayOutlineRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::OverlayOutlineRenderer_Struct_2_FE254204089B286D>** StaticGet_Field_5_37()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::OverlayOutlineRenderer_Struct_2_FE254204089B286D>**)Il2CppClass::FromTypeDefinitionIndex(OverlayOutlineRenderer_TypeDefinitionIndex)->GetStaticField(0x44E90);
		}
		::MoleMole::Config::OverlayOutlineConfig* config; // 0x18
		::System::Boolean useOutline; // 0x20
		::System::Boolean useOverlay; // 0x21
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_0; // 0x28
		::UnityEngine::Material* Field_5_7; // 0x30
		::MoleMole::Config::OverlayOutlineConfig* Field_5_6; // 0x38
		::UnityEngine::Material* Field_5_5; // 0x40
		::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_5_4; // 0x48
		::System::Boolean Field_5_11; // 0x50
		::System::Boolean Field_5_10; // 0x51
		::System::Boolean Field_5_9; // 0x52
		::System::Single Field_5_8; // 0x54
		::NapGradient* Field_5_15; // 0x58
		::NapGradient* Field_5_14; // 0x60
		::System::Single Field_5_13; // 0x68
		::System::Single Field_5_12; // 0x6C
		::System::Boolean Field_5_19; // 0x70
		::System::Boolean Field_5_18; // 0x71
		::System::Boolean Field_5_17; // 0x72
		::System::Single Field_5_16; // 0x74
		::System::Single Field_5_23; // 0x78
		::UnityEngine::Color Field_5_22; // 0x7C
		::UnityEngine::Color Field_5_21; // 0x8C
		::NapGradient* Field_5_20; // 0xA0
		::NapGradient* Field_5_27; // 0xA8
		::System::Single Field_5_26; // 0xB0
		::System::Boolean Field_5_25; // 0xB4
		::System::Int32 Field_5_24; // 0xB8
		::System::Int32 Field_5_31; // 0xBC
		::UnityEngine::Color Field_5_30; // 0xC0
		::UnityEngine::Color Field_5_29; // 0xD0
		::UnityEngine::Color Field_5_28; // 0xE0
		::System::Boolean Field_5_35; // 0xF0
		::System::Single Field_5_34; // 0xF4
		::System::Single Field_5_33; // 0xF8
		::System::Single Field_5_32; // 0xFC
		::System::Boolean Field_5_39; // 0x100
		::System::Boolean Field_5_38; // 0x101

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER__CCTOR_OFFSET))();
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_ONUPDATE_OFFSET))(this);
		}

		::System::Void ForceHideOutline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_FORCEHIDEOUTLINE_OFFSET))(this);
		}

		::System::Void ClearOutlineSuppression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_CLEAROUTLINESUPPRESSION_OFFSET))(this);
		}

		::System::Void SetOccludedByDepth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTH_OFFSET))(this, a1);
		}

		::System::Void SetOccludedByDepthPerObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOCCLUDEDBYDEPTHPEROBJECT_OFFSET))(this, a1);
		}

		::System::Void SetOutlinePerObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_SETOUTLINEPEROBJECT_OFFSET))(this, a1);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_FADEOUT_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_PLAYANIM_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Initialize_1(::MoleMole::Config::OverlayOutlineConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OverlayOutlineConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_INITIALIZE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_D799F376FC6F1700(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_D799F376FC6F1700_OFFSET))(this, a1);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
		}

		::System::Void Method_5_6AA4327893736884()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_6AA4327893736884_OFFSET))(this);
		}

		static ::UnityEngine::Material* Method_5_F1CBF9DC71398C0E(::MoleMole::Config::OverlayOutlineConfig* a1)
		{
			return ((::UnityEngine::Material*(*)(::MoleMole::Config::OverlayOutlineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_F1CBF9DC71398C0E_OFFSET))(a1);
		}

		::System::Void Method_5_8B782E8AA167EEFF(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_8B782E8AA167EEFF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Void Method_5_AF53AC45ED2466EB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_AF53AC45ED2466EB_OFFSET))(this, a1);
		}

		::System::Void Method_5_8DF47EF45ABD2A6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_8DF47EF45ABD2A6C_OFFSET))(this);
		}

		static ::System::Void Method_5_AD12FCAF6745A64D(::MoleMole::Config::OverlayOutlineConfig* a1)
		{
			return ((::System::Void(*)(::MoleMole::Config::OverlayOutlineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_AD12FCAF6745A64D_OFFSET))(a1);
		}

		::System::Void Method_5_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERLAYOUTLINERENDERER_METHOD_5_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}
	};
}
