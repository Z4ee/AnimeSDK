#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextOutline_Mode.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class RampData; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTOUTLINE_APPLYFANCYPARAMS_OFFSET UNITYSDK_OFFSET(0xCA22750)
#define RPG_CLIENT_TEXTOUTLINE_APPLYOUTLINE_OFFSET UNITYSDK_OFFSET(0xCA23870)
#define RPG_CLIENT_TEXTOUTLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0xCA21E00)
#define RPG_CLIENT_TEXTOUTLINE_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0xCA21350)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0xCA21840)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0xCA21440)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0xCA21640)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0xCA21360)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0xCA21940)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0xCA21540)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0xCA21740)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xCA21320)
#define RPG_CLIENT_TEXTOUTLINE_GET_ISFANCYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCA226B0)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0xCA21C40)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0xCA21A40)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0xCA21B40)
#define RPG_CLIENT_TEXTOUTLINE_GET_REQUIREBASEMESH_OFFSET UNITYSDK_OFFSET(0xCA21340)
#define RPG_CLIENT_TEXTOUTLINE_GET_SHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0xCA22910)
#define RPG_CLIENT_TEXTOUTLINE_INITMATERIAL_OFFSET UNITYSDK_OFFSET(0xCA22040)
#define RPG_CLIENT_TEXTOUTLINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCA22A00)
#define RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xCA233C0)
#define RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xCA23370)
#define RPG_CLIENT_TEXTOUTLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCA23090)
#define RPG_CLIENT_TEXTOUTLINE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCA21E80)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0xCA21850)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0xCA21450)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0xCA21650)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0xCA21370)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0xCA21950)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0xCA21550)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0xCA21750)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xCA21330)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0xCA21C50)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0xCA21A50)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0xCA21B50)
#define RPG_CLIENT_TEXTOUTLINE_START_OFFSET UNITYSDK_OFFSET(0xCA21FF0)
#define RPG_CLIENT_TEXTOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA24C80)
#define RPG_CLIENT_TEXTOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA21D40)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xCA24D40)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xCA24E20)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCA24E10)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCA24D50)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xCA24E00)

namespace RPG::Client
{
	inline static constexpr unsigned int TextOutline_TypeDefinitionIndex = 67908;

	class TextOutline : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_OutlineFancyMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x51D20);
		}
		static ::UnityEngine::PassTagID* StaticGet__DefaultUnlit()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x51D28);
		}
		static ::UnityEngine::Material** StaticGet_m_OutlineMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x51D38);
		}
		static ::UnityEngine::PassTagID* StaticGet__WorldUI()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x51D40);
		}
		static ::System::Int32* StaticGet__ElementPosID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10100);
		}
		static ::System::Int32* StaticGet__NoiseSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10104);
		}
		static ::System::Int32* StaticGet__ColorTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10108);
		}
		static ::System::Int32* StaticGet__ColorTexSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x1010C);
		}
		static ::System::Int32* StaticGet__OutlineScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10110);
		}
		static ::System::Int32* StaticGet_m_Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10114);
		}
		static ::System::Int32* StaticGet_m_FancyCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x10118);
		}
		static ::System::Int32* StaticGet__NoiseTexID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x1011C);
		}
		// static const ::System::Single _OUTLINE_SAMPLE_LOW; // 0x0
		// static const ::System::Single _OUTLINE_SAMPLE_HIGH; // 0x0
		::RPG::Client::TextOutline_Mode renderMode; // 0x20
		::UnityEngine::Color outlineColor; // 0x24
		::System::Single outlineWidth; // 0x34
		::System::Single highQualityThreshold; // 0x38
		::System::Boolean haloOutline; // 0x3C
		::System::Boolean useFancyOutline; // 0x3D
		::UnityEngine::UI::ColorMode m_ColorMode; // 0x40
		::UnityEngine::UI::RampData* m_RampData; // 0x48
		::UnityEngine::Color m_RampColorLeft; // 0x50
		::UnityEngine::Color m_RampColorRight; // 0x60
		::UnityEngine::Color m_4RampColorLB; // 0x70
		::UnityEngine::Color m_4RampColorRB; // 0x80
		::System::Single m_RampRotation; // 0x90
		::System::Single m_RampScale; // 0x94
		::System::Single m_RampOffset; // 0x98
		::UnityEngine::Texture2D* m_ColorTex; // 0xA0
		::UnityEngine::Vector4 m_ColorTexSpeed; // 0xA8
		::UnityEngine::Texture2D* m_NoiseTex; // 0xB8
		::UnityEngine::Vector4 m_NoiseSpeed; // 0xC0
		::UnityEngine::Material* m_SourceMat; // 0xD0
		::UnityEngine::Material* m_MatInstance; // 0xD8
		::Il2CppArray<::UnityEngine::UIVertex>* m_Vert4; // 0xE0
		::Il2CppArray<::System::Int32>* m_Index; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE__CCTOR_OFFSET))();
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireBaseMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_REQUIREBASEMESH_OFFSET))(this);
		}

		::System::Boolean get_AddBaseMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_ADDBASEMESH_OFFSET))(this);
		}

		::UnityEngine::UI::ColorMode get_colorMode()
		{
			return ((::UnityEngine::UI::ColorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORMODE_OFFSET))(this);
		}

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLB_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRB_OFFSET))(this, a1);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPROTATION_OFFSET))(this, a1);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPSCALE_OFFSET))(this, a1);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPOFFSET_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_START_OFFSET))(this);
		}

		::System::Void InitMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_INITMATERIAL_OFFSET))(this);
		}

		::System::Void ApplyFancyParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_APPLYFANCYPARAMS_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_1_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyOutline(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_APPLYOUTLINE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsFancyInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_ISFANCYINSTANCE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_shaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_SHADERCHANNELS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ModifyMesh(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_MODIFYMESH_OFFSET))(this, a1, a2);
		}
	};
}
