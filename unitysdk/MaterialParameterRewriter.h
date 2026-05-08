#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialParameterRewriter_ApplicationScope.h"
#include "unitysdk/MaterialParameterRewriter_ParameterType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x19F124B0)
#define MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMTOMPB_OFFSET UNITYSDK_OFFSET(0x19F13720)
#define MATERIALPARAMETERREWRITER_APPLYCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x19F13EC0)
#define MATERIALPARAMETERREWRITER_APPLYGLOBALPARAMSTOMPB_OFFSET UNITYSDK_OFFSET(0x19F12C50)
#define MATERIALPARAMETERREWRITER_APPLYNODEPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x19F13360)
#define MATERIALPARAMETERREWRITER_APPLYNODEPARAMTORENDERER_OFFSET UNITYSDK_OFFSET(0x19F138A0)
#define MATERIALPARAMETERREWRITER_APPLYNOW_OFFSET UNITYSDK_OFFSET(0x19F12190)
#define MATERIALPARAMETERREWRITER_APPLYVALUETOMPB_OFFSET UNITYSDK_OFFSET(0x19F13A60)
#define MATERIALPARAMETERREWRITER_CLEARALLPROPERTYBLOCKS_OFFSET UNITYSDK_OFFSET(0x19F12690)
#define MATERIALPARAMETERREWRITER_COMMIT_OFFSET UNITYSDK_OFFSET(0x19F136B0)
#define MATERIALPARAMETERREWRITER_GATHERALLCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x19F12340)
#define MATERIALPARAMETERREWRITER_GETORCREATEMPB_OFFSET UNITYSDK_OFFSET(0x19F12AC0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x19F11C10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x19F11D50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x19F11E90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x19F11FD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x19F12110)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x19F11B70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x19F11CB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x19F11DF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x19F11F30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x19F12070)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x19F11BD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x19F11D10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x19F11E50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x19F11F90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x19F120D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x19F11B50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x19F11C90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x19F11DD0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x19F11F10)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x19F12050)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x19F11C50)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x19F11D90)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x19F11ED0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x19F12010)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x19F12150)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x19F11BF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x19F11D30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x19F11E70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x19F11FB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x19F120F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x19F11C70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x19F11DB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x19F11EF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x19F12030)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x19F12170)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x19F11C30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x19F11D70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x19F11EB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x19F11FF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x19F12130)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x19F11BB0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x19F11CF0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x19F11E30)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x19F11F70)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x19F120B0)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x19F11B90)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x19F11CD0)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x19F11E10)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x19F11F50)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x19F12090)
#define MATERIALPARAMETERREWRITER_ISRENDERERINTARGETNODE_OFFSET UNITYSDK_OFFSET(0x19F13CD0)
#define MATERIALPARAMETERREWRITER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19F12A70)
#define MATERIALPARAMETERREWRITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19F12A20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x19F11C20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x19F11D60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x19F11EA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x19F11FE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x19F12120)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x19F11B80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x19F11CC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x19F11E00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x19F11F40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x19F12080)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x19F11BE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x19F11D20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x19F11E60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x19F11FA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x19F120E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x19F11B60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x19F11CA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x19F11DE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x19F11F20)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x19F12060)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x19F11C60)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x19F11DA0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x19F11EE0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x19F12020)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x19F12160)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x19F11C00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x19F11D40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x19F11E80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x19F11FC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x19F12100)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x19F11C80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x19F11DC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x19F11F00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x19F12040)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x19F12180)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x19F11C40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x19F11D80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x19F11EC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x19F12000)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x19F12140)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x19F11BC0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x19F11D00)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x19F11E40)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x19F11F80)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x19F120C0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x19F11BA0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x19F11CE0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x19F11E20)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x19F11F60)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x19F120A0)
#define MATERIALPARAMETERREWRITER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F129D0)
#define MATERIALPARAMETERREWRITER_VALIDATEPARAMNAME_OFFSET UNITYSDK_OFFSET(0x19F11AF0)
#define MATERIALPARAMETERREWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F14120)
#define MATERIALPARAMETERREWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F13F60)

