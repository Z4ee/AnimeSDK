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

#define MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x1C12DC70)
#define MATERIALPARAMETERREWRITER_APPLYANIMATEDPARAMTOMPB_OFFSET UNITYSDK_OFFSET(0x1C12EEE0)
#define MATERIALPARAMETERREWRITER_APPLYCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1C12F680)
#define MATERIALPARAMETERREWRITER_APPLYGLOBALPARAMSTOMPB_OFFSET UNITYSDK_OFFSET(0x1C12E410)
#define MATERIALPARAMETERREWRITER_APPLYNODEPARAMSTORENDERER_OFFSET UNITYSDK_OFFSET(0x1C12EB20)
#define MATERIALPARAMETERREWRITER_APPLYNODEPARAMTORENDERER_OFFSET UNITYSDK_OFFSET(0x1C12F060)
#define MATERIALPARAMETERREWRITER_APPLYNOW_OFFSET UNITYSDK_OFFSET(0x1C12D950)
#define MATERIALPARAMETERREWRITER_APPLYVALUETOMPB_OFFSET UNITYSDK_OFFSET(0x1C12F220)
#define MATERIALPARAMETERREWRITER_CLEARALLPROPERTYBLOCKS_OFFSET UNITYSDK_OFFSET(0x1C12DE50)
#define MATERIALPARAMETERREWRITER_COMMIT_OFFSET UNITYSDK_OFFSET(0x1C12EE70)
#define MATERIALPARAMETERREWRITER_GATHERALLCHILDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1C12DB00)
#define MATERIALPARAMETERREWRITER_GETORCREATEMPB_OFFSET UNITYSDK_OFFSET(0x1C12E280)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x1C12D3D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x1C12D510)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x1C12D650)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x1C12D790)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x1C12D8D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x1C12D330)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x1C12D470)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x1C12D5B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x1C12D6F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x1C12D830)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x1C12D390)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x1C12D4D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x1C12D610)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x1C12D750)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x1C12D890)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x1C12D310)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x1C12D450)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x1C12D590)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x1C12D6D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x1C12D810)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x1C12D410)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x1C12D550)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x1C12D690)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x1C12D7D0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x1C12D910)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x1C12D3B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x1C12D4F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x1C12D630)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x1C12D770)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x1C12D8B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x1C12D430)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x1C12D570)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x1C12D6B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x1C12D7F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x1C12D930)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x1C12D3F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x1C12D530)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x1C12D670)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x1C12D7B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x1C12D8F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x1C12D370)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x1C12D4B0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x1C12D5F0)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C12D730)
#define MATERIALPARAMETERREWRITER_GET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x1C12D870)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x1C12D350)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x1C12D490)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1C12D5D0)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x1C12D710)
#define MATERIALPARAMETERREWRITER_GET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x1C12D850)
#define MATERIALPARAMETERREWRITER_ISRENDERERINTARGETNODE_OFFSET UNITYSDK_OFFSET(0x1C12F490)
#define MATERIALPARAMETERREWRITER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C12E230)
#define MATERIALPARAMETERREWRITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C12E1E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE0_OFFSET UNITYSDK_OFFSET(0x1C12D3E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE1_OFFSET UNITYSDK_OFFSET(0x1C12D520)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE2_OFFSET UNITYSDK_OFFSET(0x1C12D660)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE3_OFFSET UNITYSDK_OFFSET(0x1C12D7A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDAPPLICATIONSCOPE4_OFFSET UNITYSDK_OFFSET(0x1C12D8E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR0_OFFSET UNITYSDK_OFFSET(0x1C12D340)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR1_OFFSET UNITYSDK_OFFSET(0x1C12D480)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR2_OFFSET UNITYSDK_OFFSET(0x1C12D5C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR3_OFFSET UNITYSDK_OFFSET(0x1C12D700)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDCOLOR4_OFFSET UNITYSDK_OFFSET(0x1C12D840)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED0_OFFSET UNITYSDK_OFFSET(0x1C12D3A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED1_OFFSET UNITYSDK_OFFSET(0x1C12D4E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED2_OFFSET UNITYSDK_OFFSET(0x1C12D620)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED3_OFFSET UNITYSDK_OFFSET(0x1C12D760)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDENABLED4_OFFSET UNITYSDK_OFFSET(0x1C12D8A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT0_OFFSET UNITYSDK_OFFSET(0x1C12D320)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT1_OFFSET UNITYSDK_OFFSET(0x1C12D460)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT2_OFFSET UNITYSDK_OFFSET(0x1C12D5A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT3_OFFSET UNITYSDK_OFFSET(0x1C12D6E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDFLOAT4_OFFSET UNITYSDK_OFFSET(0x1C12D820)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN0_OFFSET UNITYSDK_OFFSET(0x1C12D420)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN1_OFFSET UNITYSDK_OFFSET(0x1C12D560)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN2_OFFSET UNITYSDK_OFFSET(0x1C12D6A0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN3_OFFSET UNITYSDK_OFFSET(0x1C12D7E0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDINCLUDECHILDREN4_OFFSET UNITYSDK_OFFSET(0x1C12D920)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME0_OFFSET UNITYSDK_OFFSET(0x1C12D3C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME1_OFFSET UNITYSDK_OFFSET(0x1C12D500)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME2_OFFSET UNITYSDK_OFFSET(0x1C12D640)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME3_OFFSET UNITYSDK_OFFSET(0x1C12D780)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMNAME4_OFFSET UNITYSDK_OFFSET(0x1C12D8C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE0_OFFSET UNITYSDK_OFFSET(0x1C12D440)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE1_OFFSET UNITYSDK_OFFSET(0x1C12D580)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE2_OFFSET UNITYSDK_OFFSET(0x1C12D6C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE3_OFFSET UNITYSDK_OFFSET(0x1C12D800)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDPARAMTYPE4_OFFSET UNITYSDK_OFFSET(0x1C12D940)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE0_OFFSET UNITYSDK_OFFSET(0x1C12D400)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE1_OFFSET UNITYSDK_OFFSET(0x1C12D540)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE2_OFFSET UNITYSDK_OFFSET(0x1C12D680)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE3_OFFSET UNITYSDK_OFFSET(0x1C12D7C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDTARGETNODE4_OFFSET UNITYSDK_OFFSET(0x1C12D900)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR0_OFFSET UNITYSDK_OFFSET(0x1C12D380)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR1_OFFSET UNITYSDK_OFFSET(0x1C12D4C0)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR2_OFFSET UNITYSDK_OFFSET(0x1C12D600)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C12D740)
#define MATERIALPARAMETERREWRITER_SET_ANIMATEDVECTOR4_OFFSET UNITYSDK_OFFSET(0x1C12D880)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY0_OFFSET UNITYSDK_OFFSET(0x1C12D360)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY1_OFFSET UNITYSDK_OFFSET(0x1C12D4A0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1C12D5E0)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY3_OFFSET UNITYSDK_OFFSET(0x1C12D720)
#define MATERIALPARAMETERREWRITER_SET_COLORINTENSITY4_OFFSET UNITYSDK_OFFSET(0x1C12D860)
#define MATERIALPARAMETERREWRITER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C12E190)
#define MATERIALPARAMETERREWRITER_VALIDATEPARAMNAME_OFFSET UNITYSDK_OFFSET(0x1C12D2B0)
#define MATERIALPARAMETERREWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C12F8E0)
#define MATERIALPARAMETERREWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12F720)

inline static constexpr unsigned int MaterialParameterRewriter_TypeDefinitionIndex = 26453;

class MaterialParameterRewriter : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__rendererBuffer()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialParameterRewriter_TypeDefinitionIndex)->GetStaticField(0x22230);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__tmpAllChildRenderers()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialParameterRewriter_TypeDefinitionIndex)->GetStaticField(0x22238);
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
