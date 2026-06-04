#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_414BCDCDAD47B487;
class Class_2_7CFCF5679171877C;
namespace System { class String; }

#define CLASS_2_DA603AB5ED73A4F2_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x13AAA360)
#define CLASS_2_DA603AB5ED73A4F2_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x13AAA170)
#define CLASS_2_DA603AB5ED73A4F2_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x13AAA1F0)
#define CLASS_2_DA603AB5ED73A4F2_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x13AAA270)
#define CLASS_2_DA603AB5ED73A4F2_GETRECT_OFFSET UNITYSDK_OFFSET(0x13AAA300)
#define CLASS_2_DA603AB5ED73A4F2_METHOD_2_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x13AAA3E0)
#define CLASS_2_DA603AB5ED73A4F2_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x13AA9F40)
#define CLASS_2_DA603AB5ED73A4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA9E70)
#define CLASS_2_DA603AB5ED73A4F2___IFIXBASEPROXY_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x13AAA4A0)
#define CLASS_2_DA603AB5ED73A4F2___IFIXBASEPROXY_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x13AAA440)

inline static constexpr unsigned int Class_2_DA603AB5ED73A4F2_TypeDefinitionIndex = 68932;

class Class_2_DA603AB5ED73A4F2 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	::Class_2_7CFCF5679171877C* Field_2_0; // 0xB8
	::System::Single Field_2_1; // 0xC0
	::UnityEngine::Bounds Field_2_2; // 0xC4
	::UnityEngine::Rect Field_2_3; // 0xDC

	::System::Void _ctor(::Class_2_7CFCF5679171877C* a1, ::Class_1_414BCDCDAD47B487* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7CFCF5679171877C*, ::Class_1_414BCDCDAD47B487*))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTransformChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_ONTRANSFORMCHANGE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_GETBOUNDSIZE_OFFSET))(this);
	}

	::System::Single GetCullingDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_GETCULLINGDISTANCE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Boolean Method_2_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2_METHOD_2_66193B8782064F5D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTransformChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2___IFIXBASEPROXY_ONTRANSFORMCHANGE_OFFSET))(this);
	}

	::System::Single __iFixBaseProxy_GetCullingDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA603AB5ED73A4F2___IFIXBASEPROXY_GETCULLINGDISTANCE_OFFSET))(this);
	}
};