inline static constexpr unsigned int MaterialParameterRewriter_TypeDefinitionIndex = 29465;

class MaterialParameterRewriter : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__rendererBuffer()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialParameterRewriter_TypeDefinitionIndex)->GetStaticField(0x24980);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__tmpAllChildRenderers()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialParameterRewriter_TypeDefinitionIndex)->GetStaticField(0x24988);
	}
	::System::Boolean _animatedEnabled0; // 0x18
	::System::String* _animatedParamName0; // 0x20
	::MaterialParameterRewriter_ParameterType _paramType0; // 0x28
	::System::Single _animatedFloat0; // 0x2C
	::UnityEngine::Color _animatedColor0; // 0x30
	::System::Single _colorIntensity0; // 0x40
	::UnityEngine::Vector4 _animatedVector0; // 0x44
	::MaterialParameterRewriter_ApplicationScope _applicationScope0; // 0x54
	::UnityEngine::Transform* _targetNode0; // 0x58
	::System::Boolean _includeChildren0; // 0x60
	::System::Boolean _animatedEnabled1; // 0x61
	::System::String* _animatedParamName1; // 0x68
	::MaterialParameterRewriter_ParameterType _paramType1; // 0x70
	::System::Single _animatedFloat1; // 0x74
	::UnityEngine::Color _animatedColor1; // 0x78
	::System::Single _colorIntensity1; // 0x88
	::UnityEngine::Vector4 _animatedVector1; // 0x8C
	::MaterialParameterRewriter_ApplicationScope _applicationScope1; // 0x9C
	::UnityEngine::Transform* _targetNode1; // 0xA0
	::System::Boolean _includeChildren1; // 0xA8
	::System::Boolean _animatedEnabled2; // 0xA9
	::System::String* _animatedParamName2; // 0xB0
	::MaterialParameterRewriter_ParameterType _paramType2; // 0xB8
	::System::Single _animatedFloat2; // 0xBC
	::UnityEngine::Color _animatedColor2; // 0xC0
	::System::Single _colorIntensity2; // 0xD0
	::UnityEngine::Vector4 _animatedVector2; // 0xD4
	::MaterialParameterRewriter_ApplicationScope _applicationScope2; // 0xE4
	::UnityEngine::Transform* _targetNode2; // 0xE8
	::System::Boolean _includeChildren2; // 0xF0
	::System::Boolean _animatedEnabled3; // 0xF1
	::System::String* _animatedParamName3; // 0xF8
	::MaterialParameterRewriter_ParameterType _paramType3; // 0x100
	::System::Single _animatedFloat3; // 0x104
	::UnityEngine::Color _animatedColor3; // 0x108
	::System::Single _colorIntensity3; // 0x118
	::UnityEngine::Vector4 _animatedVector3; // 0x11C
	::MaterialParameterRewriter_ApplicationScope _applicationScope3; // 0x12C
	::UnityEngine::Transform* _targetNode3; // 0x130
	::System::Boolean _includeChildren3; // 0x138
	::System::Boolean _animatedEnabled4; // 0x139
	::System::String* _animatedParamName4; // 0x140
	::MaterialParameterRewriter_ParameterType _paramType4; // 0x148
	::System::Single _animatedFloat4; // 0x14C
	::UnityEngine::Color _animatedColor4; // 0x150
	::System::Single _colorIntensity4; // 0x160
	::UnityEngine::Vector4 _animatedVector4; // 0x164
	::MaterialParameterRewriter_ApplicationScope _applicationScope4; // 0x174
	::UnityEngine::Transform* _targetNode4; // 0x178
	::System::Boolean _includeChildren4; // 0x180
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* _mpbCache; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER__CCTOR_OFFSET))();
	}

	::System::Boolean ValidateParamName(::System::String* paramName)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_VALIDATEPARAMNAME_OFFSET))(this, paramName);
	}

	::System::Single get_AnimatedFloat0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT0_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat0(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT0_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor0()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR0_OFFSET))(this);
	}

	::System::Void set_AnimatedColor0(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR0_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY0_OFFSET))(this);
	}

	::System::Void set_ColorIntensity0(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY0_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector0()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR0_OFFSET))(this);
	}

	::System::Void set_AnimatedVector0(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR0_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED0_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled0(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED0_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME0_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName0(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME0_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope0()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE0_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope0(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE0_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode0()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE0_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode0(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE0_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN0_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren0(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN0_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType0()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE0_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType0(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE0_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT1_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat1(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT1_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor1()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR1_OFFSET))(this);
	}

	::System::Void set_AnimatedColor1(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR1_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY1_OFFSET))(this);
	}

	::System::Void set_ColorIntensity1(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY1_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector1()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR1_OFFSET))(this);
	}

	::System::Void set_AnimatedVector1(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR1_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED1_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled1(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED1_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME1_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName1(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME1_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope1()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE1_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope1(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE1_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE1_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode1(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE1_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN1_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren1(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN1_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType1()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE1_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType1(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE1_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT2_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat2(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT2_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor2()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR2_OFFSET))(this);
	}

	::System::Void set_AnimatedColor2(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR2_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY2_OFFSET))(this);
	}

	::System::Void set_ColorIntensity2(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY2_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector2()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR2_OFFSET))(this);
	}

	::System::Void set_AnimatedVector2(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR2_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED2_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled2(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED2_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME2_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName2(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME2_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope2()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE2_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope2(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE2_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE2_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode2(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE2_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN2_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren2(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN2_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType2()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE2_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType2(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE2_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT3_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat3(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT3_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor3()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR3_OFFSET))(this);
	}

	::System::Void set_AnimatedColor3(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR3_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY3_OFFSET))(this);
	}

	::System::Void set_ColorIntensity3(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY3_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector3()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR3_OFFSET))(this);
	}

	::System::Void set_AnimatedVector3(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR3_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED3_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED3_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME3_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName3(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME3_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope3()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE3_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope3(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE3_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE3_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode3(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE3_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN3_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN3_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType3()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE3_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType3(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE3_OFFSET))(this, value);
	}

	::System::Single get_AnimatedFloat4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT4_OFFSET))(this);
	}

	::System::Void set_AnimatedFloat4(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT4_OFFSET))(this, value);
	}

	::UnityEngine::Color get_AnimatedColor4()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR4_OFFSET))(this);
	}

	::System::Void set_AnimatedColor4(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR4_OFFSET))(this, value);
	}

	::System::Single get_ColorIntensity4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_COLORINTENSITY4_OFFSET))(this);
	}

	::System::Void set_ColorIntensity4(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_COLORINTENSITY4_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_AnimatedVector4()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR4_OFFSET))(this);
	}

	::System::Void set_AnimatedVector4(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR4_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedEnabled4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED4_OFFSET))(this);
	}

	::System::Void set_AnimatedEnabled4(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED4_OFFSET))(this, value);
	}

	::System::String* get_AnimatedParamName4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME4_OFFSET))(this);
	}

	::System::Void set_AnimatedParamName4(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME4_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ApplicationScope get_AnimatedApplicationScope4()
	{
		return ((::MaterialParameterRewriter_ApplicationScope(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE4_OFFSET))(this);
	}

	::System::Void set_AnimatedApplicationScope4(::MaterialParameterRewriter_ApplicationScope value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ApplicationScope))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE4_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_AnimatedTargetNode4()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE4_OFFSET))(this);
	}

	::System::Void set_AnimatedTargetNode4(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE4_OFFSET))(this, value);
	}

	::System::Boolean get_AnimatedIncludeChildren4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN4_OFFSET))(this);
	}

	::System::Void set_AnimatedIncludeChildren4(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN4_OFFSET))(this, value);
	}

	::MaterialParameterRewriter_ParameterType get_AnimatedParamType4()
	{
		return ((::MaterialParameterRewriter_ParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE4_OFFSET))(this);
	}

	::System::Void set_AnimatedParamType4(::MaterialParameterRewriter_ParameterType value)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter_ParameterType))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE4_OFFSET))(this, value);
	}

	::System::Void ApplyNow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYNOW_OFFSET))(this);
	}

	::System::Void ClearAllPropertyBlocks()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_CLEARALLPROPERTYBLOCKS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ONDESTROY_OFFSET))(this);
	}

	::System::Void ApplyAnimatedParamsToRenderer(::UnityEngine::Renderer* r)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMSTORENDERER_OFFSET))(this, r);
	}

	::System::Void ApplyGlobalParamsToMPB(::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYGLOBALPARAMSTOMPB_OFFSET))(this, mpb);
	}

	::System::Void ApplyNodeParamsToRenderer(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYNODEPARAMSTORENDERER_OFFSET))(this, r, mpb);
	}

	::System::Void ApplyAnimatedParamToMPB(::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::MaterialParameterRewriter_ApplicationScope scope, ::UnityEngine::Transform* targetNode, ::System::Boolean includeChildren, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::System::Boolean enabled, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::MaterialParameterRewriter_ApplicationScope, ::UnityEngine::Transform*, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Boolean, ::MaterialParameterRewriter_ParameterType, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMTOMPB_OFFSET))(this, mpb, paramName, scope, targetNode, includeChildren, floatValue, colorValue, vectorValue, enabled, paramType, colorIntensity);
	}

	::System::Void ApplyNodeParamToRenderer(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::MaterialParameterRewriter_ApplicationScope scope, ::UnityEngine::Transform* targetNode, ::System::Boolean includeChildren, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::System::Boolean enabled, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::MaterialParameterRewriter_ApplicationScope, ::UnityEngine::Transform*, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::System::Boolean, ::MaterialParameterRewriter_ParameterType, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYNODEPARAMTORENDERER_OFFSET))(this, r, mpb, paramName, scope, targetNode, includeChildren, floatValue, colorValue, vectorValue, enabled, paramType, colorIntensity);
	}

	::System::Boolean IsRendererInTargetNode(::UnityEngine::Renderer* renderer, ::UnityEngine::Transform* targetNode, ::System::Boolean includeChildren)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_ISRENDERERINTARGETNODE_OFFSET))(this, renderer, targetNode, includeChildren);
	}

	::System::Void ApplyValueToMPB(::UnityEngine::MaterialPropertyBlock* mpb, ::System::String* paramName, ::System::Single floatValue, ::UnityEngine::Color colorValue, ::UnityEngine::Vector4 vectorValue, ::MaterialParameterRewriter_ParameterType paramType, ::System::Single colorIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Vector4, ::MaterialParameterRewriter_ParameterType, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYVALUETOMPB_OFFSET))(this, mpb, paramName, floatValue, colorValue, vectorValue, paramType, colorIntensity);
	}

	::UnityEngine::Color ApplyColorIntensity(::UnityEngine::Color originalColor, ::System::Single intensity)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_APPLYCOLORINTENSITY_OFFSET))(this, originalColor, intensity);
	}

	::UnityEngine::MaterialPropertyBlock* GetOrCreateMPB(::UnityEngine::Renderer* r)
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GETORCREATEMPB_OFFSET))(this, r);
	}

	::System::Void Commit(::UnityEngine::Renderer* r, ::UnityEngine::MaterialPropertyBlock* mpb)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_COMMIT_OFFSET))(this, r, mpb);
	}

	::System::Void GatherAllChildRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* list)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MATERIALPARAMETERREWRITER_GATHERALLCHILDRENDERERS_OFFSET))(this, list);
	}
};
