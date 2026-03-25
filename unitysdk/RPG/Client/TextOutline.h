#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class RampData; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTOUTLINE_APPLYOUTLINE_OFFSET UNITYSDK_OFFSET(0xA592D00)
#define RPG_CLIENT_TEXTOUTLINE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA591EB0)
#define RPG_CLIENT_TEXTOUTLINE_GET_ADDBASEMESH_OFFSET UNITYSDK_OFFSET(0xA5913F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0xA5918F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0xA5914F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0xA5916F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0xA591400)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0xA5919F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0xA5915F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0xA5917F0)
#define RPG_CLIENT_TEXTOUTLINE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA5913C0)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0xA591CF0)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0xA591AF0)
#define RPG_CLIENT_TEXTOUTLINE_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0xA591BF0)
#define RPG_CLIENT_TEXTOUTLINE_GET_REQUIREBASEMESH_OFFSET UNITYSDK_OFFSET(0xA5913E0)
#define RPG_CLIENT_TEXTOUTLINE_GET_SHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0xA592500)
#define RPG_CLIENT_TEXTOUTLINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA592550)
#define RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xA592AE0)
#define RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA592A90)
#define RPG_CLIENT_TEXTOUTLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA592980)
#define RPG_CLIENT_TEXTOUTLINE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA591F10)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0xA591900)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0xA591500)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0xA591700)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0xA591410)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0xA591A00)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0xA591600)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0xA591800)
#define RPG_CLIENT_TEXTOUTLINE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA5913D0)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0xA591D00)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0xA591B00)
#define RPG_CLIENT_TEXTOUTLINE_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0xA591C00)
#define RPG_CLIENT_TEXTOUTLINE_START_OFFSET UNITYSDK_OFFSET(0xA592090)
#define RPG_CLIENT_TEXTOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA594210)
#define RPG_CLIENT_TEXTOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA591DF0)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xA594230)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA594310)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA594300)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA594240)
#define RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xA5942F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextOutline_TypeDefinitionIndex = 59571;

	class TextOutline : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_OutlineMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0x2F500);
		}
		static ::System::Int32* StaticGet__OutlineScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0xF4C0);
		}
		static ::System::Int32* StaticGet_m_Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextOutline_TypeDefinitionIndex)->GetStaticField(0xF4C4);
		}
		// static const ::System::Single _OUTLINE_SAMPLE_LOW; // 0x0
		// static const ::System::Single _OUTLINE_SAMPLE_HIGH; // 0x0
		::UnityEngine::Color outlineColor; // 0x20
		::System::Single outlineWidth; // 0x30
		::System::Single highQualityThreshold; // 0x34
		::System::Boolean haloOutline; // 0x38
		::UnityEngine::UI::ColorMode m_ColorMode; // 0x3C
		::UnityEngine::UI::RampData* m_RampData; // 0x40
		::UnityEngine::Color m_RampColorLeft; // 0x48
		::UnityEngine::Color m_RampColorRight; // 0x58
		::UnityEngine::Color m_4RampColorLB; // 0x68
		::UnityEngine::Color m_4RampColorRB; // 0x78
		::System::Single m_RampRotation; // 0x88
		::System::Single m_RampScale; // 0x8C
		::System::Single m_RampOffset; // 0x90
		::UnityEngine::Material* m_MatInstance; // 0x98
		::Il2CppArray<::UnityEngine::UIVertex>* m_Vert4; // 0xA0
		::Il2CppArray<::System::Int32>* m_Index; // 0xA8

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

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLOR_OFFSET))(this, value);
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

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORMODE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLEFT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORLB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_COLORRB_OFFSET))(this, value);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPROTATION_OFFSET))(this, value);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPSCALE_OFFSET))(this, value);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_SET_RAMPOFFSET_OFFSET))(this, value);
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

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void ModifyMesh_1(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* baseVerts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_MODIFYMESH_1_OFFSET))(this, output, baseVerts);
		}

		::System::Void ApplyOutline(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* baseVerts, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE_APPLYOUTLINE_OFFSET))(this, baseVerts, output);
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

		::System::Void __iFixBaseProxy_ModifyMesh(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* P0, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTOUTLINE___IFIXBASEPROXY_MODIFYMESH_OFFSET))(this, P0, P1);
		}
	};
}
